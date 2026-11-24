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

// Function: sub_002141F8
// Address: 0x2141f8 - 0x214290
void sub_002141F8_0x2141f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002141F8_0x2141f8");
#endif

    switch (ctx->pc) {
        case 0x214224u: goto label_214224;
        case 0x214244u: goto label_214244;
        default: break;
    }

    ctx->pc = 0x2141f8u;

    // 0x2141f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2141f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2141fc: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2141fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x214200: 0x2491090c  addiu       $s1, $a0, 0x90C
    ctx->pc = 0x214200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 2316));
    // 0x214204: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x214204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x214208: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x214208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21420c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x21420cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x214210: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x214210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x214214: 0x8c921f7c  lw          $s2, 0x1F7C($a0)
    ctx->pc = 0x214214u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8060)));
    // 0x214218: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x214218u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21421c: 0xc07f462  jal         func_1FD188
    ctx->pc = 0x21421Cu;
    SET_GPR_U32(ctx, 31, 0x214224u);
    ctx->pc = 0x214220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21421Cu;
    // 0x214220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD188u, 0x21421Cu, 0x214224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214224u;
label_214224:
    // 0x214224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214228: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x214228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x21422c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x21422cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x214230: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x214230u;
    {
        const bool branch_taken_0x214230 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x214234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214230u;
        // 0x214234: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214230) {
            ctx->pc = 0x21423Cu;
            goto label_21423c;
        }
    }
    ctx->pc = 0x214238u;
    // 0x214238: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x214238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_21423c:
    // 0x21423c: 0xc07f47c  jal         func_1FD1F0
    ctx->pc = 0x21423Cu;
    SET_GPR_U32(ctx, 31, 0x214244u);
    ctx->pc = 0x1FD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD1F0u, 0x21423Cu, 0x214244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214244u;
label_214244:
    // 0x214244: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x214244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x214248: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x214248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21424c: 0x54430001  bnel        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x21424Cu;
    {
        const bool branch_taken_0x21424c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x21424c) {
            ctx->pc = 0x214250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21424Cu;
            // 0x214250: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214254u;
            goto label_214254;
        }
    }
    ctx->pc = 0x214254u;
label_214254:
    // 0x214254: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x214254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x214258: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x214258u;
    {
        const bool branch_taken_0x214258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x214258) {
            ctx->pc = 0x21425Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214258u;
            // 0x21425c: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21426Cu;
            goto label_21426c;
        }
    }
    ctx->pc = 0x214260u;
    // 0x214260: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x214260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x214264: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x214264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x214268: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x214268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_21426c:
    // 0x21426c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21426Cu;
    {
        const bool branch_taken_0x21426c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x214270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21426Cu;
        // 0x214270: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21426c) {
            ctx->pc = 0x21427Cu;
            goto label_21427c;
        }
    }
    ctx->pc = 0x214274u;
    // 0x214274: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x214274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x214278: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x214278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_21427c:
    // 0x21427c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x21427cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x214280: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x214280u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x214284: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x214284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x214288: 0x3e00008  jr          $ra
    ctx->pc = 0x214288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214288u;
        // 0x21428c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214290u;
}
