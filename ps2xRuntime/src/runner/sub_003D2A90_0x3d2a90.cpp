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

// Function: sub_003D2A90
// Address: 0x3d2a90 - 0x3d2ef4
void sub_003D2A90_0x3d2a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2A90_0x3d2a90");
#endif

    switch (ctx->pc) {
        case 0x3d2b00u: goto label_3d2b00;
        case 0x3d2b38u: goto label_3d2b38;
        case 0x3d2b48u: goto label_3d2b48;
        case 0x3d2b9cu: goto label_3d2b9c;
        case 0x3d2bacu: goto label_3d2bac;
        case 0x3d2bbcu: goto label_3d2bbc;
        case 0x3d2c18u: goto label_3d2c18;
        case 0x3d2c40u: goto label_3d2c40;
        case 0x3d2c64u: goto label_3d2c64;
        case 0x3d2d20u: goto label_3d2d20;
        case 0x3d2d38u: goto label_3d2d38;
        case 0x3d2d50u: goto label_3d2d50;
        case 0x3d2d88u: goto label_3d2d88;
        case 0x3d2db8u: goto label_3d2db8;
        case 0x3d2dc8u: goto label_3d2dc8;
        case 0x3d2e34u: goto label_3d2e34;
        case 0x3d2ee0u: goto label_3d2ee0;
        default: break;
    }

    ctx->pc = 0x3d2a90u;

    // 0x3d2a90: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3d2a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3d2a94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d2a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3d2a98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d2a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3d2a9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3d2a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3d2aa0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d2aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3d2aa4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d2aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2aa8: 0x90850521  lbu         $a1, 0x521($a0)
    ctx->pc = 0x3d2aa8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3d2aac: 0x10a300be  beq         $a1, $v1, . + 4 + (0xBE << 2)
    ctx->pc = 0x3D2AACu;
    {
        const bool branch_taken_0x3d2aac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D2AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2AACu;
        // 0x3d2ab0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2aac) {
            ctx->pc = 0x3D2DA8u;
            goto label_3d2da8;
        }
    }
    ctx->pc = 0x3D2AB4u;
    // 0x3d2ab4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d2ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d2ab8: 0x10a3009b  beq         $a1, $v1, . + 4 + (0x9B << 2)
    ctx->pc = 0x3D2AB8u;
    {
        const bool branch_taken_0x3d2ab8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D2ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2AB8u;
        // 0x3d2abc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2ab8) {
            ctx->pc = 0x3D2D28u;
            goto label_3d2d28;
        }
    }
    ctx->pc = 0x3D2AC0u;
    // 0x3d2ac0: 0x10a3002d  beq         $a1, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3D2AC0u;
    {
        const bool branch_taken_0x3d2ac0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d2ac0) {
            ctx->pc = 0x3D2B78u;
            goto label_3d2b78;
        }
    }
    ctx->pc = 0x3D2AC8u;
    // 0x3d2ac8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d2ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d2acc: 0x10a30022  beq         $a1, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3D2ACCu;
    {
        const bool branch_taken_0x3d2acc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d2acc) {
            ctx->pc = 0x3D2B58u;
            goto label_3d2b58;
        }
    }
    ctx->pc = 0x3D2AD4u;
    // 0x3d2ad4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D2AD4u;
    {
        const bool branch_taken_0x3d2ad4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2ad4) {
            ctx->pc = 0x3D2AE8u;
            goto label_3d2ae8;
        }
    }
    ctx->pc = 0x3D2ADCu;
    // 0x3d2adc: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x3D2ADCu;
    {
        const bool branch_taken_0x3d2adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2adc) {
            ctx->pc = 0x3D2EE0u;
            goto label_3d2ee0;
        }
    }
    ctx->pc = 0x3D2AE4u;
    // 0x3d2ae4: 0x0  nop
    ctx->pc = 0x3d2ae4u;
    // NOP
label_3d2ae8:
    // 0x3d2ae8: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3D2AE8u;
    {
        const bool branch_taken_0x3d2ae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2ae8) {
            ctx->pc = 0x3D2B40u;
            goto label_3d2b40;
        }
    }
    ctx->pc = 0x3D2AF0u;
    // 0x3d2af0: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3d2af0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3d2af4: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3d2af4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3d2af8: 0xc0aac58  jal         func_2AB160
    ctx->pc = 0x3D2AF8u;
    SET_GPR_U32(ctx, 31, 0x3D2B00u);
    ctx->pc = 0x3D2AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2AF8u;
    // 0x3d2afc: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB160u, 0x3D2AF8u, 0x3D2B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2B00u;
