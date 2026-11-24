#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D48D0
// Address: 0x1d48d0 - 0x1d4a24
void sub_001D48D0_0x1d48d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D48D0_0x1d48d0");
#endif

    switch (ctx->pc) {
        case 0x1d4924u: goto label_1d4924;
        case 0x1d4938u: goto label_1d4938;
        case 0x1d494cu: goto label_1d494c;
        case 0x1d4958u: goto label_1d4958;
        default: break;
    }

    ctx->pc = 0x1d48d0u;

    // 0x1d48d0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1d48d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1d48d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1d48d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1d48d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1d48d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1d48dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d48dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1d48e0: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x1d48e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48e4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d48e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d48e8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1d48e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d48ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d48f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d48f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d48f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d48f8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1d48f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d48fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d4900: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1d4900u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4904: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d4904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d4908: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1d4908u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d490c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d490cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d4910: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x1d4910u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4914: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d4914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d4918: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d4918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d491c: 0xc0768d8  jal         func_1DA360
    ctx->pc = 0x1D491Cu;
    SET_GPR_U32(ctx, 31, 0x1D4924u);
    ctx->pc = 0x1D4920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D491Cu;
    // 0x1d4920: 0xa3aa00af  sb          $t2, 0xAF($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA360u, 0x1D491Cu, 0x1D4924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4924u;
label_1d4924:
    // 0x1d4924: 0x1e082a  slt         $at, $zero, $fp
    ctx->pc = 0x1d4924u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x1d4928: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x1D4928u;
    {
        const bool branch_taken_0x1d4928 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4928u;
        // 0x1d492c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4928) {
            ctx->pc = 0x1D49E0u;
            goto label_1d49e0;
        }
    }
    ctx->pc = 0x1D4930u;
    // 0x1d4930: 0x27b600cc  addiu       $s6, $sp, 0xCC
    ctx->pc = 0x1d4930u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x1d4934: 0x0  nop
    ctx->pc = 0x1d4934u;
    // NOP
label_1d4938:
    // 0x1d4938: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1d4938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1d493c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1d493cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1d4940: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1d4940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4944: 0xc076918  jal         func_1DA460
    ctx->pc = 0x1D4944u;
    SET_GPR_U32(ctx, 31, 0x1D494Cu);
    ctx->pc = 0x1D4948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4944u;
    // 0x1d4948: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA460u, 0x1D4944u, 0x1D494Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D494Cu;
label_1d494c:
    // 0x1d494c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1d494cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1d4950: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D4950u;
    SET_GPR_U32(ctx, 31, 0x1D4958u);
    ctx->pc = 0x1D4954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4950u;
    // 0x1d4954: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D4950u, 0x1D4958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4958u;
label_1d4958:
    // 0x1d4958: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1d4958u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d495c: 0x27a200c8  addiu       $v0, $sp, 0xC8
    ctx->pc = 0x1d495cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x1d4960: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x1d4960u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x1d4964: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d4964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4968: 0x32220007  andi        $v0, $s1, 0x7
    ctx->pc = 0x1d4968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
    // 0x1d496c: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1d496cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1d4970: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d4970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d4974: 0x21bc0  sll         $v1, $v0, 15
    ctx->pc = 0x1d4974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x1d4978: 0x27a200c8  addiu       $v0, $sp, 0xC8
    ctx->pc = 0x1d4978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x1d497c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1d497cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1d4980: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x1d4980u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x1d4984: 0x93a200af  lbu         $v0, 0xAF($sp)
    ctx->pc = 0x1d4984u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 175)));
    // 0x1d4988: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D4988u;
    {
        const bool branch_taken_0x1d4988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4988u;
        // 0x1d498c: 0x2a010002  slti        $at, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4988) {
            ctx->pc = 0x1D49A8u;
            goto label_1d49a8;
        }
    }
    ctx->pc = 0x1D4990u;
    // 0x1d4990: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4990u;
    {
        const bool branch_taken_0x1d4990 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4990) {
            ctx->pc = 0x1D49A8u;
            goto label_1d49a8;
        }
    }
    ctx->pc = 0x1D4998u;
    // 0x1d4998: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1d4998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1d499c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1d499cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1d49a0: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1d49a0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1d49a4: 0x0  nop
    ctx->pc = 0x1d49a4u;
    // NOP
label_1d49a8:
    // 0x1d49a8: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x1d49a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d49ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d49acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d49b0: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1d49b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1d49b4: 0x21e102a  slt         $v0, $s0, $fp
    ctx->pc = 0x1d49b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x1d49b8: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1d49b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1d49bc: 0x7e430000  sq          $v1, 0x0($s2)
    ctx->pc = 0x1d49bcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
    // 0x1d49c0: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x1d49c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d49c4: 0x7e430010  sq          $v1, 0x10($s2)
    ctx->pc = 0x1d49c4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
    // 0x1d49c8: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1d49c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1d49cc: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x1d49ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d49d0: 0x7e430020  sq          $v1, 0x20($s2)
    ctx->pc = 0x1d49d0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 3));
    // 0x1d49d4: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1D49D4u;
    {
        const bool branch_taken_0x1d49d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D49D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49D4u;
        // 0x1d49d8: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d49d4) {
            ctx->pc = 0x1D4938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4938;
        }
    }
    ctx->pc = 0x1D49DCu;
    // 0x1d49dc: 0x0  nop
    ctx->pc = 0x1d49dcu;
    // NOP
label_1d49e0:
    // 0x1d49e0: 0x2571823  subu        $v1, $s2, $s7
    ctx->pc = 0x1d49e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
    // 0x1d49e4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D49E4u;
    {
        const bool branch_taken_0x1d49e4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1D49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49E4u;
        // 0x1d49e8: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d49e4) {
            ctx->pc = 0x1D49F4u;
            goto label_1d49f4;
        }
    }
    ctx->pc = 0x1D49ECu;
    // 0x1d49ec: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1d49ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1d49f0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1d49f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1d49f4:
    // 0x1d49f4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1d49f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d49f8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d49f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d49fc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d49fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d4a00: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d4a00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d4a04: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d4a04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d4a08: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d4a08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d4a0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d4a0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d4a10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d4a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4a14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d4a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d4a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A1Cu;
        // 0x1d4a20: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4A24u;
}
