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

// Function: sub_002358F8
// Address: 0x2358f8 - 0x235a64
void sub_002358F8_0x2358f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002358F8_0x2358f8");
#endif

    switch (ctx->pc) {
        case 0x235940u: goto label_235940;
        case 0x235988u: goto label_235988;
        case 0x235994u: goto label_235994;
        case 0x2359a4u: goto label_2359a4;
        case 0x2359c8u: goto label_2359c8;
        case 0x2359e4u: goto label_2359e4;
        case 0x2359f8u: goto label_2359f8;
        case 0x235a24u: goto label_235a24;
        default: break;
    }

    ctx->pc = 0x2358f8u;

    // 0x2358f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2358f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2358fc: 0x3c07004c  lui         $a3, 0x4C
    ctx->pc = 0x2358fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)76 << 16));
    // 0x235900: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x235900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x235904: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x235904u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235908: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x235908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23590c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x23590cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235910: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x235910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x235914: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x235914u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235918: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23591c: 0x24e37568  addiu       $v1, $a3, 0x7568
    ctx->pc = 0x23591cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 30056));
    // 0x235920: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x235924: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x235924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235928: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x235928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23592c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23592cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x235930: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x235930u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x4C7568u));
    // 0x235934: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x235934u;
    {
        const bool branch_taken_0x235934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235934u;
        // 0x235938: 0x8e900000  lw          $s0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235934) {
            ctx->pc = 0x235964u;
            goto label_235964;
        }
    }
    ctx->pc = 0x23593Cu;
    // 0x23593c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23593cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_235940:
    // 0x235940: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x235940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x235944: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x235944u;
    {
        const bool branch_taken_0x235944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235944u;
        // 0x235948: 0x246300ac  addiu       $v1, $v1, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235944) {
            ctx->pc = 0x235964u;
            goto label_235964;
        }
    }
    ctx->pc = 0x23594Cu;
    // 0x23594c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x23594cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x235950: 0x0  nop
    ctx->pc = 0x235950u;
    // NOP
    // 0x235954: 0x0  nop
    ctx->pc = 0x235954u;
    // NOP
    // 0x235958: 0x0  nop
    ctx->pc = 0x235958u;
    // NOP
    // 0x23595c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23595Cu;
    {
        const bool branch_taken_0x23595c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23595c) {
            ctx->pc = 0x235960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23595Cu;
            // 0x235960: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235940;
        }
    }
    ctx->pc = 0x235964u;
label_235964:
    // 0x235964: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x235964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x235968: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x235968u;
    {
        const bool branch_taken_0x235968 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x23596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235968u;
        // 0x23596c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235968) {
            ctx->pc = 0x235A40u;
            goto label_235a40;
        }
    }
    ctx->pc = 0x235970u;
    // 0x235970: 0x240200ac  addiu       $v0, $zero, 0xAC
    ctx->pc = 0x235970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x235974: 0x24e37568  addiu       $v1, $a3, 0x7568
    ctx->pc = 0x235974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 30056));
    // 0x235978: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x235978u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23597c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23597cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235980: 0xc0944c2  jal         func_251308
    ctx->pc = 0x235980u;
    SET_GPR_U32(ctx, 31, 0x235988u);
    ctx->pc = 0x235984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235980u;
    // 0x235984: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251308u, 0x235980u, 0x235988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235988u;
label_235988:
    // 0x235988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23598c: 0xc0944c4  jal         func_251310
    ctx->pc = 0x23598Cu;
    SET_GPR_U32(ctx, 31, 0x235994u);
    ctx->pc = 0x235990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23598Cu;
    // 0x235990: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251310u, 0x23598Cu, 0x235994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235994u;
label_235994:
    // 0x235994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235998: 0x287c2  srl         $s0, $v0, 31
    ctx->pc = 0x235998u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x23599c: 0xc0944c6  jal         func_251318
    ctx->pc = 0x23599Cu;
    SET_GPR_U32(ctx, 31, 0x2359A4u);
    ctx->pc = 0x2359A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23599Cu;
    // 0x2359a0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251318u, 0x23599Cu, 0x2359A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2359A4u;
label_2359a4:
    // 0x2359a4: 0x23fc2  srl         $a3, $v0, 31
    ctx->pc = 0x2359a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2359a8: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x2359a8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x2359ac: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2359acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2359b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2359b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2359b4: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x2359b4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x2359b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2359b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2359bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2359bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2359c0: 0xc08ad3e  jal         func_22B4F8
    ctx->pc = 0x2359C0u;
    SET_GPR_U32(ctx, 31, 0x2359C8u);
    ctx->pc = 0x2359C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2359C0u;
    // 0x2359c4: 0xc73821  addu        $a3, $a2, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B4F8u, 0x2359C0u, 0x2359C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2359C8u;
label_2359c8:
    // 0x2359c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2359c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2359cc: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2359CCu;
    {
        const bool branch_taken_0x2359cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2359D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2359CCu;
        // 0x2359d0: 0xae440004  sw          $a0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2359cc) {
            ctx->pc = 0x235A40u;
            goto label_235a40;
        }
    }
    ctx->pc = 0x2359D4u;
    // 0x2359d4: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x2359d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x2359d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2359d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2359dc: 0xc08aedc  jal         func_22BB70
    ctx->pc = 0x2359DCu;
    SET_GPR_U32(ctx, 31, 0x2359E4u);
    ctx->pc = 0x2359E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2359DCu;
    // 0x2359e0: 0x24a55ef8  addiu       $a1, $a1, 0x5EF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BB70u, 0x2359DCu, 0x2359E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2359E4u;
label_2359e4:
    // 0x2359e4: 0xae550008  sw          $s5, 0x8($s2)
    ctx->pc = 0x2359e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 21));
    // 0x2359e8: 0xa2530002  sb          $s3, 0x2($s2)
    ctx->pc = 0x2359e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x2359ec: 0x1a60000a  blez        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x2359ECu;
    {
        const bool branch_taken_0x2359ec = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x2359F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2359ECu;
        // 0x2359f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2359ec) {
            ctx->pc = 0x235A18u;
            goto label_235a18;
        }
    }
    ctx->pc = 0x2359F4u;
    // 0x2359f4: 0x2647000c  addiu       $a3, $s2, 0xC
    ctx->pc = 0x2359f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_2359f8:
    // 0x2359f8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2359f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2359fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2359fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x235a00: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x235a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x235a04: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x235a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x235a08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x235a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x235a0c: 0xd3282a  slt         $a1, $a2, $s3
    ctx->pc = 0x235a0cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x235a10: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x235A10u;
    {
        const bool branch_taken_0x235a10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x235A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A10u;
        // 0x235a14: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a10) {
            ctx->pc = 0x2359F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2359f8;
        }
    }
    ctx->pc = 0x235A18u;
label_235a18:
    // 0x235a18: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x235a18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x235a1c: 0xc08d62e  jal         func_2358B8
    ctx->pc = 0x235A1Cu;
    SET_GPR_U32(ctx, 31, 0x235A24u);
    ctx->pc = 0x235A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235A1Cu;
    // 0x235a20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2358B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2358B8u, 0x235A1Cu, 0x235A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235A24u;
label_235a24:
    // 0x235a24: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x235a24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x235a28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235a2c: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x235a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
    // 0x235a30: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x235a30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x235a34: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x235a34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x235a38: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x235a38u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x235a3c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x235a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_235a40:
    // 0x235a40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235a40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235a44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235a44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x235a48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x235a48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235a4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235a4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x235a50: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x235a50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235a54: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x235a54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x235a58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x235a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x235a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x235A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A5Cu;
        // 0x235a60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235A64u;
}