label_3d2b00:
    // 0x3d2b00: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x3d2b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
    // 0x3d2b04: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3d2b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3d2b08: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3d2b08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3d2b0c: 0x3c021f00  lui         $v0, 0x1F00
    ctx->pc = 0x3d2b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7936 << 16));
    // 0x3d2b10: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3d2b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3d2b14: 0x34454a02  ori         $a1, $v0, 0x4A02
    ctx->pc = 0x3d2b14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18946);
    // 0x3d2b18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d2b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2b1c: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3d2b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3d2b20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d2b20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2b24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3d2b24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2b28: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3d2b28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2b2c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3d2b2cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2b30: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3D2B30u;
    SET_GPR_U32(ctx, 31, 0x3D2B38u);
    ctx->pc = 0x3D2B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2B30u;
    // 0x3d2b34: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3D2B30u, 0x3D2B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2B38u;
label_3d2b38:
    // 0x3d2b38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D2B38u;
    {
        const bool branch_taken_0x3d2b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2b38) {
            ctx->pc = 0x3D2B48u;
            goto label_3d2b48;
        }
    }
    ctx->pc = 0x3D2B40u;
label_3d2b40:
    // 0x3d2b40: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D2B40u;
    SET_GPR_U32(ctx, 31, 0x3D2B48u);
    ctx->pc = 0x3D2B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2B40u;
    // 0x3d2b44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D2B40u, 0x3D2B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2B48u;
label_3d2b48:
    // 0x3d2b48: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3d2b48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3d2b4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d2b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d2b50: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x3D2B50u;
    {
        const bool branch_taken_0x3d2b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2B50u;
        // 0x3d2b54: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2b50) {
            ctx->pc = 0x3D2EE0u;
            goto label_3d2ee0;
        }
    }
    ctx->pc = 0x3D2B58u;
label_3d2b58:
    // 0x3d2b58: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x3d2b58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x3d2b5c: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3d2b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d2b60: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3d2b60u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d2b64: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3d2b64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d2b68: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3d2b68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d2b6c: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3d2b6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3d2b70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d2b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d2b74: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3d2b74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3d2b78:
    // 0x3d2b78: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3d2b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3d2b7c: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x3d2b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3d2b80: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3d2b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3d2b84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d2b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3d2b88: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x3d2b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3d2b8c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3d2b8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3d2b90: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3d2b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3d2b94: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x3D2B94u;
    SET_GPR_U32(ctx, 31, 0x3D2B9Cu);
    ctx->pc = 0x3D2B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2B94u;
    // 0x3d2b98: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x3D2B94u, 0x3D2B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2B9Cu;
label_3d2b9c:
    // 0x3d2b9c: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x3d2b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x3d2ba0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d2ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2ba4: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3D2BA4u;
    SET_GPR_U32(ctx, 31, 0x3D2BACu);
    ctx->pc = 0x3D2BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2BA4u;
    // 0x3d2ba8: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3D2BA4u, 0x3D2BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2BACu;
label_3d2bac:
    // 0x3d2bac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D2BACu;
    {
        const bool branch_taken_0x3d2bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2BACu;
        // 0x3d2bb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2bac) {
            ctx->pc = 0x3D2BC0u;
            goto label_3d2bc0;
        }
    }
    ctx->pc = 0x3D2BB4u;
    // 0x3d2bb4: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D2BB4u;
    SET_GPR_U32(ctx, 31, 0x3D2BBCu);
    ctx->pc = 0x3D2BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2BB4u;
    // 0x3d2bb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D2BB4u, 0x3D2BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2BBCu;
label_3d2bbc:
    // 0x3d2bbc: 0x0  nop
    ctx->pc = 0x3d2bbcu;
    // NOP
