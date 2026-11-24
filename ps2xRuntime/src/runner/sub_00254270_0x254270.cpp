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

// Function: sub_00254270
// Address: 0x254270 - 0x254348
void sub_00254270_0x254270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254270_0x254270");
#endif

    switch (ctx->pc) {
        case 0x2542d0u: goto label_2542d0;
        case 0x2542e4u: goto label_2542e4;
        case 0x2542fcu: goto label_2542fc;
        default: break;
    }

    ctx->pc = 0x254270u;

    // 0x254270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x254274: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x254274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x254278: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x254278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25427c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25427cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x254280: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x254280u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x254284: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x254284u;
    {
        const bool branch_taken_0x254284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x254288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254284u;
        // 0x254288: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254284) {
            ctx->pc = 0x254318u;
            goto label_254318;
        }
    }
    ctx->pc = 0x25428Cu;
    // 0x25428c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x25428cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x254290: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x254290u;
    {
        const bool branch_taken_0x254290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x254294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254290u;
        // 0x254294: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254290) {
            ctx->pc = 0x254308u;
            goto label_254308;
        }
    }
    ctx->pc = 0x254298u;
    // 0x254298: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x254298u;
    {
        const bool branch_taken_0x254298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x254298) {
            ctx->pc = 0x2542F0u;
            goto label_2542f0;
        }
    }
    ctx->pc = 0x2542A0u;
    // 0x2542a0: 0x24020099  addiu       $v0, $zero, 0x99
    ctx->pc = 0x2542a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x2542a4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2542A4u;
    {
        const bool branch_taken_0x2542a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2542a4) {
            ctx->pc = 0x2542B8u;
            goto label_2542b8;
        }
    }
    ctx->pc = 0x2542ACu;
    // 0x2542ac: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2542ACu;
    {
        const bool branch_taken_0x2542ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2542ac) {
            ctx->pc = 0x254330u;
            goto label_254330;
        }
    }
    ctx->pc = 0x2542B4u;
    // 0x2542b4: 0x0  nop
    ctx->pc = 0x2542b4u;
    // NOP
label_2542b8:
    // 0x2542b8: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x2542b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2542bc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2542bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2542c0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2542C0u;
    {
        const bool branch_taken_0x2542c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2542C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2542C0u;
        // 0x2542c4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2542c0) {
            ctx->pc = 0x2542D8u;
            goto label_2542d8;
        }
    }
    ctx->pc = 0x2542C8u;
    // 0x2542c8: 0xc095078  jal         func_2541E0
    ctx->pc = 0x2542C8u;
    SET_GPR_U32(ctx, 31, 0x2542D0u);
    ctx->pc = 0x2542CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2542C8u;
    // 0x2542cc: 0x8cc50008  lw          $a1, 0x8($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2541E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2541E0u, 0x2542C8u, 0x2542D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2542D0u;
label_2542d0:
    // 0x2542d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2542D0u;
    {
        const bool branch_taken_0x2542d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2542D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2542D0u;
        // 0x2542d4: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2542d0) {
            ctx->pc = 0x2542E8u;
            goto label_2542e8;
        }
    }
    ctx->pc = 0x2542D8u;
label_2542d8:
    // 0x2542d8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2542d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2542dc: 0xc0955a8  jal         func_2556A0
    ctx->pc = 0x2542DCu;
    SET_GPR_U32(ctx, 31, 0x2542E4u);
    ctx->pc = 0x2542E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2542DCu;
    // 0x2542e0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2556A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2556A0u, 0x2542DCu, 0x2542E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2542E4u;
label_2542e4:
    // 0x2542e4: 0x0  nop
    ctx->pc = 0x2542e4u;
    // NOP
label_2542e8:
    // 0x2542e8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2542E8u;
    {
        const bool branch_taken_0x2542e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2542ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2542E8u;
        // 0x2542ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2542e8) {
            ctx->pc = 0x254338u;
            goto label_254338;
        }
    }
    ctx->pc = 0x2542F0u;
label_2542f0:
    // 0x2542f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2542f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2542f4: 0xc095078  jal         func_2541E0
    ctx->pc = 0x2542F4u;
    SET_GPR_U32(ctx, 31, 0x2542FCu);
    ctx->pc = 0x2542F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2542F4u;
    // 0x2542f8: 0x8cc50008  lw          $a1, 0x8($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2541E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2541E0u, 0x2542F4u, 0x2542FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2542FCu;
label_2542fc:
    // 0x2542fc: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x2542fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x254300: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x254300u;
    {
        const bool branch_taken_0x254300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254300u;
        // 0x254304: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254300) {
            ctx->pc = 0x254338u;
            goto label_254338;
        }
    }
    ctx->pc = 0x254308u;
label_254308:
    // 0x254308: 0xae05002c  sw          $a1, 0x2C($s0)
    ctx->pc = 0x254308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 5));
    // 0x25430c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25430Cu;
    {
        const bool branch_taken_0x25430c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25430Cu;
        // 0x254310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25430c) {
            ctx->pc = 0x254338u;
            goto label_254338;
        }
    }
    ctx->pc = 0x254314u;
    // 0x254314: 0x0  nop
    ctx->pc = 0x254314u;
    // NOP
label_254318:
    // 0x254318: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x254318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x25431c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25431cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254320: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x254320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x254324: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x254324u;
    {
        const bool branch_taken_0x254324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254324u;
        // 0x254328: 0xae05002c  sw          $a1, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254324) {
            ctx->pc = 0x254338u;
            goto label_254338;
        }
    }
    ctx->pc = 0x25432Cu;
    // 0x25432c: 0x0  nop
    ctx->pc = 0x25432cu;
    // NOP
label_254330:
    // 0x254330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254334: 0x0  nop
    ctx->pc = 0x254334u;
    // NOP
label_254338:
    // 0x254338: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x254338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25433c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25433cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254340: 0x3e00008  jr          $ra
    ctx->pc = 0x254340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254340u;
        // 0x254344: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254348u;
}
