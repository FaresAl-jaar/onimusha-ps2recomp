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

// Function: sub_0026E710
// Address: 0x26e710 - 0x26eb04
void sub_0026E710_0x26e710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026E710_0x26e710");
#endif

    switch (ctx->pc) {
        case 0x26e734u: goto label_26e734;
        case 0x26e770u: goto label_26e770;
        case 0x26e7a0u: goto label_26e7a0;
        case 0x26e850u: goto label_26e850;
        case 0x26e8a8u: goto label_26e8a8;
        case 0x26e8d0u: goto label_26e8d0;
        case 0x26e904u: goto label_26e904;
        case 0x26e928u: goto label_26e928;
        case 0x26e94cu: goto label_26e94c;
        case 0x26e984u: goto label_26e984;
        case 0x26e9b0u: goto label_26e9b0;
        case 0x26e9b8u: goto label_26e9b8;
        case 0x26e9e4u: goto label_26e9e4;
        case 0x26ea00u: goto label_26ea00;
        case 0x26ea38u: goto label_26ea38;
        case 0x26ea64u: goto label_26ea64;
        case 0x26eaa4u: goto label_26eaa4;
        case 0x26eac4u: goto label_26eac4;
        default: break;
    }

    ctx->pc = 0x26e710u;

    // 0x26e710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26e710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26e714: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x26e714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x26e718: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26e718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26e71c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26e71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26e720: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26e720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e724: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26e724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26e728: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26e728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26e72c: 0xc05e360  jal         func_178D80
    ctx->pc = 0x26E72Cu;
    SET_GPR_U32(ctx, 31, 0x26E734u);
    ctx->pc = 0x26E730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E72Cu;
    // 0x26e730: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x26E72Cu, 0x26E734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E734u;
label_26e734:
    // 0x26e734: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26e734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e738: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x26E738u;
    {
        const bool branch_taken_0x26e738 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E738u;
        // 0x26e73c: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e738) {
            ctx->pc = 0x26E7A8u;
            goto label_26e7a8;
        }
    }
    ctx->pc = 0x26E740u;
    // 0x26e740: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x26e740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x26e744: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x26e744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x26e748: 0x34420047  ori         $v0, $v0, 0x47
    ctx->pc = 0x26e748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)71);
    // 0x26e74c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x26e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x26e750: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26e750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26e754: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x26e754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x26e758: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x26e758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x26e75c: 0x344217fd  ori         $v0, $v0, 0x17FD
    ctx->pc = 0x26e75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    // 0x26e760: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26e760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e764: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x26e764u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x26e768: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x26E768u;
    SET_GPR_U32(ctx, 31, 0x26E770u);
    ctx->pc = 0x26E76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E768u;
    // 0x26e76c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x26E768u, 0x26E770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E770u;
label_26e770:
    // 0x26e770: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x26e770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x26e774: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x26e774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x26e778: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x26e778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x26e77c: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x26e77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
    // 0x26e780: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x26e780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x26e784: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26e784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26e788: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x26e788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x26e78c: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x26e78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x26e790: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x26e790u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x26e794: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x26e794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x26e798: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x26E798u;
    SET_GPR_U32(ctx, 31, 0x26E7A0u);
    ctx->pc = 0x26E79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E798u;
    // 0x26e79c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x26E798u, 0x26E7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E7A0u;
label_26e7a0:
    // 0x26e7a0: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x26e7a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x26e7a4: 0x0  nop
    ctx->pc = 0x26e7a4u;
    // NOP