label_3d2bc0:
    // 0x3d2bc0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3d2bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3d2bc4: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3d2bc4u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3d2bc8: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x3d2bc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3d2bcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d2bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2bd0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3d2bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3d2bd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d2bd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2bd8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3d2bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3d2bdc: 0x7fa90050  sq          $t1, 0x50($sp)
    ctx->pc = 0x3d2bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 9));
    // 0x3d2be0: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3d2be0u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3d2be4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3d2be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3d2be8: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x3d2be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
    // 0x3d2bec: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3d2becu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3d2bf0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3d2bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3d2bf4: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3d2bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x3d2bf8: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3d2bf8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3d2bfc: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3d2bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3d2c00: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3d2c00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3d2c04: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3d2c04u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3d2c08: 0x92260558  lbu         $a2, 0x558($s1)
    ctx->pc = 0x3d2c08u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1368)));
    // 0x3d2c0c: 0xc62c0554  lwc1        $f12, 0x554($s1)
    ctx->pc = 0x3d2c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3d2c10: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3D2C10u;
    SET_GPR_U32(ctx, 31, 0x3D2C18u);
    ctx->pc = 0x3D2C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2C10u;
    // 0x3d2c14: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3D2C10u, 0x3D2C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2C18u;
label_3d2c18:
    // 0x3d2c18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D2C18u;
    {
        const bool branch_taken_0x3d2c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2c18) {
            ctx->pc = 0x3D2C30u;
            goto label_3d2c30;
        }
    }
    ctx->pc = 0x3D2C20u;
    // 0x3d2c20: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3d2c20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3d2c24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d2c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d2c28: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x3D2C28u;
    {
        const bool branch_taken_0x3d2c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2C28u;
        // 0x3d2c2c: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2c28) {
            ctx->pc = 0x3D2EE0u;
            goto label_3d2ee0;
        }
    }
    ctx->pc = 0x3D2C30u;
label_3d2c30:
    // 0x3d2c30: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3d2c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3d2c34: 0x27a5009c  addiu       $a1, $sp, 0x9C
    ctx->pc = 0x3d2c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x3d2c38: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x3D2C38u;
    SET_GPR_U32(ctx, 31, 0x3D2C40u);
    ctx->pc = 0x3D2C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2C38u;
    // 0x3d2c3c: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x3D2C38u, 0x3D2C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2C40u;
label_3d2c40:
    // 0x3d2c40: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x3d2c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d2c44: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x3d2c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d2c48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3d2c48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d2c4c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x3D2C4Cu;
    {
        const bool branch_taken_0x3d2c4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d2c4c) {
            ctx->pc = 0x3D2C78u;
            goto label_3d2c78;
        }
    }
    ctx->pc = 0x3D2C54u;
    // 0x3d2c54: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x3d2c54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x3d2c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d2c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2c5c: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3D2C5Cu;
    SET_GPR_U32(ctx, 31, 0x3D2C64u);
    ctx->pc = 0x3D2C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2C5Cu;
    // 0x3d2c60: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3D2C5Cu, 0x3D2C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2C64u;
label_3d2c64:
    // 0x3d2c64: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3d2c64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3d2c68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d2c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d2c6c: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x3D2C6Cu;
    {
        const bool branch_taken_0x3d2c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2C6Cu;
        // 0x3d2c70: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2c6c) {
            ctx->pc = 0x3D2EE0u;
            goto label_3d2ee0;
        }
    }
    ctx->pc = 0x3D2C74u;
    // 0x3d2c74: 0x0  nop
    ctx->pc = 0x3d2c74u;
    // NOP
label_3d2c78:
    // 0x3d2c78: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3d2c78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3d2c7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D2C7Cu;
    {
        const bool branch_taken_0x3d2c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2C7Cu;
        // 0x3d2c80: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2c7c) {
            ctx->pc = 0x3D2C90u;
            goto label_3d2c90;
        }
    }
    ctx->pc = 0x3D2C84u;
    // 0x3d2c84: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3D2C84u;
    {
        const bool branch_taken_0x3d2c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2c84) {
            ctx->pc = 0x3D2D10u;
            goto label_3d2d10;
        }
    }
    ctx->pc = 0x3D2C8Cu;
    // 0x3d2c8c: 0x0  nop
    ctx->pc = 0x3d2c8cu;
    // NOP
