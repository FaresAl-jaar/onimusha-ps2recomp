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

// Function: sub_00215E20
// Address: 0x215e20 - 0x2160e8
void sub_00215E20_0x215e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215E20_0x215e20");
#endif

    switch (ctx->pc) {
        case 0x215e78u: goto label_215e78;
        case 0x215e88u: goto label_215e88;
        case 0x215e9cu: goto label_215e9c;
        case 0x215eb0u: goto label_215eb0;
        case 0x215ee4u: goto label_215ee4;
        case 0x215f14u: goto label_215f14;
        case 0x215f28u: goto label_215f28;
        case 0x215f30u: goto label_215f30;
        case 0x215f40u: goto label_215f40;
        case 0x215f58u: goto label_215f58;
        case 0x215f68u: goto label_215f68;
        case 0x215f88u: goto label_215f88;
        case 0x215f98u: goto label_215f98;
        case 0x215fc8u: goto label_215fc8;
        case 0x215fe0u: goto label_215fe0;
        case 0x21604cu: goto label_21604c;
        case 0x216058u: goto label_216058;
        case 0x216068u: goto label_216068;
        case 0x216088u: goto label_216088;
        case 0x2160a8u: goto label_2160a8;
        default: break;
    }

    ctx->pc = 0x215e20u;

    // 0x215e20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x215e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x215e24: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x215e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x215e28: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x215e28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e2c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x215e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x215e30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x215e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e34: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x215e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x215e38: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x215e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e3c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x215e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x215e40: 0x26140950  addiu       $s4, $s0, 0x950
    ctx->pc = 0x215e40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 2384));
    // 0x215e44: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x215e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x215e48: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x215e48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e4c: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x215e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x215e50: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x215e50u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e54: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x215e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x215e58: 0x26021fb8  addiu       $v0, $s0, 0x1FB8
    ctx->pc = 0x215e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8120));
    // 0x215e5c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x215e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x215e60: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x215e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x215e64: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x215e64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x215e68: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x215e68u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x215e6c: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x215e6cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x215e70: 0xc086f52  jal         func_21BD48
    ctx->pc = 0x215E70u;
    SET_GPR_U32(ctx, 31, 0x215E78u);
    ctx->pc = 0x215E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215E70u;
    // 0x215e74: 0xae800028  sw          $zero, 0x28($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BD48u, 0x215E70u, 0x215E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E78u;
label_215e78:
    // 0x215e78: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x215E78u;
    {
        const bool branch_taken_0x215e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215e78) {
            ctx->pc = 0x215E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215E78u;
            // 0x215e7c: 0x8e630078  lw          $v1, 0x78($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215EB8u;
            goto label_215eb8;
        }
    }
    ctx->pc = 0x215E80u;
    // 0x215e80: 0xc08595a  jal         func_216568
    ctx->pc = 0x215E80u;
    SET_GPR_U32(ctx, 31, 0x215E88u);
    ctx->pc = 0x215E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215E80u;
    // 0x215e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216568u, 0x215E80u, 0x215E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E88u;
label_215e88:
    // 0x215e88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x215e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215e8c: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x215E8Cu;
    {
        const bool branch_taken_0x215e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x215e8c) {
            ctx->pc = 0x215E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215E8Cu;
            // 0x215e90: 0xae830028  sw          $v1, 0x28($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215EA8u;
            goto label_215ea8;
        }
    }
    ctx->pc = 0x215E94u;
    // 0x215e94: 0xc0867de  jal         func_219F78
    ctx->pc = 0x215E94u;
    SET_GPR_U32(ctx, 31, 0x215E9Cu);
    ctx->pc = 0x215E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215E94u;
    // 0x215e98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F78u, 0x215E94u, 0x215E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215E9Cu;
label_215e9c:
    // 0x215e9c: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x215E9Cu;
    {
        const bool branch_taken_0x215e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E9Cu;
        // 0x215ea0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215e9c) {
            ctx->pc = 0x2160BCu;
            goto label_2160bc;
        }
    }
    ctx->pc = 0x215EA4u;
    // 0x215ea4: 0x0  nop
    ctx->pc = 0x215ea4u;
    // NOP
label_215ea8:
    // 0x215ea8: 0xc0856b6  jal         func_215AD8
    ctx->pc = 0x215EA8u;
    SET_GPR_U32(ctx, 31, 0x215EB0u);
    ctx->pc = 0x215EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215EA8u;
    // 0x215eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215AD8u, 0x215EA8u, 0x215EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215EB0u;
