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

// Function: sub_001FF120
// Address: 0x1ff120 - 0x1ff1c0
void sub_001FF120_0x1ff120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF120_0x1ff120");
#endif

    switch (ctx->pc) {
        case 0x1ff120u: goto label_1ff120;
        case 0x1ff124u: goto label_1ff124;
        case 0x1ff128u: goto label_1ff128;
        case 0x1ff12cu: goto label_1ff12c;
        case 0x1ff130u: goto label_1ff130;
        case 0x1ff134u: goto label_1ff134;
        case 0x1ff138u: goto label_1ff138;
        case 0x1ff13cu: goto label_1ff13c;
        case 0x1ff140u: goto label_1ff140;
        case 0x1ff144u: goto label_1ff144;
        case 0x1ff148u: goto label_1ff148;
        case 0x1ff14cu: goto label_1ff14c;
        case 0x1ff150u: goto label_1ff150;
        case 0x1ff154u: goto label_1ff154;
        case 0x1ff158u: goto label_1ff158;
        case 0x1ff15cu: goto label_1ff15c;
        case 0x1ff160u: goto label_1ff160;
        case 0x1ff164u: goto label_1ff164;
        case 0x1ff168u: goto label_1ff168;
        case 0x1ff16cu: goto label_1ff16c;
        case 0x1ff170u: goto label_1ff170;
        case 0x1ff174u: goto label_1ff174;
        case 0x1ff178u: goto label_1ff178;
        case 0x1ff17cu: goto label_1ff17c;
        case 0x1ff180u: goto label_1ff180;
        case 0x1ff184u: goto label_1ff184;
        case 0x1ff188u: goto label_1ff188;
        case 0x1ff18cu: goto label_1ff18c;
        case 0x1ff190u: goto label_1ff190;
        case 0x1ff194u: goto label_1ff194;
        case 0x1ff198u: goto label_1ff198;
        case 0x1ff19cu: goto label_1ff19c;
        case 0x1ff1a0u: goto label_1ff1a0;
        case 0x1ff1a4u: goto label_1ff1a4;
        case 0x1ff1a8u: goto label_1ff1a8;
        case 0x1ff1acu: goto label_1ff1ac;
        case 0x1ff1b0u: goto label_1ff1b0;
        case 0x1ff1b4u: goto label_1ff1b4;
        case 0x1ff1b8u: goto label_1ff1b8;
        case 0x1ff1bcu: goto label_1ff1bc;
        default: break;
    }

    ctx->pc = 0x1ff120u;

label_1ff120:
    // 0x1ff120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ff120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ff124:
    // 0x1ff124: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ff124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ff128:
    // 0x1ff128: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ff128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ff12c:
    // 0x1ff12c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ff12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1ff130:
    // 0x1ff130: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ff130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1ff134:
    // 0x1ff134: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ff134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ff138:
    // 0x1ff138: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ff138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1ff13c:
    // 0x1ff13c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1ff13cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ff140:
    // 0x1ff140: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ff140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ff144:
    // 0x1ff144: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1ff144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1ff148:
    // 0x1ff148: 0xc093fa6  jal         func_24FE98
label_1ff14c:
    if (ctx->pc == 0x1FF14Cu) {
        ctx->pc = 0x1FF14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF148u;
        // 0x1ff14c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF150u;
        goto label_1ff150;
    }
    ctx->pc = 0x1FF148u;
    SET_GPR_U32(ctx, 31, 0x1FF150u);
    ctx->pc = 0x1FF14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF148u;
    // 0x1ff14c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FE98u, 0x1FF148u, 0x1FF150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF150u;
label_1ff150:
    // 0x1ff150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ff150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ff154:
    // 0x1ff154: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ff154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ff158:
    // 0x1ff158: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ff158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ff15c:
    // 0x1ff15c: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_1ff160:
    if (ctx->pc == 0x1FF160u) {
        ctx->pc = 0x1FF160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF15Cu;
        // 0x1ff160: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF164u;
        goto label_1ff164;
    }
    ctx->pc = 0x1FF15Cu;
    {
        const bool branch_taken_0x1ff15c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF15Cu;
        // 0x1ff160: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff15c) {
            ctx->pc = 0x1FF1A4u;
            goto label_1ff1a4;
        }
    }
    ctx->pc = 0x1FF164u;
label_1ff164:
    // 0x1ff164: 0xc07fba8  jal         func_1FEEA0
label_1ff168:
    if (ctx->pc == 0x1FF168u) {
        ctx->pc = 0x1FF16Cu;
        goto label_1ff16c;
    }
    ctx->pc = 0x1FF164u;
    SET_GPR_U32(ctx, 31, 0x1FF16Cu);
    ctx->pc = 0x1FEEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEEA0u, 0x1FF164u, 0x1FF16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF16Cu;
label_1ff16c:
    // 0x1ff16c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ff16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ff170:
    // 0x1ff170: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ff170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ff174:
    // 0x1ff174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ff174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ff178:
    // 0x1ff178: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1ff178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1ff17c:
    // 0x1ff17c: 0x40f809  jalr        $v0
label_1ff180:
    if (ctx->pc == 0x1FF180u) {
        ctx->pc = 0x1FF180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF17Cu;
        // 0x1ff180: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF184u;
        goto label_1ff184;
    }
    ctx->pc = 0x1FF17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF184u);
        ctx->pc = 0x1FF180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF17Cu;
        // 0x1ff180: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF17Cu, 0x1FF184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF184u;
label_1ff184:
    // 0x1ff184: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1ff184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1ff188:
    // 0x1ff188: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1ff188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ff18c:
    // 0x1ff18c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1ff18cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ff190:
    // 0x1ff190: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ff190u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1ff194:
    // 0x1ff194: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1ff194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1ff198:
    // 0x1ff198: 0x40f809  jalr        $v0
label_1ff19c:
    if (ctx->pc == 0x1FF19Cu) {
        ctx->pc = 0x1FF19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF198u;
        // 0x1ff19c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF1A0u;
        goto label_1ff1a0;
    }
    ctx->pc = 0x1FF198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF1A0u);
        ctx->pc = 0x1FF19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF198u;
        // 0x1ff19c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF198u, 0x1FF1A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF1A0u;
label_1ff1a0:
    // 0x1ff1a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ff1a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ff1a4:
    // 0x1ff1a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ff1a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff1a8:
    // 0x1ff1a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ff1a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ff1ac:
    // 0x1ff1ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ff1acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff1b0:
    // 0x1ff1b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ff1b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1ff1b4:
    // 0x1ff1b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ff1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ff1b8:
    // 0x1ff1b8: 0x3e00008  jr          $ra
label_1ff1bc:
    if (ctx->pc == 0x1FF1BCu) {
        ctx->pc = 0x1FF1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF1B8u;
        // 0x1ff1bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF1C0u;
        goto label_fallthrough_0x1ff1b8;
    }
    ctx->pc = 0x1FF1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF1B8u;
        // 0x1ff1bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ff1b8:
    ctx->pc = 0x1FF1C0u;
}