label_3d2c90:
    // 0x3d2c90: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3d2c90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3d2c94: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3d2c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3d2c98: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d2c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d2c9c: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d2c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d2ca0: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3d2ca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3d2ca4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3D2CA4u;
    {
        const bool branch_taken_0x3d2ca4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d2ca4) {
            ctx->pc = 0x3D2CE0u;
            goto label_3d2ce0;
        }
    }
    ctx->pc = 0x3D2CACu;
    // 0x3d2cac: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3d2cacu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3d2cb0: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3d2cb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3d2cb4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D2CB4u;
    {
        const bool branch_taken_0x3d2cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2CB4u;
        // 0x3d2cb8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2cb4) {
            ctx->pc = 0x3D2D08u;
            goto label_3d2d08;
        }
    }
    ctx->pc = 0x3D2CBCu;
    // 0x3d2cbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d2cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d2cc0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3d2cc0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3d2cc4: 0x0  nop
    ctx->pc = 0x3d2cc4u;
    // NOP
    // 0x3d2cc8: 0x0  nop
    ctx->pc = 0x3d2cc8u;
    // NOP
    // 0x3d2ccc: 0x2010  mfhi        $a0
    ctx->pc = 0x3d2cccu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3d2cd0: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d2cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d2cd4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3D2CD4u;
    {
        const bool branch_taken_0x3d2cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2CD4u;
        // 0x3d2cd8: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2cd4) {
            ctx->pc = 0x3D2D08u;
            goto label_3d2d08;
        }
    }
    ctx->pc = 0x3D2CDCu;
    // 0x3d2cdc: 0x0  nop
    ctx->pc = 0x3d2cdcu;
    // NOP
label_3d2ce0:
    // 0x3d2ce0: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3d2ce0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3d2ce4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3d2ce4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3d2ce8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D2CE8u;
    {
        const bool branch_taken_0x3d2ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d2ce8) {
            ctx->pc = 0x3D2D08u;
            goto label_3d2d08;
        }
    }
    ctx->pc = 0x3D2CF0u;
    // 0x3d2cf0: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d2cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d2cf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d2cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d2cf8: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3d2cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d2cfc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D2CFCu;
    {
        const bool branch_taken_0x3d2cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2CFCu;
        // 0x3d2d00: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2cfc) {
            ctx->pc = 0x3D2D10u;
            goto label_3d2d10;
        }
    }
    ctx->pc = 0x3D2D04u;
    // 0x3d2d04: 0x0  nop
    ctx->pc = 0x3d2d04u;
    // NOP
label_3d2d08:
    // 0x3d2d08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d2d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d2d0c: 0x0  nop
    ctx->pc = 0x3d2d0cu;
    // NOP
label_3d2d10:
    // 0x3d2d10: 0x14600073  bnez        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x3D2D10u;
    {
        const bool branch_taken_0x3d2d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2D10u;
        // 0x3d2d14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2d10) {
            ctx->pc = 0x3D2EE0u;
            goto label_3d2ee0;
        }
    }
    ctx->pc = 0x3D2D18u;
    // 0x3d2d18: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D2D18u;
    SET_GPR_U32(ctx, 31, 0x3D2D20u);
    ctx->pc = 0x3D2D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2D18u;
    // 0x3d2d1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D2D18u, 0x3D2D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2D20u;
label_3d2d20:
    // 0x3d2d20: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x3D2D20u;
    {
        const bool branch_taken_0x3d2d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2d20) {
            ctx->pc = 0x3D2EE0u;
            goto label_3d2ee0;
        }
    }
    ctx->pc = 0x3D2D28u;
label_3d2d28:
    // 0x3d2d28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3d2d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d2d2c: 0xa2220558  sb          $v0, 0x558($s1)
    ctx->pc = 0x3d2d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1368), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d2d30: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3D2D30u;
    SET_GPR_U32(ctx, 31, 0x3D2D38u);
    ctx->pc = 0x3D2D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2D30u;
    // 0x3d2d34: 0x8e240550  lw          $a0, 0x550($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3D2D30u, 0x3D2D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2D38u;
label_3d2d38:
    // 0x3d2d38: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3D2D38u;
    {
        const bool branch_taken_0x3d2d38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2D38u;
        // 0x3d2d3c: 0xae200550  sw          $zero, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2d38) {
            ctx->pc = 0x3D2D88u;
            goto label_3d2d88;
        }
    }
    ctx->pc = 0x3D2D40u;
    // 0x3d2d40: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3d2d40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3d2d44: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3d2d44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3d2d48: 0xc0aac48  jal         func_2AB120
    ctx->pc = 0x3D2D48u;
    SET_GPR_U32(ctx, 31, 0x3D2D50u);
    ctx->pc = 0x3D2D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2D48u;
    // 0x3d2d4c: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB120u, 0x3D2D48u, 0x3D2D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2D50u;