label_215eb0:
    // 0x215eb0: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x215EB0u;
    {
        const bool branch_taken_0x215eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215EB0u;
        // 0x215eb4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215eb0) {
            ctx->pc = 0x2160C0u;
            goto label_2160c0;
        }
    }
    ctx->pc = 0x215EB8u;
label_215eb8:
    // 0x215eb8: 0x240200cc  addiu       $v0, $zero, 0xCC
    ctx->pc = 0x215eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x215ebc: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215EBCu;
    {
        const bool branch_taken_0x215ebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x215ebc) {
            ctx->pc = 0x215EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215EBCu;
            // 0x215ec0: 0x323100cc  andi        $s1, $s1, 0xCC (Delay Slot)
            SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)204);
            ctx->in_delay_slot = false;
            ctx->pc = 0x215ED4u;
            goto label_215ed4;
        }
    }
    ctx->pc = 0x215EC4u;
    // 0x215ec4: 0x8e620170  lw          $v0, 0x170($s3)
    ctx->pc = 0x215ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 368)));
    // 0x215ec8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215EC8u;
    {
        const bool branch_taken_0x215ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215EC8u;
        // 0x215ecc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ec8) {
            ctx->pc = 0x215ED8u;
            goto label_215ed8;
        }
    }
    ctx->pc = 0x215ED0u;
    // 0x215ed0: 0x323100cc  andi        $s1, $s1, 0xCC
    ctx->pc = 0x215ed0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)204);
label_215ed4:
    // 0x215ed4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x215ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_215ed8:
    // 0x215ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215edc: 0xc083eb8  jal         func_20FAE0
    ctx->pc = 0x215EDCu;
    SET_GPR_U32(ctx, 31, 0x215EE4u);
    ctx->pc = 0x215EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215EDCu;
    // 0x215ee0: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FAE0u, 0x215EDCu, 0x215EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215EE4u;
label_215ee4:
    // 0x215ee4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x215ee4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ee8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x215EE8u;
    {
        const bool branch_taken_0x215ee8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x215EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215EE8u;
        // 0x215eec: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ee8) {
            ctx->pc = 0x215EF8u;
            goto label_215ef8;
        }
    }
    ctx->pc = 0x215EF0u;
    // 0x215ef0: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x215EF0u;
    {
        const bool branch_taken_0x215ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215EF0u;
        // 0x215ef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ef0) {
            ctx->pc = 0x2160BCu;
            goto label_2160bc;
        }
    }
    ctx->pc = 0x215EF8u;
label_215ef8:
    // 0x215ef8: 0x50600071  beql        $v1, $zero, . + 4 + (0x71 << 2)
    ctx->pc = 0x215EF8u;
    {
        const bool branch_taken_0x215ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x215ef8) {
            ctx->pc = 0x215EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215EF8u;
            // 0x215efc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2160C0u;
            goto label_2160c0;
        }
    }
    ctx->pc = 0x215F00u;
    // 0x215f00: 0x322200c8  andi        $v0, $s1, 0xC8
    ctx->pc = 0x215f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)200);
    // 0x215f04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215F04u;
    {
        const bool branch_taken_0x215f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F04u;
        // 0x215f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f04) {
            ctx->pc = 0x215F14u;
            goto label_215f14;
        }
    }
    ctx->pc = 0x215F0Cu;
    // 0x215f0c: 0xc0867e6  jal         func_219F98
    ctx->pc = 0x215F0Cu;
    SET_GPR_U32(ctx, 31, 0x215F14u);
    ctx->pc = 0x215F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F0Cu;
    // 0x215f10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F98u, 0x215F0Cu, 0x215F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F14u;
label_215f14:
    // 0x215f14: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x215f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x215f18: 0x16220015  bne         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x215F18u;
    {
        const bool branch_taken_0x215f18 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x215f18) {
            ctx->pc = 0x215F70u;
            goto label_215f70;
        }
    }
    ctx->pc = 0x215F20u;
    // 0x215f20: 0xc08584e  jal         func_216138
    ctx->pc = 0x215F20u;
    SET_GPR_U32(ctx, 31, 0x215F28u);
    ctx->pc = 0x215F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F20u;
    // 0x215f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216138u, 0x215F20u, 0x215F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F28u;
