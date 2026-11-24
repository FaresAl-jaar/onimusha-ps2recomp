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

// Function: sub_00323AA0
// Address: 0x323aa0 - 0x323d2c
void sub_00323AA0_0x323aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323AA0_0x323aa0");
#endif

    switch (ctx->pc) {
        case 0x323af8u: goto label_323af8;
        case 0x323b0cu: goto label_323b0c;
        case 0x323b20u: goto label_323b20;
        case 0x323b58u: goto label_323b58;
        case 0x323b68u: goto label_323b68;
        case 0x323bacu: goto label_323bac;
        case 0x323bc8u: goto label_323bc8;
        case 0x323be4u: goto label_323be4;
        case 0x323c00u: goto label_323c00;
        case 0x323c6cu: goto label_323c6c;
        case 0x323d18u: goto label_323d18;
        default: break;
    }

    ctx->pc = 0x323aa0u;

    // 0x323aa0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x323aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x323aa4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x323aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x323aa8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x323aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x323aac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x323aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x323ab0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x323ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x323ab4: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x323ab4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x323ab8: 0x10c30037  beq         $a2, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x323AB8u;
    {
        const bool branch_taken_0x323ab8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x323ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323AB8u;
        // 0x323abc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323ab8) {
            ctx->pc = 0x323B98u;
            goto label_323b98;
        }
    }
    ctx->pc = 0x323AC0u;
    // 0x323ac0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x323ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323ac4: 0x10c3002c  beq         $a2, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x323AC4u;
    {
        const bool branch_taken_0x323ac4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x323ac4) {
            ctx->pc = 0x323B78u;
            goto label_323b78;
        }
    }
    ctx->pc = 0x323ACCu;
    // 0x323acc: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x323ACCu;
    {
        const bool branch_taken_0x323acc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x323acc) {
            ctx->pc = 0x323AE0u;
            goto label_323ae0;
        }
    }
    ctx->pc = 0x323AD4u;
    // 0x323ad4: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x323AD4u;
    {
        const bool branch_taken_0x323ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323ad4) {
            ctx->pc = 0x323D18u;
            goto label_323d18;
        }
    }
    ctx->pc = 0x323ADCu;
    // 0x323adc: 0x0  nop
    ctx->pc = 0x323adcu;
    // NOP
label_323ae0:
    // 0x323ae0: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x323AE0u;
    {
        const bool branch_taken_0x323ae0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x323ae0) {
            ctx->pc = 0x323B60u;
            goto label_323b60;
        }
    }
    ctx->pc = 0x323AE8u;
    // 0x323ae8: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x323ae8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x323aec: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x323aecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x323af0: 0xc0a99f8  jal         func_2A67E0
    ctx->pc = 0x323AF0u;
    SET_GPR_U32(ctx, 31, 0x323AF8u);
    ctx->pc = 0x323AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323AF0u;
    // 0x323af4: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A67E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A67E0u, 0x323AF0u, 0x323AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323AF8u;
label_323af8:
    // 0x323af8: 0xae020550  sw          $v0, 0x550($s0)
    ctx->pc = 0x323af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
    // 0x323afc: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x323afcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x323b00: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x323b00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x323b04: 0xc0a9a24  jal         func_2A6890
    ctx->pc = 0x323B04u;
    SET_GPR_U32(ctx, 31, 0x323B0Cu);
    ctx->pc = 0x323B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323B04u;
    // 0x323b08: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6890u, 0x323B04u, 0x323B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323B0Cu;
label_323b0c:
    // 0x323b0c: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x323b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x323b10: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x323b10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x323b14: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x323b14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x323b18: 0xc0a9a64  jal         func_2A6990
    ctx->pc = 0x323B18u;
    SET_GPR_U32(ctx, 31, 0x323B20u);
    ctx->pc = 0x323B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323B18u;
    // 0x323b1c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6990u, 0x323B18u, 0x323B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323B20u;
label_323b20:
    // 0x323b20: 0xae020558  sw          $v0, 0x558($s0)
    ctx->pc = 0x323b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1368), GPR_U32(ctx, 2));
    // 0x323b24: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x323b24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x323b28: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x323b28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x323b2c: 0x3c022500  lui         $v0, 0x2500
    ctx->pc = 0x323b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9472 << 16));
    // 0x323b30: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x323b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x323b34: 0x34459202  ori         $a1, $v0, 0x9202
    ctx->pc = 0x323b34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37378);
    // 0x323b38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x323b38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323b3c: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x323b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x323b40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x323b40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323b44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x323b44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323b48: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x323b48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323b4c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x323b4cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323b50: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x323B50u;
    SET_GPR_U32(ctx, 31, 0x323B58u);
    ctx->pc = 0x323B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323B50u;
    // 0x323b54: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x323B50u, 0x323B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323B58u;