label_3d2d50:
    // 0x3d2d50: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x3d2d50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
    // 0x3d2d54: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3d2d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3d2d58: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3d2d58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3d2d5c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3d2d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3d2d60: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3d2d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3d2d64: 0x34454a02  ori         $a1, $v0, 0x4A02
    ctx->pc = 0x3d2d64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18946);
    // 0x3d2d68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d2d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2d6c: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3d2d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3d2d70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d2d70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2d74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3d2d74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2d78: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3d2d78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2d7c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3d2d7cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2d80: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3D2D80u;
    SET_GPR_U32(ctx, 31, 0x3D2D88u);
    ctx->pc = 0x3D2D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2D80u;
    // 0x3d2d84: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3D2D80u, 0x3D2D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2D88u;
label_3d2d88:
    // 0x3d2d88: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x3d2d88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
    // 0x3d2d8c: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3d2d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d2d90: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3d2d90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d2d94: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3d2d94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d2d98: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3d2d98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d2d9c: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3d2d9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3d2da0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d2da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d2da4: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3d2da4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3d2da8:
    // 0x3d2da8: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x3d2da8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x3d2dac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d2dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2db0: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3D2DB0u;
    SET_GPR_U32(ctx, 31, 0x3D2DB8u);
    ctx->pc = 0x3D2DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2DB0u;
    // 0x3d2db4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3D2DB0u, 0x3D2DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2DB8u;
label_3d2db8:
    // 0x3d2db8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D2DB8u;
    {
        const bool branch_taken_0x3d2db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2DB8u;
        // 0x3d2dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2db8) {
            ctx->pc = 0x3D2DC8u;
            goto label_3d2dc8;
        }
    }
    ctx->pc = 0x3D2DC0u;
    // 0x3d2dc0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D2DC0u;
    SET_GPR_U32(ctx, 31, 0x3D2DC8u);
    ctx->pc = 0x3D2DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2DC0u;
    // 0x3d2dc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D2DC0u, 0x3D2DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2DC8u;
label_3d2dc8:
    // 0x3d2dc8: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3d2dc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3d2dcc: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3D2DCCu;
    {
        const bool branch_taken_0x3d2dcc = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3D2DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2DCCu;
        // 0x3d2dd0: 0x28610010  slti        $at, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2dcc) {
            ctx->pc = 0x3D2E38u;
            goto label_3d2e38;
        }
    }
    ctx->pc = 0x3D2DD4u;
    // 0x3d2dd4: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x3D2DD4u;
    {
        const bool branch_taken_0x3d2dd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2dd4) {
            ctx->pc = 0x3D2E38u;
            goto label_3d2e38;
        }
    }
    ctx->pc = 0x3D2DDCu;
    // 0x3d2ddc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3d2ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3d2de0: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x3d2de0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3d2de4: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3d2de4u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3d2de8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d2de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2dec: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3d2decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3d2df0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d2df0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2df4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3d2df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3d2df8: 0x7fa90050  sq          $t1, 0x50($sp)
    ctx->pc = 0x3d2df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 9));
    // 0x3d2dfc: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3d2dfcu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3d2e00: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3d2e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3d2e04: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x3d2e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
    // 0x3d2e08: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3d2e08u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3d2e0c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3d2e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3d2e10: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3d2e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x3d2e14: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3d2e14u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3d2e18: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3d2e18u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3d2e1c: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3d2e1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3d2e20: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3d2e20u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3d2e24: 0x92260558  lbu         $a2, 0x558($s1)
    ctx->pc = 0x3d2e24u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1368)));
    // 0x3d2e28: 0xc62c0554  lwc1        $f12, 0x554($s1)
    ctx->pc = 0x3d2e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3d2e2c: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3D2E2Cu;
    SET_GPR_U32(ctx, 31, 0x3D2E34u);
    ctx->pc = 0x3D2E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2E2Cu;
    // 0x3d2e30: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3D2E2Cu, 0x3D2E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2E34u;
label_3d2e34:
    // 0x3d2e34: 0x0  nop
    ctx->pc = 0x3d2e34u;
    // NOP
