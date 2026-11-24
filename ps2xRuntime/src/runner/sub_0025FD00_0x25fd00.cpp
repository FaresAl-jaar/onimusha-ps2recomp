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

// Function: sub_0025FD00
// Address: 0x25fd00 - 0x25fdec
void sub_0025FD00_0x25fd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FD00_0x25fd00");
#endif

    switch (ctx->pc) {
        case 0x25fd58u: goto label_25fd58;
        case 0x25fd74u: goto label_25fd74;
        case 0x25fd80u: goto label_25fd80;
        default: break;
    }

    ctx->pc = 0x25fd00u;

    // 0x25fd00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25fd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25fd04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25fd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25fd08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25fd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25fd0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25fd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25fd10: 0x9383894c  lbu         $v1, -0x76B4($gp)
    ctx->pc = 0x25fd10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936908)));
    // 0x25fd14: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x25FD14u;
    {
        const bool branch_taken_0x25fd14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25fd14) {
            ctx->pc = 0x25FDD8u;
            goto label_25fdd8;
        }
    }
    ctx->pc = 0x25FD1Cu;
    // 0x25fd1c: 0x93838950  lbu         $v1, -0x76B0($gp)
    ctx->pc = 0x25fd1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936912)));
    // 0x25fd20: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x25fd20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x25fd24: 0x1420002a  bnez        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x25FD24u;
    {
        const bool branch_taken_0x25fd24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x25fd24) {
            ctx->pc = 0x25FDD0u;
            goto label_25fdd0;
        }
    }
    ctx->pc = 0x25FD2Cu;
    // 0x25fd2c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x25fd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x25fd30: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x25fd30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25fd34: 0x2442f1b0  addiu       $v0, $v0, -0xE50
    ctx->pc = 0x25fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963632));
    // 0x25fd38: 0x8f918ba8  lw          $s1, -0x7458($gp)
    ctx->pc = 0x25fd38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x25fd3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25fd40: 0x94500000  lhu         $s0, 0x0($v0)
    ctx->pc = 0x25fd40u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25fd44: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x25fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x25fd48: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x25fd48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x25fd4c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x25fd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x25fd50: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x25FD50u;
    SET_GPR_U32(ctx, 31, 0x25FD58u);
    ctx->pc = 0x25FD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FD50u;
    // 0x25fd54: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x25FD50u, 0x25FD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FD58u;
label_25fd58:
    // 0x25fd58: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x25fd58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x25fd5c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x25fd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x25fd60: 0x24843050  addiu       $a0, $a0, 0x3050
    ctx->pc = 0x25fd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    // 0x25fd64: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x25fd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25fd68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25fd68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fd6c: 0xc0ce188  jal         func_338620
    ctx->pc = 0x25FD6Cu;
    SET_GPR_U32(ctx, 31, 0x25FD74u);
    ctx->pc = 0x25FD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FD6Cu;
    // 0x25fd70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338620u, 0x25FD6Cu, 0x25FD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FD74u;
label_25fd74:
    // 0x25fd74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25fd74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fd78: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x25fd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x25fd7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25fd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25fd80:
    // 0x25fd80: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x25FD80u;
    {
        const bool branch_taken_0x25fd80 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x25fd80) {
            ctx->pc = 0x25FDA0u;
            goto label_25fda0;
        }
    }
    ctx->pc = 0x25FD88u;
    // 0x25fd88: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25FD88u;
    {
        const bool branch_taken_0x25fd88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD88u;
        // 0x25fd8c: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd88) {
            ctx->pc = 0x25FDA0u;
            goto label_25fda0;
        }
    }
    ctx->pc = 0x25FD90u;
    // 0x25fd90: 0xac306d34  sw          $s0, 0x6D34($at)
    ctx->pc = 0x25fd90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27956), GPR_U32(ctx, 16));
    // 0x25fd94: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x25fd94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x25fd98: 0xac256d38  sw          $a1, 0x6D38($at)
    ctx->pc = 0x25fd98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8D6D38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6D38u, _value); } while (0);
    // 0x25fd9c: 0x0  nop
    ctx->pc = 0x25fd9cu;
    // NOP
label_25fda0:
    // 0x25fda0: 0x14c40007  bne         $a2, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25FDA0u;
    {
        const bool branch_taken_0x25fda0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x25fda0) {
            ctx->pc = 0x25FDC0u;
            goto label_25fdc0;
        }
    }
    ctx->pc = 0x25FDA8u;
    // 0x25fda8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25FDA8u;
    {
        const bool branch_taken_0x25fda8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDA8u;
        // 0x25fdac: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fda8) {
            ctx->pc = 0x25FDC0u;
            goto label_25fdc0;
        }
    }
    ctx->pc = 0x25FDB0u;
    // 0x25fdb0: 0xac306f54  sw          $s0, 0x6F54($at)
    ctx->pc = 0x25fdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 28500), GPR_U32(ctx, 16));
    // 0x25fdb4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x25fdb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x25fdb8: 0xac256f58  sw          $a1, 0x6F58($at)
    ctx->pc = 0x25fdb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8D6F58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6F58u, _value); } while (0);
    // 0x25fdbc: 0x0  nop
    ctx->pc = 0x25fdbcu;
    // NOP
label_25fdc0:
    // 0x25fdc0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x25fdc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x25fdc4: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x25fdc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x25fdc8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x25FDC8u;
    {
        const bool branch_taken_0x25fdc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25fdc8) {
            ctx->pc = 0x25FD80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25fd80;
        }
    }
    ctx->pc = 0x25FDD0u;
label_25fdd0:
    // 0x25fdd0: 0xa3808950  sb          $zero, -0x76B0($gp)
    ctx->pc = 0x25fdd0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936912), (uint8_t)GPR_U32(ctx, 0));
    // 0x25fdd4: 0x0  nop
    ctx->pc = 0x25fdd4u;
    // NOP
label_25fdd8:
    // 0x25fdd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25fdd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25fddc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25fddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fde0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25fde0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fde4: 0x3e00008  jr          $ra
    ctx->pc = 0x25FDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDE4u;
        // 0x25fde8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FDECu;
}
