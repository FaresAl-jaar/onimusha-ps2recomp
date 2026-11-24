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

// Function: sub_00347DB0
// Address: 0x347db0 - 0x3481d0
void sub_00347DB0_0x347db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347DB0_0x347db0");
#endif

    switch (ctx->pc) {
        case 0x347dccu: goto label_347dcc;
        case 0x347dd8u: goto label_347dd8;
        case 0x347e10u: goto label_347e10;
        case 0x347e24u: goto label_347e24;
        case 0x347ec4u: goto label_347ec4;
        case 0x348138u: goto label_348138;
        case 0x348150u: goto label_348150;
        case 0x348168u: goto label_348168;
        case 0x3481c0u: goto label_3481c0;
        default: break;
    }

    ctx->pc = 0x347db0u;

    // 0x347db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x347db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x347db4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x347db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x347db8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x347db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x347dbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x347dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x347dc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x347dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347dc4: 0xc0a4fd4  jal         func_293F50
    ctx->pc = 0x347DC4u;
    SET_GPR_U32(ctx, 31, 0x347DCCu);
    ctx->pc = 0x347DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347DC4u;
    // 0x347dc8: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293F50u, 0x347DC4u, 0x347DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347DCCu;
label_347dcc:
    // 0x347dcc: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x347dccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x347dd0: 0xc09e6e4  jal         func_279B90
    ctx->pc = 0x347DD0u;
    SET_GPR_U32(ctx, 31, 0x347DD8u);
    ctx->pc = 0x347DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347DD0u;
    // 0x347dd4: 0x248499c0  addiu       $a0, $a0, -0x6640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279B90u, 0x347DD0u, 0x347DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347DD8u;
label_347dd8:
    // 0x347dd8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x347dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x347ddc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x347ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347de0: 0x244299c0  addiu       $v0, $v0, -0x6640
    ctx->pc = 0x347de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941120));
    // 0x347de4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x347de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347de8: 0xae0204b0  sw          $v0, 0x4B0($s0)
    ctx->pc = 0x347de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1200), GPR_U32(ctx, 2));
    // 0x347dec: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x347decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x347df0: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x347df0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x347df4: 0x34420046  ori         $v0, $v0, 0x46
    ctx->pc = 0x347df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)70);
    // 0x347df8: 0xa6020030  sh          $v0, 0x30($s0)
    ctx->pc = 0x347df8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x347dfc: 0xae0028d0  sw          $zero, 0x28D0($s0)
    ctx->pc = 0x347dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10448), GPR_U32(ctx, 0));
    // 0x347e00: 0xae0028d4  sw          $zero, 0x28D4($s0)
    ctx->pc = 0x347e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10452), GPR_U32(ctx, 0));
    // 0x347e04: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x347e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x347e08: 0xc060a74  jal         func_1829D0
    ctx->pc = 0x347E08u;
    SET_GPR_U32(ctx, 31, 0x347E10u);
    ctx->pc = 0x347E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347E08u;
    // 0x347e0c: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1829D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1829D0u, 0x347E08u, 0x347E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347E10u;
label_347e10:
    // 0x347e10: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x347e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x347e14: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x347e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x347e18: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x347e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x347e1c: 0xc060b00  jal         func_182C00
    ctx->pc = 0x347E1Cu;
    SET_GPR_U32(ctx, 31, 0x347E24u);
    ctx->pc = 0x347E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347E1Cu;
    // 0x347e20: 0x3446fe01  ori         $a2, $v0, 0xFE01 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65025);
    ctx->in_delay_slot = false;
    ctx->pc = 0x182C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182C00u, 0x347E1Cu, 0x347E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347E24u;