label_26e7a8:
    // 0x26e7a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26e7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26e7ac: 0x9024fc8c  lbu         $a0, -0x374($at)
    ctx->pc = 0x26e7acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x26e7b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26e7b4: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x26E7B4u;
    {
        const bool branch_taken_0x26e7b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x26E7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E7B4u;
        // 0x26e7b8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e7b4) {
            ctx->pc = 0x26E808u;
            goto label_26e808;
        }
    }
    ctx->pc = 0x26E7BCu;
    // 0x26e7bc: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x26e7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x26e7c0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x26e7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x26e7c4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x26E7C4u;
    {
        const bool branch_taken_0x26e7c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e7c4) {
            ctx->pc = 0x26E808u;
            goto label_26e808;
        }
    }
    ctx->pc = 0x26E7CCu;
    // 0x26e7cc: 0x922300a2  lbu         $v1, 0xA2($s1)
    ctx->pc = 0x26e7ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 162)));
    // 0x26e7d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26E7D0u;
    {
        const bool branch_taken_0x26e7d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E7D0u;
        // 0x26e7d4: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e7d0) {
            ctx->pc = 0x26E7E8u;
            goto label_26e7e8;
        }
    }
    ctx->pc = 0x26E7D8u;
    // 0x26e7d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e7dc: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x26E7DCu;
    {
        const bool branch_taken_0x26e7dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x26e7dc) {
            ctx->pc = 0x26E808u;
            goto label_26e808;
        }
    }
    ctx->pc = 0x26E7E4u;
    // 0x26e7e4: 0x0  nop
    ctx->pc = 0x26e7e4u;
    // NOP
label_26e7e8:
    // 0x26e7e8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x26e7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26e7ec: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x26e7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x26e7f0: 0xa423cc50  sh          $v1, -0x33B0($at)
    ctx->pc = 0x26e7f0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x82CC50u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x82CC50u, _value); } while (0);
    // 0x26e7f4: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x26e7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x26e7f8: 0xa423cc90  sh          $v1, -0x3370($at)
    ctx->pc = 0x26e7f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x82CC90u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x82CC90u, _value); } while (0);
    // 0x26e7fc: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x26e7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x26e800: 0xa423cc70  sh          $v1, -0x3390($at)
    ctx->pc = 0x26e800u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x82CC70u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x82CC70u, _value); } while (0);
    // 0x26e804: 0x0  nop
    ctx->pc = 0x26e804u;
    // NOP
label_26e808:
    // 0x26e808: 0x922400a2  lbu         $a0, 0xA2($s1)
    ctx->pc = 0x26e808u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 162)));
    // 0x26e80c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26e810: 0x1083006b  beq         $a0, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x26E810u;
    {
        const bool branch_taken_0x26e810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x26E814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E810u;
        // 0x26e814: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e810) {
            ctx->pc = 0x26E9C0u;
            goto label_26e9c0;
        }
    }
    ctx->pc = 0x26E818u;
    // 0x26e818: 0x1086005d  beq         $a0, $a2, . + 4 + (0x5D << 2)
    ctx->pc = 0x26E818u;
    {
        const bool branch_taken_0x26e818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x26e818) {
            ctx->pc = 0x26E990u;
            goto label_26e990;
        }
    }
    ctx->pc = 0x26E820u;
    // 0x26e820: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E820u;
    {
        const bool branch_taken_0x26e820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e820) {
            ctx->pc = 0x26E830u;
            goto label_26e830;
        }
    }
    ctx->pc = 0x26E828u;
    // 0x26e828: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x26E828u;
    {
        const bool branch_taken_0x26e828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e828) {
            ctx->pc = 0x26EA00u;
            goto label_26ea00;
        }
    }
    ctx->pc = 0x26E830u;
label_26e830:
    // 0x26e830: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x26e830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26e834: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x26e834u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x26e838: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x26e838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x26e83c: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x26e83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x26e840: 0x24e715c0  addiu       $a3, $a3, 0x15C0
    ctx->pc = 0x26e840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5568));
    // 0x26e844: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26e844u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e848: 0xc0684bc  jal         func_1A12F0
    ctx->pc = 0x26E848u;
    SET_GPR_U32(ctx, 31, 0x26E850u);
    ctx->pc = 0x26E84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E848u;
    // 0x26e84c: 0x34488080  ori         $t0, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A12F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A12F0u, 0x26E848u, 0x26E850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E850u;
