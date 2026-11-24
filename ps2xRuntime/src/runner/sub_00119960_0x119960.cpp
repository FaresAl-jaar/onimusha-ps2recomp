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

// Function: sub_00119960
// Address: 0x119960 - 0x119a54
void sub_00119960_0x119960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119960_0x119960");
#endif

    switch (ctx->pc) {
        case 0x1199dcu: goto label_1199dc;
        case 0x119a24u: goto label_119a24;
        case 0x119a2cu: goto label_119a2c;
        case 0x119a34u: goto label_119a34;
        default: break;
    }

    ctx->pc = 0x119960u;

    // 0x119960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x119960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x119964: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x119964u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x119968: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x119968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11996c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11996cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x119970: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x119970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119974: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x119974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119978: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x119978u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11997c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11997cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119980: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x119980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119984: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x119984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x119988: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x119988u;
    {
        const bool branch_taken_0x119988 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x11998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119988u;
        // 0x11998c: 0x28180  sll         $s0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119988) {
            ctx->pc = 0x1199A0u;
            goto label_1199a0;
        }
    }
    ctx->pc = 0x119990u;
    // 0x119990: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x119990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x119994: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x119994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x119998: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x119998u;
    {
        const bool branch_taken_0x119998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x119998) {
            ctx->pc = 0x11999Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119998u;
            // 0x11999c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1199ACu;
            goto label_1199ac;
        }
    }
    ctx->pc = 0x1199A0u;
label_1199a0:
    // 0x1199a0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1199a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1199a4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1199A4u;
    {
        const bool branch_taken_0x1199a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199A4u;
        // 0x1199a8: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199a4) {
            ctx->pc = 0x119A38u;
            goto label_119a38;
        }
    }
    ctx->pc = 0x1199ACu;
label_1199ac:
    // 0x1199ac: 0x24424148  addiu       $v0, $v0, 0x4148
    ctx->pc = 0x1199acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16712));
    // 0x1199b0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1199b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1199b4: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1199B4u;
    {
        const bool branch_taken_0x1199b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1199b4) {
            ctx->pc = 0x1199B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1199B4u;
            // 0x1199b8: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1199C8u;
            goto label_1199c8;
        }
    }
    ctx->pc = 0x1199BCu;
    // 0x1199bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1199bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1199c0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1199C0u;
    {
        const bool branch_taken_0x1199c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199C0u;
        // 0x1199c4: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199c0) {
            ctx->pc = 0x119A38u;
            goto label_119a38;
        }
    }
    ctx->pc = 0x1199C8u;
label_1199c8:
    // 0x1199c8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1199c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1199cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1199CCu;
    {
        const bool branch_taken_0x1199cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1199cc) {
            ctx->pc = 0x1199E0u;
            goto label_1199e0;
        }
    }
    ctx->pc = 0x1199D4u;
    // 0x1199d4: 0xc0463c6  jal         func_118F18
    ctx->pc = 0x1199D4u;
    SET_GPR_U32(ctx, 31, 0x1199DCu);
    ctx->pc = 0x1199D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1199D4u;
    // 0x1199d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118F18u, 0x1199D4u, 0x1199DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1199DCu;
label_1199dc:
    // 0x1199dc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1199dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1199e0:
    // 0x1199e0: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1199E0u;
    {
        const bool branch_taken_0x1199e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1199E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199E0u;
        // 0x1199e4: 0xae110028  sw          $s1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199e0) {
            ctx->pc = 0x1199FCu;
            goto label_1199fc;
        }
    }
    ctx->pc = 0x1199E8u;
    // 0x1199e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1199e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1199ec: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x1199ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x1199f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1199f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1199f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1199F4u;
    {
        const bool branch_taken_0x1199f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199F4u;
        // 0x1199f8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199f4) {
            ctx->pc = 0x119A24u;
            goto label_119a24;
        }
    }
    ctx->pc = 0x1199FCu;
label_1199fc:
    // 0x1199fc: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x1199fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x119a00: 0xfe120020  sd          $s2, 0x20($s0)
    ctx->pc = 0x119a00u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 18));
    // 0x119a04: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x119a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x119a08: 0xae1c002c  sw          $gp, 0x2C($s0)
    ctx->pc = 0x119a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 28));
    // 0x119a0c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x119a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x119a10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x119a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x119a14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119A14u;
    {
        const bool branch_taken_0x119a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A14u;
        // 0x119a18: 0xae130030  sw          $s3, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a14) {
            ctx->pc = 0x119A24u;
            goto label_119a24;
        }
    }
    ctx->pc = 0x119A1Cu;
    // 0x119a1c: 0xc0463a4  jal         func_118E90
    ctx->pc = 0x119A1Cu;
    SET_GPR_U32(ctx, 31, 0x119A24u);
    ctx->pc = 0x119A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119A1Cu;
    // 0x119a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118E90u, 0x119A1Cu, 0x119A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119A24u;
label_119a24:
    // 0x119a24: 0xc04647e  jal         func_1191F8
    ctx->pc = 0x119A24u;
    SET_GPR_U32(ctx, 31, 0x119A2Cu);
    ctx->pc = 0x1191F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1191F8u, 0x119A24u, 0x119A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119A2Cu;
label_119a2c:
    // 0x119a2c: 0xc046340  jal         func_118D00
    ctx->pc = 0x119A2Cu;
    SET_GPR_U32(ctx, 31, 0x119A34u);
    ctx->pc = 0x119A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119A2Cu;
    // 0x119a30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D00u, 0x119A2Cu, 0x119A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119A34u;
label_119a34:
    // 0x119a34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x119a34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_119a38:
    // 0x119a38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x119a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119a3c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x119a3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119a40: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x119a40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119a44: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119a44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119a48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119a48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x119A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A4Cu;
        // 0x119a50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119A54u;
}