label_347e24:
    // 0x347e24: 0xae0029c0  sw          $zero, 0x29C0($s0)
    ctx->pc = 0x347e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10688), GPR_U32(ctx, 0));
    // 0x347e28: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x347e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x347e2c: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x347e2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x347e30: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x347E30u;
    {
        const bool branch_taken_0x347e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x347E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347E30u;
        // 0x347e34: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347e30) {
            ctx->pc = 0x347EA0u;
            goto label_347ea0;
        }
    }
    ctx->pc = 0x347E38u;
    // 0x347e38: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x347E38u;
    {
        const bool branch_taken_0x347e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x347e38) {
            ctx->pc = 0x347E90u;
            goto label_347e90;
        }
    }
    ctx->pc = 0x347E40u;
    // 0x347e40: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x347e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x347e44: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x347E44u;
    {
        const bool branch_taken_0x347e44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x347E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347E44u;
        // 0x347e48: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347e44) {
            ctx->pc = 0x347E80u;
            goto label_347e80;
        }
    }
    ctx->pc = 0x347E4Cu;
    // 0x347e4c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x347E4Cu;
    {
        const bool branch_taken_0x347e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x347e4c) {
            ctx->pc = 0x347E70u;
            goto label_347e70;
        }
    }
    ctx->pc = 0x347E54u;
    // 0x347e54: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x347e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x347e58: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x347E58u;
    {
        const bool branch_taken_0x347e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x347e58) {
            ctx->pc = 0x347E68u;
            goto label_347e68;
        }
    }
    ctx->pc = 0x347E60u;
    // 0x347e60: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x347E60u;
    {
        const bool branch_taken_0x347e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347e60) {
            ctx->pc = 0x347EB0u;
            goto label_347eb0;
        }
    }
    ctx->pc = 0x347E68u;
label_347e68:
    // 0x347e68: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x347E68u;
    {
        const bool branch_taken_0x347e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347E68u;
        // 0x347e6c: 0xa20029d0  sb          $zero, 0x29D0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 10704), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347e68) {
            ctx->pc = 0x347EC8u;
            goto label_347ec8;
        }
    }
    ctx->pc = 0x347E70u;
label_347e70:
    // 0x347e70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x347e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347e74: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x347E74u;
    {
        const bool branch_taken_0x347e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347E74u;
        // 0x347e78: 0xa20229d0  sb          $v0, 0x29D0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 10704), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347e74) {
            ctx->pc = 0x347EC8u;
            goto label_347ec8;
        }
    }
    ctx->pc = 0x347E7Cu;
    // 0x347e7c: 0x0  nop
    ctx->pc = 0x347e7cu;
    // NOP
label_347e80:
    // 0x347e80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x347e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x347e84: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x347E84u;
    {
        const bool branch_taken_0x347e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347E84u;
        // 0x347e88: 0xa20229d0  sb          $v0, 0x29D0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 10704), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347e84) {
            ctx->pc = 0x347EC8u;
            goto label_347ec8;
        }
    }
    ctx->pc = 0x347E8Cu;
    // 0x347e8c: 0x0  nop
    ctx->pc = 0x347e8cu;
    // NOP
label_347e90:
    // 0x347e90: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x347e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x347e94: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x347E94u;
    {
        const bool branch_taken_0x347e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347E94u;
        // 0x347e98: 0xa20229d0  sb          $v0, 0x29D0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 10704), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347e94) {
            ctx->pc = 0x347EC8u;
            goto label_347ec8;
        }
    }
    ctx->pc = 0x347E9Cu;
    // 0x347e9c: 0x0  nop
    ctx->pc = 0x347e9cu;
    // NOP
label_347ea0:
    // 0x347ea0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x347ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x347ea4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x347EA4u;
    {
        const bool branch_taken_0x347ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347EA4u;
        // 0x347ea8: 0xa20229d0  sb          $v0, 0x29D0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 10704), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347ea4) {
            ctx->pc = 0x347EC8u;
            goto label_347ec8;
        }
    }
    ctx->pc = 0x347EACu;
    // 0x347eac: 0x0  nop
    ctx->pc = 0x347eacu;
    // NOP