label_323b58:
    // 0x323b58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x323B58u;
    {
        const bool branch_taken_0x323b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323b58) {
            ctx->pc = 0x323B68u;
            goto label_323b68;
        }
    }
    ctx->pc = 0x323B60u;
label_323b60:
    // 0x323b60: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x323B60u;
    SET_GPR_U32(ctx, 31, 0x323B68u);
    ctx->pc = 0x323B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323B60u;
    // 0x323b64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x323B60u, 0x323B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323B68u;
label_323b68:
    // 0x323b68: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x323b68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x323b6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x323b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x323b70: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x323B70u;
    {
        const bool branch_taken_0x323b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B70u;
        // 0x323b74: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323b70) {
            ctx->pc = 0x323D18u;
            goto label_323d18;
        }
    }
    ctx->pc = 0x323B78u;
label_323b78:
    // 0x323b78: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x323b78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x323b7c: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x323b7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x323b80: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x323b80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x323b84: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x323b84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x323b88: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x323b88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x323b8c: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x323b8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x323b90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x323b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x323b94: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x323b94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_323b98:
    // 0x323b98: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x323b98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x323b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323ba0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x323ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x323ba4: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x323BA4u;
    SET_GPR_U32(ctx, 31, 0x323BACu);
    ctx->pc = 0x323BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323BA4u;
    // 0x323ba8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x323BA4u, 0x323BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323BACu;
label_323bac:
    // 0x323bac: 0x8e060554  lw          $a2, 0x554($s0)
    ctx->pc = 0x323bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1364)));
    // 0x323bb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x323bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x323bb4: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x323bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x323bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323bbc: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x323bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x323bc0: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x323BC0u;
    SET_GPR_U32(ctx, 31, 0x323BC8u);
    ctx->pc = 0x323BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323BC0u;
    // 0x323bc4: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x323BC0u, 0x323BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323BC8u;
label_323bc8:
    // 0x323bc8: 0x8e060558  lw          $a2, 0x558($s0)
    ctx->pc = 0x323bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x323bcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x323bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x323bd0: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x323bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x323bd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323bd8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x323bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x323bdc: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x323BDCu;
    SET_GPR_U32(ctx, 31, 0x323BE4u);
    ctx->pc = 0x323BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323BDCu;
    // 0x323be0: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x323BDCu, 0x323BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323BE4u;
label_323be4:
    // 0x323be4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x323be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x323be8: 0x2231825  or          $v1, $s1, $v1
    ctx->pc = 0x323be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x323bec: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x323becu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x323bf0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x323BF0u;
    {
        const bool branch_taken_0x323bf0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x323BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323BF0u;
        // 0x323bf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323bf0) {
            ctx->pc = 0x323C00u;
            goto label_323c00;
        }
    }
    ctx->pc = 0x323BF8u;
    // 0x323bf8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x323BF8u;
    SET_GPR_U32(ctx, 31, 0x323C00u);
    ctx->pc = 0x323BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323BF8u;
    // 0x323bfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x323BF8u, 0x323C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323C00u;
label_323c00:
    // 0x323c00: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x323c00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x323c04: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x323C04u;
    {
        const bool branch_taken_0x323c04 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x323C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323C04u;
        // 0x323c08: 0x28610029  slti        $at, $v1, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x323c04) {
            ctx->pc = 0x323C70u;
            goto label_323c70;
        }
    }
    ctx->pc = 0x323C0Cu;
    // 0x323c0c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x323C0Cu;
    {
        const bool branch_taken_0x323c0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x323c0c) {
            ctx->pc = 0x323C70u;
            goto label_323c70;
        }
    }
    ctx->pc = 0x323C14u;
    // 0x323c14: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x323c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x323c18: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x323c18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x323c1c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x323c1cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x323c20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323c24: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x323c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x323c28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x323c28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323c2c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x323c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x323c30: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x323c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
    // 0x323c34: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x323c34u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x323c38: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x323c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x323c3c: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x323c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
    // 0x323c40: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x323c40u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x323c44: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x323c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x323c48: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x323c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x323c4c: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x323c4cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x323c50: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x323c50u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x323c54: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x323c54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x323c58: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x323c58u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x323c5c: 0x92060560  lbu         $a2, 0x560($s0)
    ctx->pc = 0x323c5cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x323c60: 0xc60c055c  lwc1        $f12, 0x55C($s0)
    ctx->pc = 0x323c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x323c64: 0xc0c0900  jal         func_302400
    ctx->pc = 0x323C64u;
    SET_GPR_U32(ctx, 31, 0x323C6Cu);
    ctx->pc = 0x323C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323C64u;
    // 0x323c68: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x323C64u, 0x323C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323C6Cu;