label_215f28:
    // 0x215f28: 0xc084144  jal         func_210510
    ctx->pc = 0x215F28u;
    SET_GPR_U32(ctx, 31, 0x215F30u);
    ctx->pc = 0x215F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F28u;
    // 0x215f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210510u, 0x215F28u, 0x215F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F30u;
label_215f30:
    // 0x215f30: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x215F30u;
    {
        const bool branch_taken_0x215f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F30u;
        // 0x215f34: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f30) {
            ctx->pc = 0x215F50u;
            goto label_215f50;
        }
    }
    ctx->pc = 0x215F38u;
    // 0x215f38: 0xc08587c  jal         func_2161F0
    ctx->pc = 0x215F38u;
    SET_GPR_U32(ctx, 31, 0x215F40u);
    ctx->pc = 0x215F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F38u;
    // 0x215f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2161F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2161F0u, 0x215F38u, 0x215F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F40u;
label_215f40:
    // 0x215f40: 0x5440005e  bnel        $v0, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x215F40u;
    {
        const bool branch_taken_0x215f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215f40) {
            ctx->pc = 0x215F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215F40u;
            // 0x215f44: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2160BCu;
            goto label_2160bc;
        }
    }
    ctx->pc = 0x215F48u;
    // 0x215f48: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x215F48u;
    {
        const bool branch_taken_0x215f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F48u;
        // 0x215f4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f48) {
            ctx->pc = 0x2160B4u;
            goto label_2160b4;
        }
    }
    ctx->pc = 0x215F50u;
label_215f50:
    // 0x215f50: 0xc08415e  jal         func_210578
    ctx->pc = 0x215F50u;
    SET_GPR_U32(ctx, 31, 0x215F58u);
    ctx->pc = 0x215F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F50u;
    // 0x215f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210578u, 0x215F50u, 0x215F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F58u;
label_215f58:
    // 0x215f58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215F58u;
    {
        const bool branch_taken_0x215f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F58u;
        // 0x215f5c: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f58) {
            ctx->pc = 0x215F70u;
            goto label_215f70;
        }
    }
    ctx->pc = 0x215F60u;
    // 0x215f60: 0xc085906  jal         func_216418
    ctx->pc = 0x215F60u;
    SET_GPR_U32(ctx, 31, 0x215F68u);
    ctx->pc = 0x215F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F60u;
    // 0x215f64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216418u, 0x215F60u, 0x215F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F68u;
label_215f68:
    // 0x215f68: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x215F68u;
    {
        const bool branch_taken_0x215f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F68u;
        // 0x215f6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f68) {
            ctx->pc = 0x2160B4u;
            goto label_2160b4;
        }
    }
    ctx->pc = 0x215F70u;
label_215f70:
    // 0x215f70: 0x16e00011  bnez        $s7, . + 4 + (0x11 << 2)
    ctx->pc = 0x215F70u;
    {
        const bool branch_taken_0x215f70 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x215F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F70u;
        // 0x215f74: 0x3222004c  andi        $v0, $s1, 0x4C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)76);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f70) {
            ctx->pc = 0x215FB8u;
            goto label_215fb8;
        }
    }
    ctx->pc = 0x215F78u;
    // 0x215f78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215f7c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x215f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215f80: 0xc085948  jal         func_216520
    ctx->pc = 0x215F80u;
    SET_GPR_U32(ctx, 31, 0x215F88u);
    ctx->pc = 0x215F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F80u;
    // 0x215f84: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216520u, 0x215F80u, 0x215F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F88u;
label_215f88:
    // 0x215f88: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x215F88u;
    {
        const bool branch_taken_0x215f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215f88) {
            ctx->pc = 0x215F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215F88u;
            // 0x215f8c: 0x2ac20005  slti        $v0, $s6, 0x5 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)5) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x215FA0u;
            goto label_215fa0;
        }
    }
    ctx->pc = 0x215F90u;
    // 0x215f90: 0xc0867de  jal         func_219F78
    ctx->pc = 0x215F90u;
    SET_GPR_U32(ctx, 31, 0x215F98u);
    ctx->pc = 0x215F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F90u;
    // 0x215f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F78u, 0x215F90u, 0x215F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F98u;
label_215f98:
    // 0x215f98: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x215F98u;
    {
        const bool branch_taken_0x215f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F98u;
        // 0x215f9c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f98) {
            ctx->pc = 0x2160BCu;
            goto label_2160bc;
        }
    }
    ctx->pc = 0x215FA0u;