label_347eb0:
    // 0x347eb0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x347eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x347eb4: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x347eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x347eb8: 0xa20529d0  sb          $a1, 0x29D0($s0)
    ctx->pc = 0x347eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10704), (uint8_t)GPR_U32(ctx, 5));
    // 0x347ebc: 0xc0d241c  jal         func_349070
    ctx->pc = 0x347EBCu;
    SET_GPR_U32(ctx, 31, 0x347EC4u);
    ctx->pc = 0x347EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347EBCu;
    // 0x347ec0: 0x24844db0  addiu       $a0, $a0, 0x4DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349070u, 0x347EBCu, 0x347EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347EC4u;
label_347ec4:
    // 0x347ec4: 0x0  nop
    ctx->pc = 0x347ec4u;
    // NOP
label_347ec8:
    // 0x347ec8: 0x920429d0  lbu         $a0, 0x29D0($s0)
    ctx->pc = 0x347ec8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10704)));
    // 0x347ecc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x347eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x347ed0: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x347ED0u;
    {
        const bool branch_taken_0x347ed0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x347ed0) {
            ctx->pc = 0x347F00u;
            goto label_347f00;
        }
    }
    ctx->pc = 0x347ED8u;
    // 0x347ed8: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x347ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x347edc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x347edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x347ee0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x347ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x347ee4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x347ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x347ee8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x347ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x347eec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x347eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x347ef0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x347ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x347ef4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x347EF4u;
    {
        const bool branch_taken_0x347ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347EF4u;
        // 0x347ef8: 0xae0229c0  sw          $v0, 0x29C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 10688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347ef4) {
            ctx->pc = 0x347F10u;
            goto label_347f10;
        }
    }
    ctx->pc = 0x347EFCu;
    // 0x347efc: 0x0  nop
    ctx->pc = 0x347efcu;
    // NOP
label_347f00:
    // 0x347f00: 0x3c020091  lui         $v0, 0x91
    ctx->pc = 0x347f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)145 << 16));
    // 0x347f04: 0x24424db0  addiu       $v0, $v0, 0x4DB0
    ctx->pc = 0x347f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19888));
    // 0x347f08: 0xae0229c0  sw          $v0, 0x29C0($s0)
    ctx->pc = 0x347f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10688), GPR_U32(ctx, 2));
    // 0x347f0c: 0x0  nop
    ctx->pc = 0x347f0cu;
    // NOP
label_347f10:
    // 0x347f10: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x347f10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x347f14: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x347f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x347f18: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x347F18u;
    {
        const bool branch_taken_0x347f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x347f18) {
            ctx->pc = 0x347F30u;
            goto label_347f30;
        }
    }
    ctx->pc = 0x347F20u;
    // 0x347f20: 0x8e0200e0  lw          $v0, 0xE0($s0)
    ctx->pc = 0x347f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x347f24: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x347f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x347f28: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x347f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x347f2c: 0x0  nop
    ctx->pc = 0x347f2cu;
    // NOP
label_347f30:
    // 0x347f30: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x347f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x347f34: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x347f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x347f38: 0xae0206c0  sw          $v0, 0x6C0($s0)
    ctx->pc = 0x347f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 2));
    // 0x347f3c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x347f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x347f40: 0x94620068  lhu         $v0, 0x68($v1)
    ctx->pc = 0x347f40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x347f44: 0x2841001f  slti        $at, $v0, 0x1F
    ctx->pc = 0x347f44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x347f48: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x347F48u;
    {
        const bool branch_taken_0x347f48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x347f48) {
            ctx->pc = 0x347FA0u;
            goto label_347fa0;
        }
    }
    ctx->pc = 0x347F50u;
    // 0x347f50: 0x8c63007c  lw          $v1, 0x7C($v1)
    ctx->pc = 0x347f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x347f54: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x347f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x347f58: 0x8c623a24  lw          $v0, 0x3A24($v1)
    ctx->pc = 0x347f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14884)));
    // 0x347f5c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x347f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x347f60: 0xac623a24  sw          $v0, 0x3A24($v1)
    ctx->pc = 0x347f60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14884), GPR_U32(ctx, 2));
    // 0x347f64: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x347f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x347f68: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x347f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x347f6c: 0x8c623c14  lw          $v0, 0x3C14($v1)
    ctx->pc = 0x347f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15380)));
    // 0x347f70: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x347f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x347f74: 0xac623c14  sw          $v0, 0x3C14($v1)
    ctx->pc = 0x347f74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15380), GPR_U32(ctx, 2));
    // 0x347f78: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x347f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x347f7c: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x347f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x347f80: 0x8c623e04  lw          $v0, 0x3E04($v1)
    ctx->pc = 0x347f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15876)));
    // 0x347f84: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x347f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x347f88: 0xac623e04  sw          $v0, 0x3E04($v1)
    ctx->pc = 0x347f88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15876), GPR_U32(ctx, 2));
    // 0x347f8c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x347f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x347f90: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x347f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x347f94: 0x8c623ff4  lw          $v0, 0x3FF4($v1)
    ctx->pc = 0x347f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16372)));
    // 0x347f98: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x347f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x347f9c: 0xac623ff4  sw          $v0, 0x3FF4($v1)
    ctx->pc = 0x347f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16372), GPR_U32(ctx, 2));