label_26e850:
    // 0x26e850: 0x922300a0  lbu         $v1, 0xA0($s1)
    ctx->pc = 0x26e850u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x26e854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e858: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x26e858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x26e85c: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26E85Cu;
    {
        const bool branch_taken_0x26e85c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26e85c) {
            ctx->pc = 0x26E8B0u;
            goto label_26e8b0;
        }
    }
    ctx->pc = 0x26E864u;
    // 0x26e864: 0x8e2800bc  lw          $t0, 0xBC($s1)
    ctx->pc = 0x26e864u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x26e868: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x26e868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x26e86c: 0x24632540  addiu       $v1, $v1, 0x2540
    ctx->pc = 0x26e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9536));
    // 0x26e870: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x26e870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x26e874: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x26e874u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x26e878: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x26e878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26e87c: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x26e87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x26e880: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x26e880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26e884: 0x24e71610  addiu       $a3, $a3, 0x1610
    ctx->pc = 0x26e884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5648));
    // 0x26e888: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26e888u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e88c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x26e88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x26e890: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x26e890u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e894: 0x2123c  dsll32      $v0, $v0, 8
    ctx->pc = 0x26e894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 8));
    // 0x26e898: 0x2123e  dsrl32      $v0, $v0, 8
    ctx->pc = 0x26e898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 8));
    // 0x26e89c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x26e89cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x26e8a0: 0xc068538  jal         func_1A14E0
    ctx->pc = 0x26E8A0u;
    SET_GPR_U32(ctx, 31, 0x26E8A8u);
    ctx->pc = 0x26E8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E8A0u;
    // 0x26e8a4: 0x434025  or          $t0, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A14E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A14E0u, 0x26E8A0u, 0x26E8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E8A8u;
label_26e8a8:
    // 0x26e8a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26E8A8u;
    {
        const bool branch_taken_0x26e8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e8a8) {
            ctx->pc = 0x26E8D0u;
            goto label_26e8d0;
        }
    }
    ctx->pc = 0x26E8B0u;
label_26e8b0:
    // 0x26e8b0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x26e8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26e8b4: 0x8e2800b4  lw          $t0, 0xB4($s1)
    ctx->pc = 0x26e8b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x26e8b8: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x26e8b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x26e8bc: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x26e8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x26e8c0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x26e8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26e8c4: 0x24e71610  addiu       $a3, $a3, 0x1610
    ctx->pc = 0x26e8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5648));
    // 0x26e8c8: 0xc068538  jal         func_1A14E0
    ctx->pc = 0x26E8C8u;
    SET_GPR_U32(ctx, 31, 0x26E8D0u);
    ctx->pc = 0x26E8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E8C8u;
    // 0x26e8cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A14E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A14E0u, 0x26E8C8u, 0x26E8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E8D0u;
label_26e8d0:
    // 0x26e8d0: 0x8e2800b4  lw          $t0, 0xB4($s1)
    ctx->pc = 0x26e8d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x26e8d4: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x26e8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x26e8d8: 0x3c0200f0  lui         $v0, 0xF0
    ctx->pc = 0x26e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)240 << 16));
    // 0x26e8dc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x26e8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26e8e0: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x26e8e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x26e8e4: 0x3442f0f0  ori         $v0, $v0, 0xF0F0
    ctx->pc = 0x26e8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61680);
    // 0x26e8e8: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x26e8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x26e8ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26e8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e8f0: 0x24e71fc0  addiu       $a3, $a3, 0x1FC0
    ctx->pc = 0x26e8f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8128));
    // 0x26e8f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26e8f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e8f8: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x26e8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x26e8fc: 0xc0684bc  jal         func_1A12F0
    ctx->pc = 0x26E8FCu;
    SET_GPR_U32(ctx, 31, 0x26E904u);
    ctx->pc = 0x26E900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E8FCu;
    // 0x26e900: 0x624025  or          $t0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A12F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A12F0u, 0x26E8FCu, 0x26E904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E904u;
