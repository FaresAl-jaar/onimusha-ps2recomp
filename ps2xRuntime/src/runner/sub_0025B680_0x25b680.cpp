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

// Function: sub_0025B680
// Address: 0x25b680 - 0x25b824
void sub_0025B680_0x25b680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B680_0x25b680");
#endif

    switch (ctx->pc) {
        case 0x25b6bcu: goto label_25b6bc;
        case 0x25b730u: goto label_25b730;
        case 0x25b764u: goto label_25b764;
        case 0x25b800u: goto label_25b800;
        default: break;
    }

    ctx->pc = 0x25b680u;

    // 0x25b680: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25b680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25b684: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x25b684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x25b688: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25b688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25b68c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25b68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25b690: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x25b690u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b694: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25b694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25b698: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x25b698u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b69c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25b69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25b6a0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25b6a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b6a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25b6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25b6a8: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x25b6a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b6ac: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x25b6acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25b6b0: 0x90c60001  lbu         $a2, 0x1($a2)
    ctx->pc = 0x25b6b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x25b6b4: 0xc074350  jal         func_1D0D40
    ctx->pc = 0x25B6B4u;
    SET_GPR_U32(ctx, 31, 0x25B6BCu);
    ctx->pc = 0x25B6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B6B4u;
    // 0x25b6b8: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x25B6B4u, 0x25B6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B6BCu;
label_25b6bc:
    // 0x25b6bc: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x25b6bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x25b6c0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x25b6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x25b6c4: 0x92820001  lbu         $v0, 0x1($s4)
    ctx->pc = 0x25b6c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x25b6c8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x25b6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x25b6cc: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x25b6ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x25b6d0: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x25b6d0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25b6d4: 0xc31025  or          $v0, $a2, $v1
    ctx->pc = 0x25b6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x25b6d8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x25B6D8u;
    {
        const bool branch_taken_0x25b6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b6d8) {
            ctx->pc = 0x25B758u;
            goto label_25b758;
        }
    }
    ctx->pc = 0x25B6E0u;
    // 0x25b6e0: 0x661023  subu        $v0, $v1, $a2
    ctx->pc = 0x25b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x25b6e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25b6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b6e8: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x25b6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x25b6ec: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x25b6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25b6f0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x25b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x25b6f4: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x25b6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x25b6f8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x25b6f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25b6fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25b700: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x25b700u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x25b704: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x25b704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x25b708: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x25b708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25b70c: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x25b70cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x25b710: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x25b710u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x25b714: 0x0  nop
    ctx->pc = 0x25b714u;
    // NOP
    // 0x25b718: 0x0  nop
    ctx->pc = 0x25b718u;
    // NOP
    // 0x25b71c: 0x1810  mfhi        $v1
    ctx->pc = 0x25b71cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x25b720: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x25b720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x25b724: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25b724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25b728: 0xc074360  jal         func_1D0D80
    ctx->pc = 0x25B728u;
    SET_GPR_U32(ctx, 31, 0x25B730u);
    ctx->pc = 0x25B72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B728u;
    // 0x25b72c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D80u, 0x25B728u, 0x25B730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B730u;
label_25b730:
    // 0x25b730: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x25b730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25b734: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x25b734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25b738: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B738u;
    {
        const bool branch_taken_0x25b738 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x25B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B738u;
        // 0x25b73c: 0x62082a  slt         $at, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b738) {
            ctx->pc = 0x25B74Cu;
            goto label_25b74c;
        }
    }
    ctx->pc = 0x25B740u;
    // 0x25b740: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25B740u;
    {
        const bool branch_taken_0x25b740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B740u;
        // 0x25b744: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b740) {
            ctx->pc = 0x25B750u;
            goto label_25b750;
        }
    }
    ctx->pc = 0x25B748u;
    // 0x25b748: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x25b748u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_25b74c:
    // 0x25b74c: 0x41180a  movz        $v1, $v0, $at
    ctx->pc = 0x25b74cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_25b750:
    // 0x25b750: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x25b750u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x25b754: 0x0  nop
    ctx->pc = 0x25b754u;
    // NOP
label_25b758:
    // 0x25b758: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x25b758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25b75c: 0xc0743b0  jal         func_1D0EC0
    ctx->pc = 0x25B75Cu;
    SET_GPR_U32(ctx, 31, 0x25B764u);
    ctx->pc = 0x25B760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B75Cu;
    // 0x25b760: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0EC0u, 0x25B75Cu, 0x25B764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B764u;
label_25b764:
    // 0x25b764: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x25b764u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x25b768: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x25b768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25b76c: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x25b76cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25b770: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x25b770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x25b774: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x25B774u;
    {
        const bool branch_taken_0x25b774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b774) {
            ctx->pc = 0x25B7F0u;
            goto label_25b7f0;
        }
    }
    ctx->pc = 0x25B77Cu;
    // 0x25b77c: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x25b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x25b780: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x25b780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x25b784: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x25b784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25b788: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x25b788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x25b78c: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x25b78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x25b790: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x25b790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25b794: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25b794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25b798: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x25b798u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x25b79c: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x25b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x25b7a0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x25b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x25b7a4: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x25b7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x25b7a8: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x25b7a8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x25b7ac: 0x0  nop
    ctx->pc = 0x25b7acu;
    // NOP
    // 0x25b7b0: 0x0  nop
    ctx->pc = 0x25b7b0u;
    // NOP
    // 0x25b7b4: 0x1810  mfhi        $v1
    ctx->pc = 0x25b7b4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x25b7b8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x25b7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x25b7bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25b7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25b7c0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x25b7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x25b7c4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x25b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x25b7c8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B7C8u;
    {
        const bool branch_taken_0x25b7c8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x25B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B7C8u;
        // 0x25b7cc: 0x202082a  slt         $at, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b7c8) {
            ctx->pc = 0x25B7DCu;
            goto label_25b7dc;
        }
    }
    ctx->pc = 0x25B7D0u;
    // 0x25b7d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25B7D0u;
    {
        const bool branch_taken_0x25b7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B7D0u;
        // 0x25b7d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b7d0) {
            ctx->pc = 0x25B7ECu;
            goto label_25b7ec;
        }
    }
    ctx->pc = 0x25B7D8u;
    // 0x25b7d8: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x25b7d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_25b7dc:
    // 0x25b7dc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x25B7DCu;
    {
        const bool branch_taken_0x25b7dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b7dc) {
            ctx->pc = 0x25B7ECu;
            goto label_25b7ec;
        }
    }
    ctx->pc = 0x25B7E4u;
    // 0x25b7e4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x25B7E4u;
    {
        const bool branch_taken_0x25b7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B7E4u;
        // 0x25b7e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b7e4) {
            ctx->pc = 0x25B7ECu;
            goto label_25b7ec;
        }
    }
    ctx->pc = 0x25B7ECu;
label_25b7ec:
    // 0x25b7ec: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x25b7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_25b7f0:
    // 0x25b7f0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x25b7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25b7f4: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x25b7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x25b7f8: 0xc074378  jal         func_1D0DE0
    ctx->pc = 0x25B7F8u;
    SET_GPR_U32(ctx, 31, 0x25B800u);
    ctx->pc = 0x25B7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B7F8u;
    // 0x25b7fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x25B7F8u, 0x25B800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B800u;
label_25b800:
    // 0x25b800: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25b800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b804: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x25b804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25b808: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25b808u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25b80c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25b80cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25b810: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25b810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b814: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25b814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25b818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b81c: 0x3e00008  jr          $ra
    ctx->pc = 0x25B81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B81Cu;
        // 0x25b820: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B824u;
}