label_347fa0:
    // 0x347fa0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x347fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x347fa4: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x347fa4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x347fa8: 0x24020e81  addiu       $v0, $zero, 0xE81
    ctx->pc = 0x347fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3713));
    // 0x347fac: 0x14620068  bne         $v1, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x347FACu;
    {
        const bool branch_taken_0x347fac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x347fac) {
            ctx->pc = 0x348150u;
            goto label_348150;
        }
    }
    ctx->pc = 0x347FB4u;
    // 0x347fb4: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x347fb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x347fb8: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x347fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x347fbc: 0x14620064  bne         $v1, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x347FBCu;
    {
        const bool branch_taken_0x347fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x347fbc) {
            ctx->pc = 0x348150u;
            goto label_348150;
        }
    }
    ctx->pc = 0x347FC4u;
    // 0x347fc4: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x347fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x347fc8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x347fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x347fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347fd0: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x347fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x347fd4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x347fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x347fd8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x347fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x347fdc: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x347fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x347fe0: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x347fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x347fe4: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x347fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x347fe8: 0x8ca301f4  lw          $v1, 0x1F4($a1)
    ctx->pc = 0x347fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 500)));
    // 0x347fec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x347fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x347ff0: 0xaca301f4  sw          $v1, 0x1F4($a1)
    ctx->pc = 0x347ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 500), GPR_U32(ctx, 3));
    // 0x347ff4: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x347ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x347ff8: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x347ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x347ffc: 0x8ca303e4  lw          $v1, 0x3E4($a1)
    ctx->pc = 0x347ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 996)));
    // 0x348000: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x348000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x348004: 0xaca303e4  sw          $v1, 0x3E4($a1)
    ctx->pc = 0x348004u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 996), GPR_U32(ctx, 3));
    // 0x348008: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x348008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x34800c: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x34800cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x348010: 0x8ca305d4  lw          $v1, 0x5D4($a1)
    ctx->pc = 0x348010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1492)));
    // 0x348014: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x348014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x348018: 0xaca305d4  sw          $v1, 0x5D4($a1)
    ctx->pc = 0x348018u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1492), GPR_U32(ctx, 3));
    // 0x34801c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x34801cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x348020: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x348020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x348024: 0x8ca307c4  lw          $v1, 0x7C4($a1)
    ctx->pc = 0x348024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1988)));
    // 0x348028: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x348028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x34802c: 0xaca307c4  sw          $v1, 0x7C4($a1)
    ctx->pc = 0x34802cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1988), GPR_U32(ctx, 3));
    // 0x348030: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x348030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x348034: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x348034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x348038: 0x8ca309b4  lw          $v1, 0x9B4($a1)
    ctx->pc = 0x348038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2484)));
    // 0x34803c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34803cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x348040: 0xaca309b4  sw          $v1, 0x9B4($a1)
    ctx->pc = 0x348040u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2484), GPR_U32(ctx, 3));
    // 0x348044: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x348044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x348048: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x348048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x34804c: 0x8ca30ba4  lw          $v1, 0xBA4($a1)
    ctx->pc = 0x34804cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2980)));
    // 0x348050: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x348050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x348054: 0xaca30ba4  sw          $v1, 0xBA4($a1)
    ctx->pc = 0x348054u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2980), GPR_U32(ctx, 3));
    // 0x348058: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x348058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x34805c: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x34805cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x348060: 0x8ca30d94  lw          $v1, 0xD94($a1)
    ctx->pc = 0x348060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3476)));
    // 0x348064: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x348064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x348068: 0xaca30d94  sw          $v1, 0xD94($a1)
    ctx->pc = 0x348068u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3476), GPR_U32(ctx, 3));
    // 0x34806c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x34806cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x348070: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x348070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x348074: 0x8ca30f84  lw          $v1, 0xF84($a1)
    ctx->pc = 0x348074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3972)));
    // 0x348078: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x348078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x34807c: 0xaca30f84  sw          $v1, 0xF84($a1)
    ctx->pc = 0x34807cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3972), GPR_U32(ctx, 3));
    // 0x348080: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x348080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x348084: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x348084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x348088: 0x8ca31174  lw          $v1, 0x1174($a1)
    ctx->pc = 0x348088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4468)));
    // 0x34808c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34808cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x348090: 0xaca31174  sw          $v1, 0x1174($a1)
    ctx->pc = 0x348090u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4468), GPR_U32(ctx, 3));
    // 0x348094: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x348094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x348098: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x348098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x34809c: 0x8ca31364  lw          $v1, 0x1364($a1)
    ctx->pc = 0x34809cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4964)));
    // 0x3480a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3480a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3480a4: 0xaca31364  sw          $v1, 0x1364($a1)
    ctx->pc = 0x3480a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4964), GPR_U32(ctx, 3));
    // 0x3480a8: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x3480a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3480ac: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x3480acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x3480b0: 0x8ca31554  lw          $v1, 0x1554($a1)
    ctx->pc = 0x3480b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5460)));
    // 0x3480b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3480b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3480b8: 0xaca31554  sw          $v1, 0x1554($a1)
    ctx->pc = 0x3480b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 5460), GPR_U32(ctx, 3));
    // 0x3480bc: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x3480bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3480c0: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x3480c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x3480c4: 0x8ca31744  lw          $v1, 0x1744($a1)
    ctx->pc = 0x3480c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5956)));
    // 0x3480c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3480c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3480cc: 0xaca31744  sw          $v1, 0x1744($a1)
    ctx->pc = 0x3480ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 5956), GPR_U32(ctx, 3));
    // 0x3480d0: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x3480d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3480d4: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x3480d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x3480d8: 0x8ca31934  lw          $v1, 0x1934($a1)
    ctx->pc = 0x3480d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6452)));
    // 0x3480dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3480dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3480e0: 0xaca31934  sw          $v1, 0x1934($a1)
    ctx->pc = 0x3480e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6452), GPR_U32(ctx, 3));
    // 0x3480e4: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x3480e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3480e8: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x3480e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x3480ec: 0x8ca31b24  lw          $v1, 0x1B24($a1)
    ctx->pc = 0x3480ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6948)));
    // 0x3480f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3480f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3480f4: 0xaca31b24  sw          $v1, 0x1B24($a1)
    ctx->pc = 0x3480f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6948), GPR_U32(ctx, 3));
    // 0x3480f8: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x3480f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3480fc: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x3480fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x348100: 0x8ca31d14  lw          $v1, 0x1D14($a1)
    ctx->pc = 0x348100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7444)));
    // 0x348104: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x348104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x348108: 0xaca31d14  sw          $v1, 0x1D14($a1)
    ctx->pc = 0x348108u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7444), GPR_U32(ctx, 3));
    // 0x34810c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x34810cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x348110: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x348110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x348114: 0x8ca31f04  lw          $v1, 0x1F04($a1)
    ctx->pc = 0x348114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7940)));
    // 0x348118: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x348118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x34811c: 0xaca31f04  sw          $v1, 0x1F04($a1)
    ctx->pc = 0x34811cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7940), GPR_U32(ctx, 3));
    // 0x348120: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x348120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x348124: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x348124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x348128: 0x8ca320f4  lw          $v1, 0x20F4($a1)
    ctx->pc = 0x348128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8436)));
    // 0x34812c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x34812cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x348130: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x348130u;
    SET_GPR_U32(ctx, 31, 0x348138u);
    ctx->pc = 0x348134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348130u;
    // 0x348134: 0xaca220f4  sw          $v0, 0x20F4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 8436), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x348130u, 0x348138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348138u;