label_215fa0:
    // 0x215fa0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215FA0u;
    {
        const bool branch_taken_0x215fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215FA0u;
        // 0x215fa4: 0x3222004c  andi        $v0, $s1, 0x4C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)76);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215fa0) {
            ctx->pc = 0x215FB8u;
            goto label_215fb8;
        }
    }
    ctx->pc = 0x215FA8u;
    // 0x215fa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215fac: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x215FACu;
    {
        const bool branch_taken_0x215fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215FACu;
        // 0x215fb0: 0xae820028  sw          $v0, 0x28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215fac) {
            ctx->pc = 0x2160B8u;
            goto label_2160b8;
        }
    }
    ctx->pc = 0x215FB4u;
    // 0x215fb4: 0x0  nop
    ctx->pc = 0x215fb4u;
    // NOP
label_215fb8:
    // 0x215fb8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x215FB8u;
    {
        const bool branch_taken_0x215fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215FB8u;
        // 0x215fbc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215fb8) {
            ctx->pc = 0x216038u;
            goto label_216038;
        }
    }
    ctx->pc = 0x215FC0u;
    // 0x215fc0: 0xc08583a  jal         func_2160E8
    ctx->pc = 0x215FC0u;
    SET_GPR_U32(ctx, 31, 0x215FC8u);
    ctx->pc = 0x215FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215FC0u;
    // 0x215fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2160E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2160E8u, 0x215FC0u, 0x215FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215FC8u;
label_215fc8:
    // 0x215fc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215fcc: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x215fccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215fd0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x215fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215fd4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x215fd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215fd8: 0xc085986  jal         func_216618
    ctx->pc = 0x215FD8u;
    SET_GPR_U32(ctx, 31, 0x215FE0u);
    ctx->pc = 0x215FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215FD8u;
    // 0x215fdc: 0x27a80014  addiu       $t0, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216618u, 0x215FD8u, 0x215FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215FE0u;
label_215fe0:
    // 0x215fe0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x215fe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215fe4: 0x56400036  bnel        $s2, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x215FE4u;
    {
        const bool branch_taken_0x215fe4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x215fe4) {
            ctx->pc = 0x215FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215FE4u;
            // 0x215fe8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2160C0u;
            goto label_2160c0;
        }
    }
    ctx->pc = 0x215FECu;
    // 0x215fec: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x215fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x215ff0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x215FF0u;
    {
        const bool branch_taken_0x215ff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x215FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215FF0u;
        // 0x215ff4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ff0) {
            ctx->pc = 0x216018u;
            goto label_216018;
        }
    }
    ctx->pc = 0x215FF8u;
    // 0x215ff8: 0x8e620078  lw          $v0, 0x78($s3)
    ctx->pc = 0x215ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x215ffc: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x215ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x216000: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x216000u;
    {
        const bool branch_taken_0x216000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216000u;
        // 0x216004: 0x240200cc  addiu       $v0, $zero, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216000) {
            ctx->pc = 0x21600Cu;
            goto label_21600c;
        }
    }
    ctx->pc = 0x216008u;
    // 0x216008: 0xae620078  sw          $v0, 0x78($s3)
    ctx->pc = 0x216008u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 2));
label_21600c:
    // 0x21600c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21600cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216010: 0xae620170  sw          $v0, 0x170($s3)
    ctx->pc = 0x216010u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 368), GPR_U32(ctx, 2));
    // 0x216014: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x216014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_216018:
    // 0x216018: 0x16220026  bne         $s1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x216018u;
    {
        const bool branch_taken_0x216018 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x21601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216018u;
        // 0x21601c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216018) {
            ctx->pc = 0x2160B4u;
            goto label_2160b4;
        }
    }
    ctx->pc = 0x216020u;
    // 0x216020: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x216020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x216024: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x216024u;
    {
        const bool branch_taken_0x216024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x216028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216024u;
        // 0x216028: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216024) {
            ctx->pc = 0x2160B4u;
            goto label_2160b4;
        }
    }
    ctx->pc = 0x21602Cu;
    // 0x21602c: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x21602cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x216030: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x216030u;
    {
        const bool branch_taken_0x216030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216030u;
        // 0x216034: 0xae620078  sw          $v0, 0x78($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216030) {
            ctx->pc = 0x2160B0u;
            goto label_2160b0;
        }
    }
    ctx->pc = 0x216038u;
