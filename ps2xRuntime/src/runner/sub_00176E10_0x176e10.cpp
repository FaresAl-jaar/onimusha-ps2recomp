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

// Function: sub_00176E10
// Address: 0x176e10 - 0x176fe4
void sub_00176E10_0x176e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176E10_0x176e10");
#endif

    switch (ctx->pc) {
        case 0x176f58u: goto label_176f58;
        default: break;
    }

    ctx->pc = 0x176e10u;

    // 0x176e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x176e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x176e14: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x176e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x176e18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x176e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x176e1c: 0x24020e42  addiu       $v0, $zero, 0xE42
    ctx->pc = 0x176e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3650));
    // 0x176e20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x176e24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x176e28: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x176e28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x176e2c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x176E2Cu;
    {
        const bool branch_taken_0x176e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x176E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E2Cu;
        // 0x176e30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176e2c) {
            ctx->pc = 0x176E40u;
            goto label_176e40;
        }
    }
    ctx->pc = 0x176E34u;
    // 0x176e34: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x176E34u;
    {
        const bool branch_taken_0x176e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176e34) {
            ctx->pc = 0x176FD0u;
            goto label_176fd0;
        }
    }
    ctx->pc = 0x176E3Cu;
    // 0x176e3c: 0x0  nop
    ctx->pc = 0x176e3cu;
    // NOP
label_176e40:
    // 0x176e40: 0x5143a  dsrl        $v0, $a1, 16
    ctx->pc = 0x176e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 16);
    // 0x176e44: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x176e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x176e48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x176e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x176e4c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x176E4Cu;
    {
        const bool branch_taken_0x176e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x176E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E4Cu;
        // 0x176e50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176e4c) {
            ctx->pc = 0x176E60u;
            goto label_176e60;
        }
    }
    ctx->pc = 0x176E54u;
    // 0x176e54: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x176E54u;
    {
        const bool branch_taken_0x176e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176e54) {
            ctx->pc = 0x176FD0u;
            goto label_176fd0;
        }
    }
    ctx->pc = 0x176E5Cu;
    // 0x176e5c: 0x0  nop
    ctx->pc = 0x176e5cu;
    // NOP
label_176e60:
    // 0x176e60: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x176e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x176e64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x176e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x176e68: 0x3c030082  lui         $v1, 0x82
    ctx->pc = 0x176e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)130 << 16));
    // 0x176e6c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x176e6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x176e70: 0x2463bba0  addiu       $v1, $v1, -0x4460
    ctx->pc = 0x176e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949792));
    // 0x176e74: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x176e74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176e78: 0x5123a  dsrl        $v0, $a1, 8
    ctx->pc = 0x176e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 8);
    // 0x176e7c: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x176e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x176e80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x176e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x176e84: 0x3c030082  lui         $v1, 0x82
    ctx->pc = 0x176e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)130 << 16));
    // 0x176e88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x176e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x176e8c: 0x2463b1a0  addiu       $v1, $v1, -0x4E60
    ctx->pc = 0x176e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947232));
    // 0x176e90: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x176e90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x176e94: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x176e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x176e98: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x176e98u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x176e9c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x176e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x176ea0: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x176ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x176ea4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x176ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x176ea8: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x176ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x176eac: 0x668821  addu        $s1, $v1, $a2
    ctx->pc = 0x176eacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x176eb0: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x176eb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x176eb4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x176EB4u;
    {
        const bool branch_taken_0x176eb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x176EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176EB4u;
        // 0x176eb8: 0x30a2ffff  andi        $v0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x176eb4) {
            ctx->pc = 0x176EC8u;
            goto label_176ec8;
        }
    }
    ctx->pc = 0x176EBCu;
    // 0x176ebc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x176EBCu;
    {
        const bool branch_taken_0x176ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x176ebc) {
            ctx->pc = 0x176ED0u;
            goto label_176ed0;
        }
    }
    ctx->pc = 0x176EC4u;
    // 0x176ec4: 0x0  nop
    ctx->pc = 0x176ec4u;
    // NOP
label_176ec8:
    // 0x176ec8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x176EC8u;
    {
        const bool branch_taken_0x176ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176EC8u;
        // 0x176ecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176ec8) {
            ctx->pc = 0x176FD0u;
            goto label_176fd0;
        }
    }
    ctx->pc = 0x176ED0u;
label_176ed0:
    // 0x176ed0: 0x8c900268  lw          $s0, 0x268($a0)
    ctx->pc = 0x176ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 616)));
    // 0x176ed4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x176ED4u;
    {
        const bool branch_taken_0x176ed4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x176ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176ED4u;
        // 0x176ed8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176ed4) {
            ctx->pc = 0x176EE8u;
            goto label_176ee8;
        }
    }
    ctx->pc = 0x176EDCu;
    // 0x176edc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x176EDCu;
    {
        const bool branch_taken_0x176edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176edc) {
            ctx->pc = 0x176FD0u;
            goto label_176fd0;
        }
    }
    ctx->pc = 0x176EE4u;
    // 0x176ee4: 0x0  nop
    ctx->pc = 0x176ee4u;
    // NOP
