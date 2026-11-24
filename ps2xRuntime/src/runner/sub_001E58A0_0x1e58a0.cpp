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

// Function: sub_001E58A0
// Address: 0x1e58a0 - 0x1e5a4c
void sub_001E58A0_0x1e58a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E58A0_0x1e58a0");
#endif

    switch (ctx->pc) {
        case 0x1e58e0u: goto label_1e58e0;
        case 0x1e58ecu: goto label_1e58ec;
        case 0x1e5944u: goto label_1e5944;
        case 0x1e5954u: goto label_1e5954;
        case 0x1e5968u: goto label_1e5968;
        case 0x1e5a08u: goto label_1e5a08;
        case 0x1e5a30u: goto label_1e5a30;
        default: break;
    }

    ctx->pc = 0x1e58a0u;

    // 0x1e58a0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1e58a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1e58a4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e58a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e58a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e58a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e58ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e58acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e58b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e58b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e58b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e58b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e58b8: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e58b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e58bc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E58BCu;
    {
        const bool branch_taken_0x1e58bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E58C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E58BCu;
        // 0x1e58c0: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e58bc) {
            ctx->pc = 0x1E58D0u;
            goto label_1e58d0;
        }
    }
    ctx->pc = 0x1E58C4u;
    // 0x1e58c4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1E58C4u;
    {
        const bool branch_taken_0x1e58c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E58C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E58C4u;
        // 0x1e58c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e58c4) {
            ctx->pc = 0x1E5A38u;
            goto label_1e5a38;
        }
    }
    ctx->pc = 0x1E58CCu;
    // 0x1e58cc: 0x0  nop
    ctx->pc = 0x1e58ccu;
    // NOP
label_1e58d0:
    // 0x1e58d0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e58d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e58d4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e58d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e58d8: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1E58D8u;
    SET_GPR_U32(ctx, 31, 0x1E58E0u);
    ctx->pc = 0x1E58DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E58D8u;
    // 0x1e58dc: 0x26260080  addiu       $a2, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1E58D8u, 0x1E58E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E58E0u;
label_1e58e0:
    // 0x1e58e0: 0x86250040  lh          $a1, 0x40($s1)
    ctx->pc = 0x1e58e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1e58e4: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x1E58E4u;
    SET_GPR_U32(ctx, 31, 0x1E58ECu);
    ctx->pc = 0x1E58E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E58E4u;
    // 0x1e58e8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x1E58E4u, 0x1E58ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E58ECu;
label_1e58ec:
    // 0x1e58ec: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e58ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e58f0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1e58f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1e58f4: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x1e58f4u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x1e58f8: 0x27aa00a0  addiu       $t2, $sp, 0xA0
    ctx->pc = 0x1e58f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e58fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e58fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e5900: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e5900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e5904: 0x24a56c20  addiu       $a1, $a1, 0x6C20
    ctx->pc = 0x1e5904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27680));
    // 0x1e5908: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e5908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e590c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e590cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e5910: 0x7fa90070  sq          $t1, 0x70($sp)
    ctx->pc = 0x1e5910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 9));
    // 0x1e5914: 0x78285c30  lq          $t0, 0x5C30($at)
    ctx->pc = 0x1e5914u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x665C30u));
    // 0x1e5918: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e5918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e591c: 0x7fa80080  sq          $t0, 0x80($sp)
    ctx->pc = 0x1e591cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 8));
    // 0x1e5920: 0x78275c40  lq          $a3, 0x5C40($at)
    ctx->pc = 0x1e5920u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x665C40u));
    // 0x1e5924: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e5924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e5928: 0x7fa70090  sq          $a3, 0x90($sp)
    ctx->pc = 0x1e5928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 7));
    // 0x1e592c: 0x78235c50  lq          $v1, 0x5C50($at)
    ctx->pc = 0x1e592cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C50u));
    // 0x1e5930: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1e5930u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1e5934: 0x7ba30120  lq          $v1, 0x120($sp)
    ctx->pc = 0x1e5934u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1e5938: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1e5938u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1e593c: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E593Cu;
    SET_GPR_U32(ctx, 31, 0x1E5944u);
    ctx->pc = 0x1E5940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E593Cu;
    // 0x1e5940: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E593Cu, 0x1E5944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5944u;
label_1e5944:
    // 0x1e5944: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e5944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e5948: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1e5948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e594c: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E594Cu;
    SET_GPR_U32(ctx, 31, 0x1E5954u);
    ctx->pc = 0x1E5950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E594Cu;
    // 0x1e5950: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E594Cu, 0x1E5954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5954u;
label_1e5954:
    // 0x1e5954: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e5954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e5958: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1e5958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1e595c: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1e595cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1e5960: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E5960u;
    SET_GPR_U32(ctx, 31, 0x1E5968u);
    ctx->pc = 0x1E5964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5960u;
    // 0x1e5964: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E5960u, 0x1E5968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5968u;
