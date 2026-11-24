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

// Function: sub_00225230
// Address: 0x225230 - 0x225308
void sub_00225230_0x225230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225230_0x225230");
#endif

    switch (ctx->pc) {
        case 0x2252f8u: goto label_2252f8;
        default: break;
    }

    ctx->pc = 0x225230u;

    // 0x225230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225234: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x225234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x225238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22523c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x22523cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x225240: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x225240u;
    {
        const bool branch_taken_0x225240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x225244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225240u;
        // 0x225244: 0x28620062  slti        $v0, $v1, 0x62 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)98) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225240) {
            ctx->pc = 0x2252F8u;
            goto label_2252f8;
        }
    }
    ctx->pc = 0x225248u;
    // 0x225248: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x225248u;
    {
        const bool branch_taken_0x225248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225248u;
        // 0x22524c: 0x24020101  addiu       $v0, $zero, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225248) {
            ctx->pc = 0x225298u;
            goto label_225298;
        }
    }
    ctx->pc = 0x225250u;
    // 0x225250: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x225250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x225254: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x225254u;
    {
        const bool branch_taken_0x225254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x225258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225254u;
        // 0x225258: 0x28620032  slti        $v0, $v1, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225254) {
            ctx->pc = 0x2252F8u;
            goto label_2252f8;
        }
    }
    ctx->pc = 0x22525Cu;
    // 0x22525c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22525Cu;
    {
        const bool branch_taken_0x22525c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22525Cu;
        // 0x225260: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22525c) {
            ctx->pc = 0x225280u;
            goto label_225280;
        }
    }
    ctx->pc = 0x225264u;
    // 0x225264: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x225264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x225268: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x225268u;
    {
        const bool branch_taken_0x225268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225268u;
        // 0x22526c: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225268) {
            ctx->pc = 0x2252F8u;
            goto label_2252f8;
        }
    }
    ctx->pc = 0x225270u;
    // 0x225270: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x225270u;
    {
        const bool branch_taken_0x225270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x225274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225270u;
        // 0x225274: 0x3c060067  lui         $a2, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225270) {
            ctx->pc = 0x2252E0u;
            goto label_2252e0;
        }
    }
    ctx->pc = 0x225278u;
    // 0x225278: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x225278u;
    {
        const bool branch_taken_0x225278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225278u;
        // 0x22527c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225278) {
            ctx->pc = 0x2252ECu;
            goto label_2252ec;
        }
    }
    ctx->pc = 0x225280u;
label_225280:
    // 0x225280: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x225280u;
    {
        const bool branch_taken_0x225280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x225284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225280u;
        // 0x225284: 0x24020051  addiu       $v0, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225280) {
            ctx->pc = 0x2252F8u;
            goto label_2252f8;
        }
    }
    ctx->pc = 0x225288u;
    // 0x225288: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x225288u;
    {
        const bool branch_taken_0x225288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225288u;
        // 0x22528c: 0x3c060067  lui         $a2, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225288) {
            ctx->pc = 0x2252F8u;
            goto label_2252f8;
        }
    }
    ctx->pc = 0x225290u;
    // 0x225290: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x225290u;
    {
        const bool branch_taken_0x225290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225290u;
        // 0x225294: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225290) {
            ctx->pc = 0x2252ECu;
            goto label_2252ec;
        }
    }
    ctx->pc = 0x225298u;
label_225298:
    // 0x225298: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x225298u;
    {
        const bool branch_taken_0x225298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225298u;
        // 0x22529c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225298) {
            ctx->pc = 0x2252FCu;
            goto label_2252fc;
        }
    }
    ctx->pc = 0x2252A0u;
    // 0x2252a0: 0x28620102  slti        $v0, $v1, 0x102
    ctx->pc = 0x2252a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)258) ? 1 : 0);
    // 0x2252a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2252A4u;
    {
        const bool branch_taken_0x2252a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2252A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2252A4u;
        // 0x2252a8: 0x24020111  addiu       $v0, $zero, 0x111 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2252a4) {
            ctx->pc = 0x2252C8u;
            goto label_2252c8;
        }
    }
    ctx->pc = 0x2252ACu;
    // 0x2252ac: 0x24020071  addiu       $v0, $zero, 0x71
    ctx->pc = 0x2252acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x2252b0: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2252B0u;
    {
        const bool branch_taken_0x2252b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2252B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2252B0u;
        // 0x2252b4: 0x240200f1  addiu       $v0, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2252b0) {
            ctx->pc = 0x2252F8u;
            goto label_2252f8;
        }
    }
    ctx->pc = 0x2252B8u;
    // 0x2252b8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2252B8u;
    {
        const bool branch_taken_0x2252b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2252BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2252B8u;
        // 0x2252bc: 0x3c060067  lui         $a2, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2252b8) {
            ctx->pc = 0x2252F8u;
            goto label_2252f8;
        }
    }
    ctx->pc = 0x2252C0u;
    // 0x2252c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2252C0u;
    {
        const bool branch_taken_0x2252c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2252C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2252C0u;
        // 0x2252c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2252c0) {
            ctx->pc = 0x2252ECu;
            goto label_2252ec;
        }
    }
    ctx->pc = 0x2252C8u;
label_2252c8:
    // 0x2252c8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2252C8u;
    {
        const bool branch_taken_0x2252c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2252CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2252C8u;
        // 0x2252cc: 0x24021001  addiu       $v0, $zero, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2252c8) {
            ctx->pc = 0x2252F8u;
            goto label_2252f8;
        }
    }
    ctx->pc = 0x2252D0u;
    // 0x2252d0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2252D0u;
    {
        const bool branch_taken_0x2252d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2252D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2252D0u;
        // 0x2252d4: 0x3c060067  lui         $a2, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2252d0) {
            ctx->pc = 0x2252E8u;
            goto label_2252e8;
        }
    }
    ctx->pc = 0x2252D8u;
    // 0x2252d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2252D8u;
    {
        const bool branch_taken_0x2252d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2252DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2252D8u;
        // 0x2252dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2252d8) {
            ctx->pc = 0x2252FCu;
            goto label_2252fc;
        }
    }
    ctx->pc = 0x2252E0u;
label_2252e0:
    // 0x2252e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2252E0u;
    {
        const bool branch_taken_0x2252e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2252E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2252E0u;
        // 0x2252e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2252e0) {
            ctx->pc = 0x2252FCu;
            goto label_2252fc;
        }
    }
    ctx->pc = 0x2252E8u;
label_2252e8:
    // 0x2252e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2252e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2252ec:
    // 0x2252ec: 0x24c68fc0  addiu       $a2, $a2, -0x7040
    ctx->pc = 0x2252ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938560));
    // 0x2252f0: 0xc0898b2  jal         func_2262C8
    ctx->pc = 0x2252F0u;
    SET_GPR_U32(ctx, 31, 0x2252F8u);
    ctx->pc = 0x2252F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2252F0u;
    // 0x2252f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2262C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2262C8u, 0x2252F0u, 0x2252F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2252F8u;
label_2252f8:
    // 0x2252f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2252f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2252fc:
    // 0x2252fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2252fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225300: 0x3e00008  jr          $ra
    ctx->pc = 0x225300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225300u;
        // 0x225304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225308u;
}