label_26e904:
    // 0x26e904: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x26e904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26e908: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x26e908u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x26e90c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x26e90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x26e910: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x26e910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x26e914: 0x2406006d  addiu       $a2, $zero, 0x6D
    ctx->pc = 0x26e914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x26e918: 0x24e71730  addiu       $a3, $a3, 0x1730
    ctx->pc = 0x26e918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5936));
    // 0x26e91c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26e91cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e920: 0xc0684bc  jal         func_1A12F0
    ctx->pc = 0x26E920u;
    SET_GPR_U32(ctx, 31, 0x26E928u);
    ctx->pc = 0x26E924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E920u;
    // 0x26e924: 0x34488080  ori         $t0, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A12F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A12F0u, 0x26E920u, 0x26E928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E928u;
label_26e928:
    // 0x26e928: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x26e928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26e92c: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x26e92cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x26e930: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x26e930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x26e934: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x26e934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x26e938: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x26e938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26e93c: 0x24e71fd4  addiu       $a3, $a3, 0x1FD4
    ctx->pc = 0x26e93cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8148));
    // 0x26e940: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26e940u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e944: 0xc0684bc  jal         func_1A12F0
    ctx->pc = 0x26E944u;
    SET_GPR_U32(ctx, 31, 0x26E94Cu);
    ctx->pc = 0x26E948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E944u;
    // 0x26e948: 0x34488080  ori         $t0, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A12F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A12F0u, 0x26E944u, 0x26E94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E94Cu;
label_26e94c:
    // 0x26e94c: 0x822700a5  lb          $a3, 0xA5($s1)
    ctx->pc = 0x26e94cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 165)));
    // 0x26e950: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x26e950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x26e954: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x26e954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26e958: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x26e958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x26e95c: 0x244220f0  addiu       $v0, $v0, 0x20F0
    ctx->pc = 0x26e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8432));
    // 0x26e960: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x26e960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x26e964: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26e964u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e968: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x26e968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x26e96c: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x26e96cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x26e970: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x26e970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x26e974: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x26e974u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x26e978: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x26e978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x26e97c: 0xc0685b4  jal         func_1A16D0
    ctx->pc = 0x26E97Cu;
    SET_GPR_U32(ctx, 31, 0x26E984u);
    ctx->pc = 0x26E980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E97Cu;
    // 0x26e980: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16D0u, 0x26E97Cu, 0x26E984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E984u;
label_26e984:
    // 0x26e984: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x26E984u;
    {
        const bool branch_taken_0x26e984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e984) {
            ctx->pc = 0x26EA00u;
            goto label_26ea00;
        }
    }
    ctx->pc = 0x26E98Cu;
    // 0x26e98c: 0x0  nop
    ctx->pc = 0x26e98cu;
    // NOP
label_26e990:
    // 0x26e990: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x26e990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26e994: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x26e994u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x26e998: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x26e998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x26e99c: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x26e99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x26e9a0: 0x24e715fc  addiu       $a3, $a3, 0x15FC
    ctx->pc = 0x26e9a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5628));
    // 0x26e9a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26e9a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e9a8: 0xc0684bc  jal         func_1A12F0
    ctx->pc = 0x26E9A8u;
    SET_GPR_U32(ctx, 31, 0x26E9B0u);
    ctx->pc = 0x26E9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E9A8u;
    // 0x26e9ac: 0x34488080  ori         $t0, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A12F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A12F0u, 0x26E9A8u, 0x26E9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E9B0u;
label_26e9b0:
    // 0x26e9b0: 0xc09bac4  jal         func_26EB10
    ctx->pc = 0x26E9B0u;
    SET_GPR_U32(ctx, 31, 0x26E9B8u);
    ctx->pc = 0x26E9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E9B0u;
    // 0x26e9b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EB10u, 0x26E9B0u, 0x26E9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E9B8u;