label_176ee8:
    // 0x176ee8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x176ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x176eec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x176EECu;
    {
        const bool branch_taken_0x176eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176EECu;
        // 0x176ef0: 0xac820268  sw          $v0, 0x268($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176eec) {
            ctx->pc = 0x176F00u;
            goto label_176f00;
        }
    }
    ctx->pc = 0x176EF4u;
    // 0x176ef4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x176EF4u;
    {
        const bool branch_taken_0x176ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176EF4u;
        // 0x176ef8: 0xac80026c  sw          $zero, 0x26C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 620), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176ef4) {
            ctx->pc = 0x176F08u;
            goto label_176f08;
        }
    }
    ctx->pc = 0x176EFCu;
    // 0x176efc: 0x0  nop
    ctx->pc = 0x176efcu;
    // NOP
label_176f00:
    // 0x176f00: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x176f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x176f04: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x176f04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_176f08:
    // 0x176f08: 0x8c820260  lw          $v0, 0x260($a0)
    ctx->pc = 0x176f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 608)));
    // 0x176f0c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x176F0Cu;
    {
        const bool branch_taken_0x176f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176f0c) {
            ctx->pc = 0x176F28u;
            goto label_176f28;
        }
    }
    ctx->pc = 0x176F14u;
    // 0x176f14: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x176f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x176f18: 0xac900264  sw          $s0, 0x264($a0)
    ctx->pc = 0x176f18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 612), GPR_U32(ctx, 16));
    // 0x176f1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x176F1Cu;
    {
        const bool branch_taken_0x176f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F1Cu;
        // 0x176f20: 0xac900260  sw          $s0, 0x260($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 608), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f1c) {
            ctx->pc = 0x176F40u;
            goto label_176f40;
        }
    }
    ctx->pc = 0x176F24u;
    // 0x176f24: 0x0  nop
    ctx->pc = 0x176f24u;
    // NOP
label_176f28:
    // 0x176f28: 0x8c820264  lw          $v0, 0x264($a0)
    ctx->pc = 0x176f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 612)));
    // 0x176f2c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x176f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x176f30: 0x8c820264  lw          $v0, 0x264($a0)
    ctx->pc = 0x176f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 612)));
    // 0x176f34: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x176f34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x176f38: 0xac900264  sw          $s0, 0x264($a0)
    ctx->pc = 0x176f38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 612), GPR_U32(ctx, 16));
    // 0x176f3c: 0x0  nop
    ctx->pc = 0x176f3cu;
    // NOP
label_176f40:
    // 0x176f40: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x176f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x176f44: 0xfe050000  sd          $a1, 0x0($s0)
    ctx->pc = 0x176f44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 5));
    // 0x176f48: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x176f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x176f4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f50: 0xc049590  jal         func_125640
    ctx->pc = 0x176F50u;
    SET_GPR_U32(ctx, 31, 0x176F58u);
    ctx->pc = 0x176F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176F50u;
    // 0x176f54: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x176F50u, 0x176F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176F58u;
label_176f58:
    // 0x176f58: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x176f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x176f5c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x176f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x176f60: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x176f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x176f64: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x176f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x176f68: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x176f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x176f6c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x176f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x176f70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x176f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x176f74: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x176f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x176f78: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x176f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x176f7c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x176f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x176f80: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x176f80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x176f84: 0xa202002f  sb          $v0, 0x2F($s0)
    ctx->pc = 0x176f84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 2));
    // 0x176f88: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x176f88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x176f8c: 0x28410022  slti        $at, $v0, 0x22
    ctx->pc = 0x176f8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x176f90: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x176F90u;
    {
        const bool branch_taken_0x176f90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x176F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F90u;
        // 0x176f94: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f90) {
            ctx->pc = 0x176FB0u;
            goto label_176fb0;
        }
    }
    ctx->pc = 0x176F98u;
    // 0x176f98: 0x3c020082  lui         $v0, 0x82
    ctx->pc = 0x176f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)130 << 16));
    // 0x176f9c: 0x2442cba0  addiu       $v0, $v0, -0x3460
    ctx->pc = 0x176f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953888));
    // 0x176fa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176fa4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x176fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176fa8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x176FA8u;
    {
        const bool branch_taken_0x176fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FA8u;
        // 0x176fac: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176fa8) {
            ctx->pc = 0x176FC0u;
            goto label_176fc0;
        }
    }
    ctx->pc = 0x176FB0u;
label_176fb0:
    // 0x176fb0: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x176fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x176fb4: 0x24426ff0  addiu       $v0, $v0, 0x6FF0
    ctx->pc = 0x176fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28656));
    // 0x176fb8: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x176fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x176fbc: 0x0  nop
    ctx->pc = 0x176fbcu;
    // NOP
label_176fc0:
    // 0x176fc0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x176fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x176fc4: 0xa202004f  sb          $v0, 0x4F($s0)
    ctx->pc = 0x176fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x176fc8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x176fc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176fcc: 0x0  nop
    ctx->pc = 0x176fccu;
    // NOP
label_176fd0:
    // 0x176fd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x176fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176fd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x176fd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176fd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176fd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x176FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176FDCu;
        // 0x176fe0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176FE4u;
}
