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

// Function: sub_002490E8
// Address: 0x2490e8 - 0x2491a8
void sub_002490E8_0x2490e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002490E8_0x2490e8");
#endif

    switch (ctx->pc) {
        case 0x249118u: goto label_249118;
        case 0x249150u: goto label_249150;
        case 0x24916cu: goto label_24916c;
        case 0x24917cu: goto label_24917c;
        case 0x24918cu: goto label_24918c;
        default: break;
    }

    ctx->pc = 0x2490e8u;

    // 0x2490e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2490e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2490ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2490ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2490f0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2490f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2490f4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2490f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2490f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2490f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2490fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2490fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x249100: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x249100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249104: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x249104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x249108: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x249108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24910c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x24910cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x249110: 0xc04a58a  jal         func_129628
    ctx->pc = 0x249110u;
    SET_GPR_U32(ctx, 31, 0x249118u);
    ctx->pc = 0x249114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249110u;
    // 0x249114: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129628u, 0x249110u, 0x249118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249118u;
label_249118:
    // 0x249118: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x249118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24911c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x24911cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x249120: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x249120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249124: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x249124u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x249128: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x249128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24912c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24912cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249130: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x249130u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x249134: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x249134u;
    {
        const bool branch_taken_0x249134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249134u;
        // 0x249138: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249134) {
            ctx->pc = 0x249140u;
            goto label_249140;
        }
    }
    ctx->pc = 0x24913Cu;
    // 0x24913c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x24913cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_249140:
    // 0x249140: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x249140u;
    {
        const bool branch_taken_0x249140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x249140) {
            ctx->pc = 0x249144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249140u;
            // 0x249144: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249160u;
            goto label_249160;
        }
    }
    ctx->pc = 0x249148u;
    // 0x249148: 0xc04a58a  jal         func_129628
    ctx->pc = 0x249148u;
    SET_GPR_U32(ctx, 31, 0x249150u);
    ctx->pc = 0x24914Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249148u;
    // 0x24914c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129628u, 0x249148u, 0x249150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249150u;
label_249150:
    // 0x249150: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x249150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x249154: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x249154u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x249158: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x249158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x24915c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24915cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_249160:
    // 0x249160: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x249160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249164: 0xc08d460  jal         func_235180
    ctx->pc = 0x249164u;
    SET_GPR_U32(ctx, 31, 0x24916Cu);
    ctx->pc = 0x249168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249164u;
    // 0x249168: 0x2484d0f0  addiu       $a0, $a0, -0x2F10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235180u, 0x249164u, 0x24916Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24916Cu;
label_24916c:
    // 0x24916c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24916cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x249170: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x249170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x249174: 0xc08d460  jal         func_235180
    ctx->pc = 0x249174u;
    SET_GPR_U32(ctx, 31, 0x24917Cu);
    ctx->pc = 0x249178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249174u;
    // 0x249178: 0x2484d108  addiu       $a0, $a0, -0x2EF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235180u, 0x249174u, 0x24917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24917Cu;
label_24917c:
    // 0x24917c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24917cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x249180: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x249180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x249184: 0xc08d460  jal         func_235180
    ctx->pc = 0x249184u;
    SET_GPR_U32(ctx, 31, 0x24918Cu);
    ctx->pc = 0x249188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249184u;
    // 0x249188: 0x2484d118  addiu       $a0, $a0, -0x2EE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235180u, 0x249184u, 0x24918Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24918Cu;
label_24918c:
    // 0x24918c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24918cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249190: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x249190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249194: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x249194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x249198: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x249198u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24919c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x24919cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2491a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2491A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2491A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2491A0u;
        // 0x2491a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2491A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2491A8u;
}