label_348138:
    // 0x348138: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x348138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34813c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34813cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x348140: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x348140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348144: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x348144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x348148: 0xc0a93dc  jal         func_2A4F70
    ctx->pc = 0x348148u;
    SET_GPR_U32(ctx, 31, 0x348150u);
    ctx->pc = 0x34814Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348148u;
    // 0x34814c: 0x26080020  addiu       $t0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4F70u, 0x348148u, 0x348150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348150u;
label_348150:
    // 0x348150: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x348150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x348154: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x348154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x348158: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x348158u;
    {
        const bool branch_taken_0x348158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x348158) {
            ctx->pc = 0x3481B0u;
            goto label_3481b0;
        }
    }
    ctx->pc = 0x348160u;
    // 0x348160: 0xc0d8d1c  jal         func_363470
    ctx->pc = 0x348160u;
    SET_GPR_U32(ctx, 31, 0x348168u);
    ctx->pc = 0x363470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363470u, 0x348160u, 0x348168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348168u;
label_348168:
    // 0x348168: 0x3c010014  lui         $at, 0x14
    ctx->pc = 0x348168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20 << 16));
    // 0x34816c: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x34816cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x348170: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x348170u;
    {
        const bool branch_taken_0x348170 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x348170) {
            ctx->pc = 0x348198u;
            goto label_348198;
        }
    }
    ctx->pc = 0x348178u;
    // 0x348178: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x348178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x34817c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x34817cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x348180: 0x8c64007c  lw          $a0, 0x7C($v1)
    ctx->pc = 0x348180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x348184: 0x8c8322e4  lw          $v1, 0x22E4($a0)
    ctx->pc = 0x348184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8932)));
    // 0x348188: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x348188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x34818c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34818Cu;
    {
        const bool branch_taken_0x34818c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34818Cu;
        // 0x348190: 0xac8222e4  sw          $v0, 0x22E4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34818c) {
            ctx->pc = 0x3481B0u;
            goto label_3481b0;
        }
    }
    ctx->pc = 0x348194u;
    // 0x348194: 0x0  nop
    ctx->pc = 0x348194u;
    // NOP
label_348198:
    // 0x348198: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x348198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x34819c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x34819cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x3481a0: 0x8c64007c  lw          $a0, 0x7C($v1)
    ctx->pc = 0x3481a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x3481a4: 0x8c830ba4  lw          $v1, 0xBA4($a0)
    ctx->pc = 0x3481a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2980)));
    // 0x3481a8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3481a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3481ac: 0xac820ba4  sw          $v0, 0xBA4($a0)
    ctx->pc = 0x3481acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2980), GPR_U32(ctx, 2));
label_3481b0:
    // 0x3481b0: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x3481b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x3481b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3481b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3481b8: 0xc0a7394  jal         func_29CE50
    ctx->pc = 0x3481B8u;
    SET_GPR_U32(ctx, 31, 0x3481C0u);
    ctx->pc = 0x3481BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3481B8u;
    // 0x3481bc: 0x2484f610  addiu       $a0, $a0, -0x9F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE50u, 0x3481B8u, 0x3481C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3481C0u;
label_3481c0:
    // 0x3481c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3481c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3481c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3481c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3481c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3481C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3481CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3481C8u;
        // 0x3481cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3481C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3481D0u;
}