label_216038:
    // 0x216038: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x216038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x21603c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21603Cu;
    {
        const bool branch_taken_0x21603c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21603Cu;
        // 0x216040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21603c) {
            ctx->pc = 0x216090u;
            goto label_216090;
        }
    }
    ctx->pc = 0x216044u;
    // 0x216044: 0xc08583a  jal         func_2160E8
    ctx->pc = 0x216044u;
    SET_GPR_U32(ctx, 31, 0x21604Cu);
    ctx->pc = 0x216048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216044u;
    // 0x216048: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2160E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2160E8u, 0x216044u, 0x21604Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21604Cu;
label_21604c:
    // 0x21604c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21604cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216050: 0xc085eee  jal         func_217BB8
    ctx->pc = 0x216050u;
    SET_GPR_U32(ctx, 31, 0x216058u);
    ctx->pc = 0x216054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216050u;
    // 0x216054: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217BB8u, 0x216050u, 0x216058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216058u;
label_216058:
    // 0x216058: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x216058u;
    {
        const bool branch_taken_0x216058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216058u;
        // 0x21605c: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216058) {
            ctx->pc = 0x216080u;
            goto label_216080;
        }
    }
    ctx->pc = 0x216060u;
    // 0x216060: 0xc08604a  jal         func_218128
    ctx->pc = 0x216060u;
    SET_GPR_U32(ctx, 31, 0x216068u);
    ctx->pc = 0x216064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216060u;
    // 0x216064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218128u, 0x216060u, 0x216068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216068u;
label_216068:
    // 0x216068: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x216068u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21606c: 0x56400013  bnel        $s2, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x21606Cu;
    {
        const bool branch_taken_0x21606c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x21606c) {
            ctx->pc = 0x216070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21606Cu;
            // 0x216070: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2160BCu;
            goto label_2160bc;
        }
    }
    ctx->pc = 0x216074u;
    // 0x216074: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x216074u;
    {
        const bool branch_taken_0x216074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216074u;
        // 0x216078: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216074) {
            ctx->pc = 0x2160B4u;
            goto label_2160b4;
        }
    }
    ctx->pc = 0x21607Cu;
    // 0x21607c: 0x0  nop
    ctx->pc = 0x21607cu;
    // NOP
label_216080:
    // 0x216080: 0xc0860a4  jal         func_218290
    ctx->pc = 0x216080u;
    SET_GPR_U32(ctx, 31, 0x216088u);
    ctx->pc = 0x216084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216080u;
    // 0x216084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218290u, 0x216080u, 0x216088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216088u;
label_216088:
    // 0x216088: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x216088u;
    {
        const bool branch_taken_0x216088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216088u;
        // 0x21608c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216088) {
            ctx->pc = 0x2160B8u;
            goto label_2160b8;
        }
    }
    ctx->pc = 0x216090u;
label_216090:
    // 0x216090: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x216090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x216094: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x216094u;
    {
        const bool branch_taken_0x216094 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x216098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216094u;
        // 0x216098: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216094) {
            ctx->pc = 0x2160B8u;
            goto label_2160b8;
        }
    }
    ctx->pc = 0x21609Cu;
    // 0x21609c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21609cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2160a0: 0xc086378  jal         func_218DE0
    ctx->pc = 0x2160A0u;
    SET_GPR_U32(ctx, 31, 0x2160A8u);
    ctx->pc = 0x2160A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2160A0u;
    // 0x2160a4: 0x240600cc  addiu       $a2, $zero, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218DE0u, 0x2160A0u, 0x2160A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2160A8u;
label_2160a8:
    // 0x2160a8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2160A8u;
    {
        const bool branch_taken_0x2160a8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2160ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2160A8u;
        // 0x2160ac: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2160a8) {
            ctx->pc = 0x2160BCu;
            goto label_2160bc;
        }
    }
    ctx->pc = 0x2160B0u;
label_2160b0:
    // 0x2160b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2160b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2160b4:
    // 0x2160b4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2160b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_2160b8:
    // 0x2160b8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2160b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2160bc:
    // 0x2160bc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2160bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2160c0:
    // 0x2160c0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2160c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2160c4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2160c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2160c8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2160c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2160cc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2160ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2160d0: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2160d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2160d4: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x2160d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2160d8: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x2160d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2160dc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2160dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2160e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2160E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2160E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2160E0u;
        // 0x2160e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2160E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2160E8u;
}
