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

// Function: sub_00257470
// Address: 0x257470 - 0x257538
void sub_00257470_0x257470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257470_0x257470");
#endif

    switch (ctx->pc) {
        case 0x2574f8u: goto label_2574f8;
        case 0x257508u: goto label_257508;
        default: break;
    }

    ctx->pc = 0x257470u;

    // 0x257470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x257470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x257474: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x257474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x257478: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x257478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25747c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25747cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x257480: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x257480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x257484: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x257484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257488: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x257488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x25748c: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x25748cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x257490: 0x90a7003d  lbu         $a3, 0x3D($a1)
    ctx->pc = 0x257490u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 61)));
    // 0x257494: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x257494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x257498: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x257498u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x25749c: 0x8c860050  lw          $a2, 0x50($a0)
    ctx->pc = 0x25749cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2574a0: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x2574a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2574a4: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2574a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2574a8: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x2574a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x2574ac: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x2574acu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2574b0: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x2574b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2574b4: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2574b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2574b8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2574b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2574bc: 0x90700000  lbu         $s0, 0x0($v1)
    ctx->pc = 0x2574bcu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2574c0: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2574C0u;
    {
        const bool branch_taken_0x2574c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2574C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2574C0u;
        // 0x2574c4: 0x24a40010  addiu       $a0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2574c0) {
            ctx->pc = 0x257510u;
            goto label_257510;
        }
    }
    ctx->pc = 0x2574C8u;
    // 0x2574c8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2574c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2574cc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2574CCu;
    {
        const bool branch_taken_0x2574cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2574cc) {
            ctx->pc = 0x257510u;
            goto label_257510;
        }
    }
    ctx->pc = 0x2574D4u;
    // 0x2574d4: 0xa4a00014  sh          $zero, 0x14($a1)
    ctx->pc = 0x2574d4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x2574d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2574d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2574dc: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2574dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2574e0: 0xa040002f  sb          $zero, 0x2F($v0)
    ctx->pc = 0x2574e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 47), (uint8_t)GPR_U32(ctx, 0));
    // 0x2574e4: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2574e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2574e8: 0xa043002e  sb          $v1, 0x2E($v0)
    ctx->pc = 0x2574e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 46), (uint8_t)GPR_U32(ctx, 3));
    // 0x2574ec: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2574ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2574f0: 0xc0b787c  jal         func_2DE1F0
    ctx->pc = 0x2574F0u;
    SET_GPR_U32(ctx, 31, 0x2574F8u);
    ctx->pc = 0x2574F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2574F0u;
    // 0x2574f4: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE1F0u, 0x2574F0u, 0x2574F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2574F8u;
label_2574f8:
    // 0x2574f8: 0x102c3c  dsll32      $a1, $s0, 16
    ctx->pc = 0x2574f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2574fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2574fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257500: 0xc09578c  jal         func_255E30
    ctx->pc = 0x257500u;
    SET_GPR_U32(ctx, 31, 0x257508u);
    ctx->pc = 0x257504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257500u;
    // 0x257504: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E30u, 0x257500u, 0x257508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257508u;
label_257508:
    // 0x257508: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x257508u;
    {
        const bool branch_taken_0x257508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257508) {
            ctx->pc = 0x257520u;
            goto label_257520;
        }
    }
    ctx->pc = 0x257510u;
label_257510:
    // 0x257510: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x257510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x257514: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x257514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x257518: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x257518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25751c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x25751cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_257520:
    // 0x257520: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x257520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257524: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x257524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257528: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x257528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25752c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25752cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257530: 0x3e00008  jr          $ra
    ctx->pc = 0x257530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257530u;
        // 0x257534: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257538u;
}