label_3d2e38:
    // 0x3d2e38: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3d2e38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3d2e3c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D2E3Cu;
    {
        const bool branch_taken_0x3d2e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2E3Cu;
        // 0x3d2e40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2e3c) {
            ctx->pc = 0x3D2E50u;
            goto label_3d2e50;
        }
    }
    ctx->pc = 0x3D2E44u;
    // 0x3d2e44: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3D2E44u;
    {
        const bool branch_taken_0x3d2e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2e44) {
            ctx->pc = 0x3D2ED0u;
            goto label_3d2ed0;
        }
    }
    ctx->pc = 0x3D2E4Cu;
    // 0x3d2e4c: 0x0  nop
    ctx->pc = 0x3d2e4cu;
    // NOP
label_3d2e50:
    // 0x3d2e50: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3d2e50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3d2e54: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3d2e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3d2e58: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d2e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d2e5c: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d2e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d2e60: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3d2e60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3d2e64: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3D2E64u;
    {
        const bool branch_taken_0x3d2e64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d2e64) {
            ctx->pc = 0x3D2EA0u;
            goto label_3d2ea0;
        }
    }
    ctx->pc = 0x3D2E6Cu;
    // 0x3d2e6c: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3d2e6cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3d2e70: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3d2e70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3d2e74: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D2E74u;
    {
        const bool branch_taken_0x3d2e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2E74u;
        // 0x3d2e78: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2e74) {
            ctx->pc = 0x3D2EC8u;
            goto label_3d2ec8;
        }
    }
    ctx->pc = 0x3D2E7Cu;
    // 0x3d2e7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d2e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d2e80: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3d2e80u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3d2e84: 0x0  nop
    ctx->pc = 0x3d2e84u;
    // NOP
    // 0x3d2e88: 0x0  nop
    ctx->pc = 0x3d2e88u;
    // NOP
    // 0x3d2e8c: 0x2010  mfhi        $a0
    ctx->pc = 0x3d2e8cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3d2e90: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d2e90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d2e94: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3D2E94u;
    {
        const bool branch_taken_0x3d2e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2E94u;
        // 0x3d2e98: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2e94) {
            ctx->pc = 0x3D2EC8u;
            goto label_3d2ec8;
        }
    }
    ctx->pc = 0x3D2E9Cu;
    // 0x3d2e9c: 0x0  nop
    ctx->pc = 0x3d2e9cu;
    // NOP
label_3d2ea0:
    // 0x3d2ea0: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3d2ea0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3d2ea4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3d2ea4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3d2ea8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D2EA8u;
    {
        const bool branch_taken_0x3d2ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d2ea8) {
            ctx->pc = 0x3D2EC8u;
            goto label_3d2ec8;
        }
    }
    ctx->pc = 0x3D2EB0u;
    // 0x3d2eb0: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3d2eb0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d2eb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d2eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d2eb8: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3d2eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d2ebc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D2EBCu;
    {
        const bool branch_taken_0x3d2ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2EBCu;
        // 0x3d2ec0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2ebc) {
            ctx->pc = 0x3D2ED0u;
            goto label_3d2ed0;
        }
    }
    ctx->pc = 0x3D2EC4u;
    // 0x3d2ec4: 0x0  nop
    ctx->pc = 0x3d2ec4u;
    // NOP
label_3d2ec8:
    // 0x3d2ec8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d2ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d2ecc: 0x0  nop
    ctx->pc = 0x3d2eccu;
    // NOP
label_3d2ed0:
    // 0x3d2ed0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D2ED0u;
    {
        const bool branch_taken_0x3d2ed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2ED0u;
        // 0x3d2ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2ed0) {
            ctx->pc = 0x3D2EE0u;
            goto label_3d2ee0;
        }
    }
    ctx->pc = 0x3D2ED8u;
    // 0x3d2ed8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D2ED8u;
    SET_GPR_U32(ctx, 31, 0x3D2EE0u);
    ctx->pc = 0x3D2EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2ED8u;
    // 0x3d2edc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D2ED8u, 0x3D2EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2EE0u;
label_3d2ee0:
    // 0x3d2ee0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d2ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d2ee4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3d2ee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d2ee8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d2ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d2eec: 0x3e00008  jr          $ra
    ctx->pc = 0x3D2EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D2EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2EECu;
        // 0x3d2ef0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D2EF4u;
}
