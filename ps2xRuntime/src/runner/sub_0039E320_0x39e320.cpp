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

// Function: sub_0039E320
// Address: 0x39e320 - 0x39e39c
void sub_0039E320_0x39e320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E320_0x39e320");
#endif

    switch (ctx->pc) {
        case 0x39e334u: goto label_39e334;
        case 0x39e34cu: goto label_39e34c;
        case 0x39e35cu: goto label_39e35c;
        case 0x39e384u: goto label_39e384;
        case 0x39e38cu: goto label_39e38c;
        default: break;
    }

    ctx->pc = 0x39e320u;

    // 0x39e320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39e320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39e324: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39e324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39e328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39e328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39e32c: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x39E32Cu;
    SET_GPR_U32(ctx, 31, 0x39E334u);
    ctx->pc = 0x39E330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E32Cu;
    // 0x39e330: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x39E32Cu, 0x39E334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E334u;
label_39e334:
    // 0x39e334: 0xa2002bd7  sb          $zero, 0x2BD7($s0)
    ctx->pc = 0x39e334u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11223), (uint8_t)GPR_U32(ctx, 0));
    // 0x39e338: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x39e338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39e33c: 0xa2022bd8  sb          $v0, 0x2BD8($s0)
    ctx->pc = 0x39e33cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11224), (uint8_t)GPR_U32(ctx, 2));
    // 0x39e340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39e340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e344: 0xc0e6f60  jal         func_39BD80
    ctx->pc = 0x39E344u;
    SET_GPR_U32(ctx, 31, 0x39E34Cu);
    ctx->pc = 0x39E348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E344u;
    // 0x39e348: 0xa2002bd6  sb          $zero, 0x2BD6($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11222), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BD80u, 0x39E344u, 0x39E34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E34Cu;
label_39e34c:
    // 0x39e34c: 0xa2002bed  sb          $zero, 0x2BED($s0)
    ctx->pc = 0x39e34cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11245), (uint8_t)GPR_U32(ctx, 0));
    // 0x39e350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39e350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e354: 0xc0e6ff4  jal         func_39BFD0
    ctx->pc = 0x39E354u;
    SET_GPR_U32(ctx, 31, 0x39E35Cu);
    ctx->pc = 0x39E358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E354u;
    // 0x39e358: 0xa6002bee  sh          $zero, 0x2BEE($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 11246), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BFD0u, 0x39E354u, 0x39E35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E35Cu;
label_39e35c:
    // 0x39e35c: 0xa6022bf0  sh          $v0, 0x2BF0($s0)
    ctx->pc = 0x39e35cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11248), (uint16_t)GPR_U32(ctx, 2));
    // 0x39e360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39e360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e364: 0xa6002be0  sh          $zero, 0x2BE0($s0)
    ctx->pc = 0x39e364u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11232), (uint16_t)GPR_U32(ctx, 0));
    // 0x39e368: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x39e368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39e36c: 0xae002be4  sw          $zero, 0x2BE4($s0)
    ctx->pc = 0x39e36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11236), GPR_U32(ctx, 0));
    // 0x39e370: 0xae002be8  sw          $zero, 0x2BE8($s0)
    ctx->pc = 0x39e370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11240), GPR_U32(ctx, 0));
    // 0x39e374: 0xa2002be2  sb          $zero, 0x2BE2($s0)
    ctx->pc = 0x39e374u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11234), (uint8_t)GPR_U32(ctx, 0));
    // 0x39e378: 0xa2002bec  sb          $zero, 0x2BEC($s0)
    ctx->pc = 0x39e378u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11244), (uint8_t)GPR_U32(ctx, 0));
    // 0x39e37c: 0xc0e7218  jal         func_39C860
    ctx->pc = 0x39E37Cu;
    SET_GPR_U32(ctx, 31, 0x39E384u);
    ctx->pc = 0x39E380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E37Cu;
    // 0x39e380: 0xa6022bce  sh          $v0, 0x2BCE($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 11214), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C860u, 0x39E37Cu, 0x39E384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E384u;
label_39e384:
    // 0x39e384: 0xc0e70f0  jal         func_39C3C0
    ctx->pc = 0x39E384u;
    SET_GPR_U32(ctx, 31, 0x39E38Cu);
    ctx->pc = 0x39E388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E384u;
    // 0x39e388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C3C0u, 0x39E384u, 0x39E38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E38Cu;
label_39e38c:
    // 0x39e38c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39e38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39e390: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39e390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39e394: 0x3e00008  jr          $ra
    ctx->pc = 0x39E394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E394u;
        // 0x39e398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E39Cu;
}
