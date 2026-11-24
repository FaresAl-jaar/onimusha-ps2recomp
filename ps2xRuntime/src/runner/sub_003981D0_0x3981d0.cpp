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

// Function: sub_003981D0
// Address: 0x3981d0 - 0x398274
void sub_003981D0_0x3981d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003981D0_0x3981d0");
#endif

    switch (ctx->pc) {
        case 0x3981ecu: goto label_3981ec;
        case 0x3981f8u: goto label_3981f8;
        case 0x398230u: goto label_398230;
        case 0x398258u: goto label_398258;
        case 0x398264u: goto label_398264;
        default: break;
    }

    ctx->pc = 0x3981d0u;

    // 0x3981d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3981d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3981d4: 0x240500aa  addiu       $a1, $zero, 0xAA
    ctx->pc = 0x3981d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x3981d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3981d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3981dc: 0x2406014a  addiu       $a2, $zero, 0x14A
    ctx->pc = 0x3981dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x3981e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3981e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3981e4: 0xc0dbfd4  jal         func_36FF50
    ctx->pc = 0x3981E4u;
    SET_GPR_U32(ctx, 31, 0x3981ECu);
    ctx->pc = 0x3981E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3981E4u;
    // 0x3981e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FF50u, 0x3981E4u, 0x3981ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3981ECu;
label_3981ec:
    // 0x3981ec: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3981ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3981f0: 0xc0cc01c  jal         func_330070
    ctx->pc = 0x3981F0u;
    SET_GPR_U32(ctx, 31, 0x3981F8u);
    ctx->pc = 0x3981F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3981F0u;
    // 0x3981f4: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330070u, 0x3981F0u, 0x3981F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3981F8u;
label_3981f8:
    // 0x3981f8: 0x860301ac  lh          $v1, 0x1AC($s0)
    ctx->pc = 0x3981f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x3981fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3981fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x398200: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x398200u;
    {
        const bool branch_taken_0x398200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x398204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398200u;
        // 0x398204: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398200) {
            ctx->pc = 0x398258u;
            goto label_398258;
        }
    }
    ctx->pc = 0x398208u;
    // 0x398208: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x398208u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x39820c: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x39820cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x398210: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x398210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x398214: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x398214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x398218: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x398218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x39821c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39821cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398220: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x398220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x398224: 0x25292380  addiu       $t1, $t1, 0x2380
    ctx->pc = 0x398224u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9088));
    // 0x398228: 0xc095f88  jal         func_257E20
    ctx->pc = 0x398228u;
    SET_GPR_U32(ctx, 31, 0x398230u);
    ctx->pc = 0x39822Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398228u;
    // 0x39822c: 0x344a0002  ori         $t2, $v0, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x398228u, 0x398230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398230u;
label_398230:
    // 0x398230: 0x860a01ac  lh          $t2, 0x1AC($s0)
    ctx->pc = 0x398230u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x398234: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x398234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x398238: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x398238u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x39823c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x39823cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x398240: 0x24050061  addiu       $a1, $zero, 0x61
    ctx->pc = 0x398240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x398244: 0x24060156  addiu       $a2, $zero, 0x156
    ctx->pc = 0x398244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x398248: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x398248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39824c: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x39824cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x398250: 0xc095f88  jal         func_257E20
    ctx->pc = 0x398250u;
    SET_GPR_U32(ctx, 31, 0x398258u);
    ctx->pc = 0x398254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398250u;
    // 0x398254: 0x25292388  addiu       $t1, $t1, 0x2388 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x398250u, 0x398258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398258u;
label_398258:
    // 0x398258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39825c: 0xc0dc700  jal         func_371C00
    ctx->pc = 0x39825Cu;
    SET_GPR_U32(ctx, 31, 0x398264u);
    ctx->pc = 0x398260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39825Cu;
    // 0x398260: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371C00u, 0x39825Cu, 0x398264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398264u;
label_398264:
    // 0x398264: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x398264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x398268: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x398268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39826c: 0x3e00008  jr          $ra
    ctx->pc = 0x39826Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39826Cu;
        // 0x398270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39826Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398274u;
}