label_323c6c:
    // 0x323c6c: 0x0  nop
    ctx->pc = 0x323c6cu;
    // NOP
label_323c70:
    // 0x323c70: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x323c70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x323c74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x323C74u;
    {
        const bool branch_taken_0x323c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x323C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323C74u;
        // 0x323c78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323c74) {
            ctx->pc = 0x323C88u;
            goto label_323c88;
        }
    }
    ctx->pc = 0x323C7Cu;
    // 0x323c7c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x323C7Cu;
    {
        const bool branch_taken_0x323c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323c7c) {
            ctx->pc = 0x323D08u;
            goto label_323d08;
        }
    }
    ctx->pc = 0x323C84u;
    // 0x323c84: 0x0  nop
    ctx->pc = 0x323c84u;
    // NOP
label_323c88:
    // 0x323c88: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x323c88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x323c8c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x323c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x323c90: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x323c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x323c94: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x323c94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x323c98: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x323c98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x323c9c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x323C9Cu;
    {
        const bool branch_taken_0x323c9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x323c9c) {
            ctx->pc = 0x323CD8u;
            goto label_323cd8;
        }
    }
    ctx->pc = 0x323CA4u;
    // 0x323ca4: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x323ca4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x323ca8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x323ca8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x323cac: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x323CACu;
    {
        const bool branch_taken_0x323cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x323CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323CACu;
        // 0x323cb0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323cac) {
            ctx->pc = 0x323D00u;
            goto label_323d00;
        }
    }
    ctx->pc = 0x323CB4u;
    // 0x323cb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x323cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323cb8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x323cb8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x323cbc: 0x0  nop
    ctx->pc = 0x323cbcu;
    // NOP
    // 0x323cc0: 0x0  nop
    ctx->pc = 0x323cc0u;
    // NOP
    // 0x323cc4: 0x2010  mfhi        $a0
    ctx->pc = 0x323cc4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x323cc8: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x323cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x323ccc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x323CCCu;
    {
        const bool branch_taken_0x323ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323CCCu;
        // 0x323cd0: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323ccc) {
            ctx->pc = 0x323D00u;
            goto label_323d00;
        }
    }
    ctx->pc = 0x323CD4u;
    // 0x323cd4: 0x0  nop
    ctx->pc = 0x323cd4u;
    // NOP
label_323cd8:
    // 0x323cd8: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x323cd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x323cdc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x323cdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x323ce0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x323CE0u;
    {
        const bool branch_taken_0x323ce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x323ce0) {
            ctx->pc = 0x323D00u;
            goto label_323d00;
        }
    }
    ctx->pc = 0x323CE8u;
    // 0x323ce8: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x323ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x323cec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x323cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323cf0: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x323cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x323cf4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x323CF4u;
    {
        const bool branch_taken_0x323cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323CF4u;
        // 0x323cf8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323cf4) {
            ctx->pc = 0x323D08u;
            goto label_323d08;
        }
    }
    ctx->pc = 0x323CFCu;
    // 0x323cfc: 0x0  nop
    ctx->pc = 0x323cfcu;
    // NOP
label_323d00:
    // 0x323d00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x323d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323d04: 0x0  nop
    ctx->pc = 0x323d04u;
    // NOP
label_323d08:
    // 0x323d08: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x323D08u;
    {
        const bool branch_taken_0x323d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x323D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D08u;
        // 0x323d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323d08) {
            ctx->pc = 0x323D18u;
            goto label_323d18;
        }
    }
    ctx->pc = 0x323D10u;
    // 0x323d10: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x323D10u;
    SET_GPR_U32(ctx, 31, 0x323D18u);
    ctx->pc = 0x323D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323D10u;
    // 0x323d14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x323D10u, 0x323D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323D18u;
label_323d18:
    // 0x323d18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x323d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x323d1c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x323d1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323d20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x323d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323d24: 0x3e00008  jr          $ra
    ctx->pc = 0x323D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D24u;
        // 0x323d28: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323D2Cu;
}