label_1e5968:
    // 0x1e5968: 0x7a230050  lq          $v1, 0x50($s1)
    ctx->pc = 0x1e5968u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1e596c: 0x10343c  dsll32      $a2, $s0, 16
    ctx->pc = 0x1e596cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1e5970: 0x27a700fc  addiu       $a3, $sp, 0xFC
    ctx->pc = 0x1e5970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x1e5974: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1e5974u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1e5978: 0x27a5010c  addiu       $a1, $sp, 0x10C
    ctx->pc = 0x1e5978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x1e597c: 0x27a4011c  addiu       $a0, $sp, 0x11C
    ctx->pc = 0x1e597cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x1e5980: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5984: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x1e5984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
    // 0x1e5988: 0x7a230060  lq          $v1, 0x60($s1)
    ctx->pc = 0x1e5988u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1e598c: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x1e598cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x1e5990: 0x7a230070  lq          $v1, 0x70($s1)
    ctx->pc = 0x1e5990u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1e5994: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x1e5994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x1e5998: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1e5998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e599c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x1e599cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e59a0: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x1e59a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1e59a4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1e59a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1e59a8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e59a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e59ac: 0x70661818  mult1       $v1, $v1, $a2
    ctx->pc = 0x1e59acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e59b0: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x1e59b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1e59b4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1e59b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1e59b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e59b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e59bc: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x1e59bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e59c0: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x1e59c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1e59c4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e59c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1e59c8: 0x92230033  lbu         $v1, 0x33($s1)
    ctx->pc = 0x1e59c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 51)));
    // 0x1e59cc: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E59CCu;
    {
        const bool branch_taken_0x1e59cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e59cc) {
            ctx->pc = 0x1E5A10u;
            goto label_1e5a10;
        }
    }
    ctx->pc = 0x1E59D4u;
    // 0x1e59d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E59D4u;
    {
        const bool branch_taken_0x1e59d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e59d4) {
            ctx->pc = 0x1E59E8u;
            goto label_1e59e8;
        }
    }
    ctx->pc = 0x1E59DCu;
    // 0x1e59dc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E59DCu;
    {
        const bool branch_taken_0x1e59dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e59dc) {
            ctx->pc = 0x1E5A30u;
            goto label_1e5a30;
        }
    }
    ctx->pc = 0x1E59E4u;
    // 0x1e59e4: 0x0  nop
    ctx->pc = 0x1e59e4u;
    // NOP
label_1e59e8:
    // 0x1e59e8: 0x92260032  lbu         $a2, 0x32($s1)
    ctx->pc = 0x1e59e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x1e59ec: 0xc62c0038  lwc1        $f12, 0x38($s1)
    ctx->pc = 0x1e59ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e59f0: 0x92270031  lbu         $a3, 0x31($s1)
    ctx->pc = 0x1e59f0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
    // 0x1e59f4: 0xc62d003c  lwc1        $f13, 0x3C($s1)
    ctx->pc = 0x1e59f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e59f8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e59f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e59fc: 0xc62e0044  lwc1        $f14, 0x44($s1)
    ctx->pc = 0x1e59fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e5a00: 0xc0b9894  jal         func_2E6250
    ctx->pc = 0x1E5A00u;
    SET_GPR_U32(ctx, 31, 0x1E5A08u);
    ctx->pc = 0x1E5A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5A00u;
    // 0x1e5a04: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6250u, 0x1E5A00u, 0x1E5A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5A08u;
label_1e5a08:
    // 0x1e5a08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E5A08u;
    {
        const bool branch_taken_0x1e5a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5a08) {
            ctx->pc = 0x1E5A30u;
            goto label_1e5a30;
        }
    }
    ctx->pc = 0x1E5A10u;
label_1e5a10:
    // 0x1e5a10: 0x92260032  lbu         $a2, 0x32($s1)
    ctx->pc = 0x1e5a10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x1e5a14: 0xc62c0038  lwc1        $f12, 0x38($s1)
    ctx->pc = 0x1e5a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e5a18: 0x92270031  lbu         $a3, 0x31($s1)
    ctx->pc = 0x1e5a18u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
    // 0x1e5a1c: 0xc62d003c  lwc1        $f13, 0x3C($s1)
    ctx->pc = 0x1e5a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e5a20: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e5a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e5a24: 0xc62e0044  lwc1        $f14, 0x44($s1)
    ctx->pc = 0x1e5a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e5a28: 0xc0b9948  jal         func_2E6520
    ctx->pc = 0x1E5A28u;
    SET_GPR_U32(ctx, 31, 0x1E5A30u);
    ctx->pc = 0x1E5A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5A28u;
    // 0x1e5a2c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6520u, 0x1E5A28u, 0x1E5A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5A30u;
label_1e5a30:
    // 0x1e5a30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e5a30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5a34: 0x0  nop
    ctx->pc = 0x1e5a34u;
    // NOP
label_1e5a38:
    // 0x1e5a38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e5a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5a3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5a3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5a40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5a44: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A44u;
        // 0x1e5a48: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5A4Cu;
}
