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

// Function: sub_003C9200
// Address: 0x3c9200 - 0x3c9308
void sub_003C9200_0x3c9200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9200_0x3c9200");
#endif

    switch (ctx->pc) {
        case 0x3c9280u: goto label_3c9280;
        default: break;
    }

    ctx->pc = 0x3c9200u;

    // 0x3c9200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c9200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c9204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c9204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c9208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c9208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c920c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c920cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c9210: 0x90830640  lbu         $v1, 0x640($a0)
    ctx->pc = 0x3c9210u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1600)));
    // 0x3c9214: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C9214u;
    {
        const bool branch_taken_0x3c9214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C9218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9214u;
        // 0x3c9218: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9214) {
            ctx->pc = 0x3C9278u;
            goto label_3c9278;
        }
    }
    ctx->pc = 0x3C921Cu;
    // 0x3c921c: 0x92022b25  lbu         $v0, 0x2B25($s0)
    ctx->pc = 0x3c921cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11045)));
    // 0x3c9220: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c9220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c9224: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3C9224u;
    {
        const bool branch_taken_0x3c9224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c9224) {
            ctx->pc = 0x3C9278u;
            goto label_3c9278;
        }
    }
    ctx->pc = 0x3C922Cu;
    // 0x3c922c: 0x920229d1  lbu         $v0, 0x29D1($s0)
    ctx->pc = 0x3c922cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10705)));
    // 0x3c9230: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3C9230u;
    {
        const bool branch_taken_0x3c9230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c9230) {
            ctx->pc = 0x3C9260u;
            goto label_3c9260;
        }
    }
    ctx->pc = 0x3C9238u;
    // 0x3c9238: 0x9202065c  lbu         $v0, 0x65C($s0)
    ctx->pc = 0x3c9238u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x3c923c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x3c923cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3c9240: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3C9240u;
    {
        const bool branch_taken_0x3c9240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c9240) {
            ctx->pc = 0x3C9278u;
            goto label_3c9278;
        }
    }
    ctx->pc = 0x3C9248u;
    // 0x3c9248: 0xde020500  ld          $v0, 0x500($s0)
    ctx->pc = 0x3c9248u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x3c924c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3c924cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3c9250: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C9250u;
    {
        const bool branch_taken_0x3c9250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9250) {
            ctx->pc = 0x3C9278u;
            goto label_3c9278;
        }
    }
    ctx->pc = 0x3C9258u;
    // 0x3c9258: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C9258u;
    {
        const bool branch_taken_0x3c9258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9258u;
        // 0x3c925c: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9258) {
            ctx->pc = 0x3C9278u;
            goto label_3c9278;
        }
    }
    ctx->pc = 0x3C9260u;
label_3c9260:
    // 0x3c9260: 0xde030500  ld          $v1, 0x500($s0)
    ctx->pc = 0x3c9260u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x3c9264: 0x3c02ff3f  lui         $v0, 0xFF3F
    ctx->pc = 0x3c9264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65343 << 16));
    // 0x3c9268: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x3c9268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x3c926c: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x3c926cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x3c9270: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3c9270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3c9274: 0xfe020500  sd          $v0, 0x500($s0)
    ctx->pc = 0x3c9274u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1280), GPR_U64(ctx, 2));
label_3c9278:
    // 0x3c9278: 0xc0a6188  jal         func_298620
    ctx->pc = 0x3C9278u;
    SET_GPR_U32(ctx, 31, 0x3C9280u);
    ctx->pc = 0x3C927Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9278u;
    // 0x3c927c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298620u, 0x3C9278u, 0x3C9280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9280u;
label_3c9280:
    // 0x3c9280: 0x92042b25  lbu         $a0, 0x2B25($s0)
    ctx->pc = 0x3c9280u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11045)));
    // 0x3c9284: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c9284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c9288: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3C9288u;
    {
        const bool branch_taken_0x3c9288 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9288u;
        // 0x3c928c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9288) {
            ctx->pc = 0x3C92D0u;
            goto label_3c92d0;
        }
    }
    ctx->pc = 0x3C9290u;
    // 0x3c9290: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C9290u;
    {
        const bool branch_taken_0x3c9290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c9290) {
            ctx->pc = 0x3C92A8u;
            goto label_3c92a8;
        }
    }
    ctx->pc = 0x3C9298u;
    // 0x3c9298: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C9298u;
    {
        const bool branch_taken_0x3c9298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9298) {
            ctx->pc = 0x3C92A8u;
            goto label_3c92a8;
        }
    }
    ctx->pc = 0x3C92A0u;
    // 0x3c92a0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3C92A0u;
    {
        const bool branch_taken_0x3c92a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c92a0) {
            ctx->pc = 0x3C92F8u;
            goto label_3c92f8;
        }
    }
    ctx->pc = 0x3C92A8u;
label_3c92a8:
    // 0x3c92a8: 0x8e0504cc  lw          $a1, 0x4CC($s0)
    ctx->pc = 0x3c92a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1228)));
    // 0x3c92ac: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x3c92acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x3c92b0: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x3c92b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
    // 0x3c92b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3c92b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3c92b8: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x3c92b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3c92bc: 0xae0404cc  sw          $a0, 0x4CC($s0)
    ctx->pc = 0x3c92bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 4));
    // 0x3c92c0: 0x8e0404cc  lw          $a0, 0x4CC($s0)
    ctx->pc = 0x3c92c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1228)));
    // 0x3c92c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3c92c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3c92c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3C92C8u;
    {
        const bool branch_taken_0x3c92c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C92CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C92C8u;
        // 0x3c92cc: 0xae0304cc  sw          $v1, 0x4CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c92c8) {
            ctx->pc = 0x3C92F8u;
            goto label_3c92f8;
        }
    }
    ctx->pc = 0x3C92D0u;
label_3c92d0:
    // 0x3c92d0: 0x8e0504cc  lw          $a1, 0x4CC($s0)
    ctx->pc = 0x3c92d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1228)));
    // 0x3c92d4: 0x3c04fff7  lui         $a0, 0xFFF7
    ctx->pc = 0x3c92d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65527 << 16));
    // 0x3c92d8: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x3c92d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x3c92dc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x3c92dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x3c92e0: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x3c92e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x3c92e4: 0xae0404cc  sw          $a0, 0x4CC($s0)
    ctx->pc = 0x3c92e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 4));
    // 0x3c92e8: 0x8e0404cc  lw          $a0, 0x4CC($s0)
    ctx->pc = 0x3c92e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1228)));
    // 0x3c92ec: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3c92ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3c92f0: 0xae0304cc  sw          $v1, 0x4CC($s0)
    ctx->pc = 0x3c92f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 3));
    // 0x3c92f4: 0x0  nop
    ctx->pc = 0x3c92f4u;
    // NOP
label_3c92f8:
    // 0x3c92f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c92f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c92fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c92fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c9300: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9300u;
        // 0x3c9304: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9308u;
}
