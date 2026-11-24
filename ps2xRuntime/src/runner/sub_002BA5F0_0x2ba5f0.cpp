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

// Function: sub_002BA5F0
// Address: 0x2ba5f0 - 0x2ba6c0
void sub_002BA5F0_0x2ba5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA5F0_0x2ba5f0");
#endif

    switch (ctx->pc) {
        case 0x2ba638u: goto label_2ba638;
        case 0x2ba660u: goto label_2ba660;
        case 0x2ba66cu: goto label_2ba66c;
        case 0x2ba688u: goto label_2ba688;
        case 0x2ba690u: goto label_2ba690;
        default: break;
    }

    ctx->pc = 0x2ba5f0u;

    // 0x2ba5f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ba5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ba5f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ba5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ba5f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ba5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ba5fc: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x2ba5fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x2ba600: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2BA600u;
    {
        const bool branch_taken_0x2ba600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba600) {
            ctx->pc = 0x2BA658u;
            goto label_2ba658;
        }
    }
    ctx->pc = 0x2BA608u;
    // 0x2ba608: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2ba608u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ba60c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2ba60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2ba610: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA610u;
    {
        const bool branch_taken_0x2ba610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba610) {
            ctx->pc = 0x2BA620u;
            goto label_2ba620;
        }
    }
    ctx->pc = 0x2BA618u;
    // 0x2ba618: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ba618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ba61c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2ba61cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_2ba620:
    // 0x2ba620: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2ba620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2ba624: 0x24830018  addiu       $v1, $a0, 0x18
    ctx->pc = 0x2ba624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x2ba628: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ba628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ba62c: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x2ba62cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x2ba630: 0x90850007  lbu         $a1, 0x7($a0)
    ctx->pc = 0x2ba630u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x2ba634: 0x0  nop
    ctx->pc = 0x2ba634u;
    // NOP
label_2ba638:
    // 0x2ba638: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ba638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ba63c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2ba63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2ba640: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ba640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ba644: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2ba644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2ba648: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2ba648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2ba64c: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BA64Cu;
    {
        const bool branch_taken_0x2ba64c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba64c) {
            ctx->pc = 0x2BA638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ba638;
        }
    }
    ctx->pc = 0x2BA654u;
    // 0x2ba654: 0x0  nop
    ctx->pc = 0x2ba654u;
    // NOP
label_2ba658:
    // 0x2ba658: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x2BA658u;
    SET_GPR_U32(ctx, 31, 0x2BA660u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x2BA658u, 0x2BA660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA660u;
label_2ba660:
    // 0x2ba660: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x2ba660u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ba664: 0xc0ae974  jal         func_2BA5D0
    ctx->pc = 0x2BA664u;
    SET_GPR_U32(ctx, 31, 0x2BA66Cu);
    ctx->pc = 0x2BA668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA664u;
    // 0x2ba668: 0x10803f  dsra32      $s0, $s0, 0 (Delay Slot)
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA5D0u, 0x2BA664u, 0x2BA66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA66Cu;
label_2ba66c:
    // 0x2ba66c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2ba66cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2ba670: 0x4843a001  cfc2.i      $v1, $vi20
    ctx->pc = 0x2ba670u;
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(_mm_cvtsi128_si32(_mm_castps_si128(ctx->vu0_r))));
    // 0x2ba674: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2ba674u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ba678: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2ba678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2ba67c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2BA67Cu;
    {
        const bool branch_taken_0x2ba67c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba67c) {
            ctx->pc = 0x2BA6B0u;
            goto label_2ba6b0;
        }
    }
    ctx->pc = 0x2BA684u;
    // 0x2ba684: 0x0  nop
    ctx->pc = 0x2ba684u;
    // NOP
label_2ba688:
    // 0x2ba688: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x2BA688u;
    SET_GPR_U32(ctx, 31, 0x2BA690u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x2BA688u, 0x2BA690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA690u;
label_2ba690:
    // 0x2ba690: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ba690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ba694: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2ba694u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2ba698: 0x48c3a001  ctc2.i      $v1, $vi20
    ctx->pc = 0x2ba698u;
    ctx->vu0_r = _mm_castsi128_ps(_mm_set1_epi32(static_cast<int32_t>(GPR_U32(ctx, 3))));
    // 0x2ba69c: 0x4843a001  cfc2.i      $v1, $vi20
    ctx->pc = 0x2ba69cu;
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(_mm_cvtsi128_si32(_mm_castps_si128(ctx->vu0_r))));
    // 0x2ba6a0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2ba6a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ba6a4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2ba6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2ba6a8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2BA6A8u;
    {
        const bool branch_taken_0x2ba6a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba6a8) {
            ctx->pc = 0x2BA688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ba688;
        }
    }
    ctx->pc = 0x2BA6B0u;
label_2ba6b0:
    // 0x2ba6b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ba6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba6b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ba6b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA6B8u;
        // 0x2ba6bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA6C0u;
}