label_26e9b8:
    // 0x26e9b8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26E9B8u;
    {
        const bool branch_taken_0x26e9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e9b8) {
            ctx->pc = 0x26EA00u;
            goto label_26ea00;
        }
    }
    ctx->pc = 0x26E9C0u;
label_26e9c0:
    // 0x26e9c0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x26e9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26e9c4: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x26e9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x26e9c8: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x26e9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x26e9cc: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x26e9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x26e9d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26e9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e9d4: 0x24e715e8  addiu       $a3, $a3, 0x15E8
    ctx->pc = 0x26e9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5608));
    // 0x26e9d8: 0x34488080  ori         $t0, $v0, 0x8080
    ctx->pc = 0x26e9d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x26e9dc: 0xc0684bc  jal         func_1A12F0
    ctx->pc = 0x26E9DCu;
    SET_GPR_U32(ctx, 31, 0x26E9E4u);
    ctx->pc = 0x26E9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E9DCu;
    // 0x26e9e0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A12F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A12F0u, 0x26E9DCu, 0x26E9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E9E4u;
label_26e9e4:
    // 0x26e9e4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x26e9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26e9e8: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x26e9e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x26e9ec: 0x27848778  addiu       $a0, $gp, -0x7888
    ctx->pc = 0x26e9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
    // 0x26e9f0: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x26e9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x26e9f4: 0x24e722a0  addiu       $a3, $a3, 0x22A0
    ctx->pc = 0x26e9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8864));
    // 0x26e9f8: 0xc0685b4  jal         func_1A16D0
    ctx->pc = 0x26E9F8u;
    SET_GPR_U32(ctx, 31, 0x26EA00u);
    ctx->pc = 0x26E9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E9F8u;
    // 0x26e9fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16D0u, 0x26E9F8u, 0x26EA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EA00u;
label_26ea00:
    // 0x26ea00: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x26EA00u;
    {
        const bool branch_taken_0x26ea00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA00u;
        // 0x26ea04: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea00) {
            ctx->pc = 0x26EA68u;
            goto label_26ea68;
        }
    }
    ctx->pc = 0x26EA08u;
    // 0x26ea08: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x26ea08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x26ea0c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x26ea0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x26ea10: 0x34420047  ori         $v0, $v0, 0x47
    ctx->pc = 0x26ea10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)71);
    // 0x26ea14: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x26ea14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x26ea18: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26ea18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26ea1c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x26ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x26ea20: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x26ea20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x26ea24: 0x3442000f  ori         $v0, $v0, 0xF
    ctx->pc = 0x26ea24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15);
    // 0x26ea28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26ea28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea2c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x26ea2cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x26ea30: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x26EA30u;
    SET_GPR_U32(ctx, 31, 0x26EA38u);
    ctx->pc = 0x26EA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EA30u;
    // 0x26ea34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x26EA30u, 0x26EA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EA38u;
label_26ea38:
    // 0x26ea38: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x26ea38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x26ea3c: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x26ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x26ea40: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x26ea40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x26ea44: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x26ea44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
    // 0x26ea48: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26ea48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26ea4c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x26ea4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x26ea50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26ea50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ea54: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x26ea54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x26ea58: 0xfe060018  sd          $a2, 0x18($s0)
    ctx->pc = 0x26ea58u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 6));
    // 0x26ea5c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x26EA5Cu;
    SET_GPR_U32(ctx, 31, 0x26EA64u);
    ctx->pc = 0x26EA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EA5Cu;
    // 0x26ea60: 0x2484cc40  addiu       $a0, $a0, -0x33C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x26EA5Cu, 0x26EA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EA64u;
label_26ea64:
    // 0x26ea64: 0x0  nop
    ctx->pc = 0x26ea64u;
    // NOP
