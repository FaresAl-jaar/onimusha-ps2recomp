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

// Function: sub_0011E1B8
// Address: 0x11e1b8 - 0x11e298
void sub_0011E1B8_0x11e1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E1B8_0x11e1b8");
#endif

    switch (ctx->pc) {
        case 0x11e1e8u: goto label_11e1e8;
        case 0x11e1f0u: goto label_11e1f0;
        case 0x11e1f4u: goto label_11e1f4;
        case 0x11e218u: goto label_11e218;
        case 0x11e238u: goto label_11e238;
        case 0x11e244u: goto label_11e244;
        case 0x11e268u: goto label_11e268;
        case 0x11e26cu: goto label_11e26c;
        case 0x11e278u: goto label_11e278;
        case 0x11e290u: goto label_11e290;
        default: break;
    }

    ctx->pc = 0x11e1b8u;

    // 0x11e1b8: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x11e1b8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x11e1bc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11e1bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11e1c0: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11e1c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11e1c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11e1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11e1c8: 0x4683f  dsra32      $t5, $a0, 0
    ctx->pc = 0x11e1c8u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11e1cc: 0x3c0e3fe9  lui         $t6, 0x3FE9
    ctx->pc = 0x11e1ccu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16361 << 16));
    // 0x11e1d0: 0x1af6824  and         $t5, $t5, $t7
    ctx->pc = 0x11e1d0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x11e1d4: 0x35ce21fb  ori         $t6, $t6, 0x21FB
    ctx->pc = 0x11e1d4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)8699);
    // 0x11e1d8: 0x1cd702a  slt         $t6, $t6, $t5
    ctx->pc = 0x11e1d8u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x11e1dc: 0x15c00007  bnez        $t6, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E1DCu;
    {
        const bool branch_taken_0x11e1dc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1DCu;
        // 0x11e1e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e1dc) {
            ctx->pc = 0x11E1FCu;
            goto label_11e1fc;
        }
    }
    ctx->pc = 0x11E1E4u;
    // 0x11e1e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11e1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e1e8:
    // 0x11e1e8: 0xc047170  jal         func_11C5C0
    ctx->pc = 0x11E1E8u;
    SET_GPR_U32(ctx, 31, 0x11E1F0u);
    ctx->pc = 0x11C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C5C0u, 0x11E1E8u, 0x11E1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E1F0u;
label_11e1f0:
    // 0x11e1f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11e1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11e1f4:
    // 0x11e1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x11E1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E1F4u;
        // 0x11e1f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E1FCu;
label_11e1fc:
    // 0x11e1fc: 0x3c0f7fef  lui         $t7, 0x7FEF
    ctx->pc = 0x11e1fcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32751 << 16));
    // 0x11e200: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11e200u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11e204: 0x1ed782a  slt         $t7, $t7, $t5
    ctx->pc = 0x11e204u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x11e208: 0x15e00019  bnez        $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x11E208u;
    {
        const bool branch_taken_0x11e208 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e208) {
            ctx->pc = 0x11E270u;
            goto label_11e270;
        }
    }
    ctx->pc = 0x11E210u;
    // 0x11e210: 0xc0468b4  jal         func_11A2D0
    ctx->pc = 0x11E210u;
    SET_GPR_U32(ctx, 31, 0x11E218u);
    ctx->pc = 0x11E214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E210u;
    // 0x11e214: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A2D0u, 0x11E210u, 0x11E218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E218u;
label_11e218:
    // 0x11e218: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x11e218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x11e21c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x11e21cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e220: 0x104f0017  beq         $v0, $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x11E220u;
    {
        const bool branch_taken_0x11e220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x11E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E220u;
        // 0x11e224: 0x284f0002  slti        $t7, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e220) {
            ctx->pc = 0x11E280u;
            goto label_11e280;
        }
    }
    ctx->pc = 0x11E228u;
    // 0x11e228: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x11E228u;
    {
        const bool branch_taken_0x11e228 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E228u;
        // 0x11e22c: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e228) {
            ctx->pc = 0x11E258u;
            goto label_11e258;
        }
    }
    ctx->pc = 0x11E230u;
    // 0x11e230: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E230u;
    {
        const bool branch_taken_0x11e230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E230u;
        // 0x11e234: 0xdfa40000  ld          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e230) {
            ctx->pc = 0x11E24Cu;
            goto label_11e24c;
        }
    }
    ctx->pc = 0x11E238u;
label_11e238:
    // 0x11e238: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11e238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e23c: 0xc047494  jal         func_11D250
    ctx->pc = 0x11E23Cu;
    SET_GPR_U32(ctx, 31, 0x11E244u);
    ctx->pc = 0x11E240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E23Cu;
    // 0x11e240: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D250u, 0x11E23Cu, 0x11E244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E244u;
label_11e244:
    // 0x11e244: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x11E244u;
    {
        const bool branch_taken_0x11e244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E244u;
        // 0x11e248: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e244) {
            ctx->pc = 0x11E1F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e1f4;
        }
    }
    ctx->pc = 0x11E24Cu;
label_11e24c:
    // 0x11e24c: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x11E24Cu;
    {
        const bool branch_taken_0x11e24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E24Cu;
        // 0x11e250: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e24c) {
            ctx->pc = 0x11E1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e1e8;
        }
    }
    ctx->pc = 0x11E254u;
    // 0x11e254: 0x0  nop
    ctx->pc = 0x11e254u;
    // NOP
label_11e258:
    // 0x11e258: 0x144ffff7  bne         $v0, $t7, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11E258u;
    {
        const bool branch_taken_0x11e258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x11E25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E258u;
        // 0x11e25c: 0xdfa40000  ld          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e258) {
            ctx->pc = 0x11E238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e238;
        }
    }
    ctx->pc = 0x11E260u;
    // 0x11e260: 0xc047170  jal         func_11C5C0
    ctx->pc = 0x11E260u;
    SET_GPR_U32(ctx, 31, 0x11E268u);
    ctx->pc = 0x11E264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E260u;
    // 0x11e264: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C5C0u, 0x11E260u, 0x11E268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E268u;
label_11e268:
    // 0x11e268: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11e268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e26c:
    // 0x11e26c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11e26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e270:
    // 0x11e270: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11E270u;
    SET_GPR_U32(ctx, 31, 0x11E278u);
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11E270u, 0x11E278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E278u;
label_11e278:
    // 0x11e278: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x11E278u;
    {
        const bool branch_taken_0x11e278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E278u;
        // 0x11e27c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e278) {
            ctx->pc = 0x11E1F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e1f4;
        }
    }
    ctx->pc = 0x11E280u;
label_11e280:
    // 0x11e280: 0xdfa40000  ld          $a0, 0x0($sp)
    ctx->pc = 0x11e280u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e284: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11e284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e288: 0xc047494  jal         func_11D250
    ctx->pc = 0x11E288u;
    SET_GPR_U32(ctx, 31, 0x11E290u);
    ctx->pc = 0x11E28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E288u;
    // 0x11e28c: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D250u, 0x11E288u, 0x11E290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E290u;
label_11e290:
    // 0x11e290: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x11E290u;
    {
        const bool branch_taken_0x11e290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E290u;
        // 0x11e294: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e290) {
            ctx->pc = 0x11E26Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e26c;
        }
    }
    ctx->pc = 0x11E298u;
}
