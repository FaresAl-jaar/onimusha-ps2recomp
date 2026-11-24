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

// Function: sub_00323350
// Address: 0x323350 - 0x3233f4
void sub_00323350_0x323350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323350_0x323350");
#endif

    switch (ctx->pc) {
        case 0x3233a0u: goto label_3233a0;
        case 0x3233dcu: goto label_3233dc;
        default: break;
    }

    ctx->pc = 0x323350u;

    // 0x323350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x323350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x323354: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x323354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x323358: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x323358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32335c: 0x2442cb60  addiu       $v0, $v0, -0x34A0
    ctx->pc = 0x32335cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953824));
    // 0x323360: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x323360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x323364: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x323364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x323368: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x323368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32336c: 0x922605e0  lbu         $a2, 0x5E0($s1)
    ctx->pc = 0x32336cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1504)));
    // 0x323370: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x323370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323374: 0x9084053b  lbu         $a0, 0x53B($a0)
    ctx->pc = 0x323374u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1339)));
    // 0x323378: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x323378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32337c: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x32337cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x323380: 0x922805d4  lbu         $t0, 0x5D4($s1)
    ctx->pc = 0x323380u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1492)));
    // 0x323384: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x323384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x323388: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x323388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x32338c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32338cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x323390: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x323390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x323394: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x323394u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x323398: 0xc0a9be4  jal         func_2A6F90
    ctx->pc = 0x323398u;
    SET_GPR_U32(ctx, 31, 0x3233A0u);
    ctx->pc = 0x32339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323398u;
    // 0x32339c: 0x26290590  addiu       $t1, $s1, 0x590 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6F90u, 0x323398u, 0x3233A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3233A0u;
label_3233a0:
    // 0x3233a0: 0xae2205b0  sw          $v0, 0x5B0($s1)
    ctx->pc = 0x3233a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1456), GPR_U32(ctx, 2));
    // 0x3233a4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3233a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3233a8: 0x922605e0  lbu         $a2, 0x5E0($s1)
    ctx->pc = 0x3233a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1504)));
    // 0x3233ac: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3233acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3233b0: 0x2442cb61  addiu       $v0, $v0, -0x349F
    ctx->pc = 0x3233b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953825));
    // 0x3233b4: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3233b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3233b8: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3233b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3233bc: 0x922805d4  lbu         $t0, 0x5D4($s1)
    ctx->pc = 0x3233bcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1492)));
    // 0x3233c0: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x3233c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3233c4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3233c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3233c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3233c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3233cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3233ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3233d0: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x3233d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3233d4: 0xc0a9be4  jal         func_2A6F90
    ctx->pc = 0x3233D4u;
    SET_GPR_U32(ctx, 31, 0x3233DCu);
    ctx->pc = 0x3233D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3233D4u;
    // 0x3233d8: 0x26290590  addiu       $t1, $s1, 0x590 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6F90u, 0x3233D4u, 0x3233DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3233DCu;
label_3233dc:
    // 0x3233dc: 0xae2205b4  sw          $v0, 0x5B4($s1)
    ctx->pc = 0x3233dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1460), GPR_U32(ctx, 2));
    // 0x3233e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3233e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3233e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3233e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3233e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3233e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3233ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3233ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3233F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3233ECu;
        // 0x3233f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3233ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3233F4u;
}
