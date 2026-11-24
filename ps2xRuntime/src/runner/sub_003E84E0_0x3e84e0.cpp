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

// Function: sub_003E84E0
// Address: 0x3e84e0 - 0x3e85e4
void sub_003E84E0_0x3e84e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E84E0_0x3e84e0");
#endif

    switch (ctx->pc) {
        case 0x3e8530u: goto label_3e8530;
        case 0x3e8558u: goto label_3e8558;
        case 0x3e8580u: goto label_3e8580;
        default: break;
    }

    ctx->pc = 0x3e84e0u;

    // 0x3e84e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3e84e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3e84e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3e84e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3e84e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3e84e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3e84ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e84ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3e84f0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3e84f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e84f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e84f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3e84f8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3e84f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e84fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e84fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3e8500: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3e8500u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8504: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e8504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e8508: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3e8508u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e850c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3e850cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8510: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e8510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8514: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x3e8514u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x3e8518: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e8518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e851c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e851cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8520: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x3e8520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x3e8524: 0x25088470  addiu       $t0, $t0, -0x7B90
    ctx->pc = 0x3e8524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935664));
    // 0x3e8528: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3E8528u;
    SET_GPR_U32(ctx, 31, 0x3E8530u);
    ctx->pc = 0x3E852Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8528u;
    // 0x3e852c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3E8528u, 0x3E8530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8530u;
label_3e8530:
    // 0x3e8530: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e8530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8534: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3E8534u;
    {
        const bool branch_taken_0x3e8534 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8534u;
        // 0x3e8538: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8534) {
            ctx->pc = 0x3E85B8u;
            goto label_3e85b8;
        }
    }
    ctx->pc = 0x3E853Cu;
    // 0x3e853c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3e853cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8540: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3e8540u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8544: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x3e8544u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e8548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e854c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e854cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e8550: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3E8550u;
    SET_GPR_U32(ctx, 31, 0x3E8558u);
    ctx->pc = 0x3E8554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8550u;
    // 0x3e8554: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3E8550u, 0x3E8558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8558u;
label_3e8558:
    // 0x3e8558: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x3e8558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3e855c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3e855cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3e8560: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x3e8560u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e8564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e8564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8568: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x3e8568u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e856c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e856cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e8570: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3e8570u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e8574: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3e8574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e8578: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3E8578u;
    SET_GPR_U32(ctx, 31, 0x3E8580u);
    ctx->pc = 0x3E857Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8578u;
    // 0x3e857c: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3E8578u, 0x3E8580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8580u;
label_3e8580:
    // 0x3e8580: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x3e8580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x3e8584: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3e8584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3e8588: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x3e8588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x3e858c: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x3e858cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3e8590: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x3e8590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3e8594: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3e8594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3e8598: 0x244249d0  addiu       $v0, $v0, 0x49D0
    ctx->pc = 0x3e8598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18896));
    // 0x3e859c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e859cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e85a0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e85a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e85a4: 0xa2020558  sb          $v0, 0x558($s0)
    ctx->pc = 0x3e85a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e85a8: 0xa2110559  sb          $s1, 0x559($s0)
    ctx->pc = 0x3e85a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 17));
    // 0x3e85ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3E85ACu;
    {
        const bool branch_taken_0x3e85ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E85B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E85ACu;
        // 0x3e85b0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e85ac) {
            ctx->pc = 0x3E85C0u;
            goto label_3e85c0;
        }
    }
    ctx->pc = 0x3E85B4u;
    // 0x3e85b4: 0x0  nop
    ctx->pc = 0x3e85b4u;
    // NOP
label_3e85b8:
    // 0x3e85b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e85b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e85bc: 0x0  nop
    ctx->pc = 0x3e85bcu;
    // NOP
label_3e85c0:
    // 0x3e85c0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3e85c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3e85c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3e85c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e85c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e85c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e85cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e85ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e85d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e85d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e85d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e85d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e85d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e85d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e85dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E85DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E85E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E85DCu;
        // 0x3e85e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E85DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E85E4u;
}