label_26ea68:
    // 0x26ea68: 0x922400a2  lbu         $a0, 0xA2($s1)
    ctx->pc = 0x26ea68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 162)));
    // 0x26ea6c: 0x922300a3  lbu         $v1, 0xA3($s1)
    ctx->pc = 0x26ea6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 163)));
    // 0x26ea70: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x26EA70u;
    {
        const bool branch_taken_0x26ea70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x26EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA70u;
        // 0x26ea74: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea70) {
            ctx->pc = 0x26EAF0u;
            goto label_26eaf0;
        }
    }
    ctx->pc = 0x26EA78u;
    // 0x26ea78: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x26EA78u;
    {
        const bool branch_taken_0x26ea78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26ea78) {
            ctx->pc = 0x26EAB0u;
            goto label_26eab0;
        }
    }
    ctx->pc = 0x26EA80u;
    // 0x26ea80: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26EA80u;
    {
        const bool branch_taken_0x26ea80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ea80) {
            ctx->pc = 0x26EA90u;
            goto label_26ea90;
        }
    }
    ctx->pc = 0x26EA88u;
    // 0x26ea88: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26EA88u;
    {
        const bool branch_taken_0x26ea88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ea88) {
            ctx->pc = 0x26EAD0u;
            goto label_26ead0;
        }
    }
    ctx->pc = 0x26EA90u;
label_26ea90:
    // 0x26ea90: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x26ea90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x26ea94: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x26ea94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x26ea98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26ea98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ea9c: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x26EA9Cu;
    SET_GPR_U32(ctx, 31, 0x26EAA4u);
    ctx->pc = 0x26EAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EA9Cu;
    // 0x26eaa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x26EA9Cu, 0x26EAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EAA4u;
label_26eaa4:
    // 0x26eaa4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26EAA4u;
    {
        const bool branch_taken_0x26eaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eaa4) {
            ctx->pc = 0x26EAE8u;
            goto label_26eae8;
        }
    }
    ctx->pc = 0x26EAACu;
    // 0x26eaac: 0x0  nop
    ctx->pc = 0x26eaacu;
    // NOP
label_26eab0:
    // 0x26eab0: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x26eab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x26eab4: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x26eab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x26eab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26eab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eabc: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x26EABCu;
    SET_GPR_U32(ctx, 31, 0x26EAC4u);
    ctx->pc = 0x26EAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EABCu;
    // 0x26eac0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x26EABCu, 0x26EAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EAC4u;
label_26eac4:
    // 0x26eac4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26EAC4u;
    {
        const bool branch_taken_0x26eac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eac4) {
            ctx->pc = 0x26EAE8u;
            goto label_26eae8;
        }
    }
    ctx->pc = 0x26EACCu;
    // 0x26eacc: 0x0  nop
    ctx->pc = 0x26eaccu;
    // NOP
label_26ead0:
    // 0x26ead0: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x26ead0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x26ead4: 0x9023feea  lbu         $v1, -0x116($at)
    ctx->pc = 0x26ead4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x92FEEAu));
    // 0x26ead8: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x26ead8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x26eadc: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x26eadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x26eae0: 0xa023feea  sb          $v1, -0x116($at)
    ctx->pc = 0x26eae0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x92FEEAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x92FEEAu, _value); } while (0);
    // 0x26eae4: 0x0  nop
    ctx->pc = 0x26eae4u;
    // NOP
label_26eae8:
    // 0x26eae8: 0x922300a2  lbu         $v1, 0xA2($s1)
    ctx->pc = 0x26eae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 162)));
    // 0x26eaec: 0xa22300a3  sb          $v1, 0xA3($s1)
    ctx->pc = 0x26eaecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 163), (uint8_t)GPR_U32(ctx, 3));
label_26eaf0:
    // 0x26eaf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26eaf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26eaf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26eaf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26eaf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26eaf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26eafc: 0x3e00008  jr          $ra
    ctx->pc = 0x26EAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EAFCu;
        // 0x26eb00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EB04u;
}
