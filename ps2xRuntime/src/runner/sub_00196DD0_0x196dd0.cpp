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

// Function: sub_00196DD0
// Address: 0x196dd0 - 0x1976a0
void sub_00196DD0_0x196dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196DD0_0x196dd0");
#endif

    switch (ctx->pc) {
        case 0x196eccu: goto label_196ecc;
        case 0x196ee8u: goto label_196ee8;
        case 0x196f84u: goto label_196f84;
        case 0x196f9cu: goto label_196f9c;
        case 0x197014u: goto label_197014;
        case 0x19706cu: goto label_19706c;
        case 0x1971acu: goto label_1971ac;
        case 0x1972d0u: goto label_1972d0;
        case 0x197308u: goto label_197308;
        case 0x19731cu: goto label_19731c;
        case 0x197348u: goto label_197348;
        case 0x197380u: goto label_197380;
        case 0x1973d4u: goto label_1973d4;
        case 0x1973ecu: goto label_1973ec;
        case 0x1973fcu: goto label_1973fc;
        case 0x197454u: goto label_197454;
        case 0x19747cu: goto label_19747c;
        case 0x19749cu: goto label_19749c;
        case 0x1974bcu: goto label_1974bc;
        case 0x197584u: goto label_197584;
        case 0x197688u: goto label_197688;
        default: break;
    }

    ctx->pc = 0x196dd0u;

label_196dd0:
    // 0x196dd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x196dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x196dd4: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x196dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x196dd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x196dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x196ddc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x196ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x196de0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x196de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x196de4: 0x90870001  lbu         $a3, 0x1($a0)
    ctx->pc = 0x196de4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x196de8: 0x8c22ea28  lw          $v0, -0x15D8($at)
    ctx->pc = 0x196de8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x196dec: 0x10e301fc  beq         $a3, $v1, . + 4 + (0x1FC << 2)
    ctx->pc = 0x196DECu;
    {
        const bool branch_taken_0x196dec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x196DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DECu;
        // 0x196df0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196dec) {
            ctx->pc = 0x1975E0u;
            goto label_1975e0;
        }
    }
    ctx->pc = 0x196DF4u;
    // 0x196df4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x196df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x196df8: 0x10e601b3  beq         $a3, $a2, . + 4 + (0x1B3 << 2)
    ctx->pc = 0x196DF8u;
    {
        const bool branch_taken_0x196df8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x196DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DF8u;
        // 0x196dfc: 0x24090005  addiu       $t1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196df8) {
            ctx->pc = 0x1974C8u;
            goto label_1974c8;
        }
    }
    ctx->pc = 0x196E00u;
    // 0x196e00: 0x10e90153  beq         $a3, $t1, . + 4 + (0x153 << 2)
    ctx->pc = 0x196E00u;
    {
        const bool branch_taken_0x196e00 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        ctx->pc = 0x196E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E00u;
        // 0x196e04: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196e00) {
            ctx->pc = 0x197350u;
            goto label_197350;
        }
    }
    ctx->pc = 0x196E08u;
    // 0x196e08: 0x10e500ff  beq         $a3, $a1, . + 4 + (0xFF << 2)
    ctx->pc = 0x196E08u;
    {
        const bool branch_taken_0x196e08 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x196E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E08u;
        // 0x196e0c: 0x240c0002  addiu       $t4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196e08) {
            ctx->pc = 0x197208u;
            goto label_197208;
        }
    }
    ctx->pc = 0x196E10u;
    // 0x196e10: 0x10ec0067  beq         $a3, $t4, . + 4 + (0x67 << 2)
    ctx->pc = 0x196E10u;
    {
        const bool branch_taken_0x196e10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 12));
        ctx->pc = 0x196E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E10u;
        // 0x196e14: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196e10) {
            ctx->pc = 0x196FB0u;
            goto label_196fb0;
        }
    }
    ctx->pc = 0x196E18u;
    // 0x196e18: 0x10e8005d  beq         $a3, $t0, . + 4 + (0x5D << 2)
    ctx->pc = 0x196E18u;
    {
        const bool branch_taken_0x196e18 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        if (branch_taken_0x196e18) {
            ctx->pc = 0x196F90u;
            goto label_196f90;
        }
    }
    ctx->pc = 0x196E20u;
    // 0x196e20: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x196E20u;
    {
        const bool branch_taken_0x196e20 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x196e20) {
            ctx->pc = 0x196E30u;
            goto label_196e30;
        }
    }
    ctx->pc = 0x196E28u;
    // 0x196e28: 0x10000215  b           . + 4 + (0x215 << 2)
    ctx->pc = 0x196E28u;
    {
        const bool branch_taken_0x196e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196e28) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x196E30u;
label_196e30:
    // 0x196e30: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x196e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x196e34: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x196e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x196e38: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x196e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x196e3c: 0x2463e620  addiu       $v1, $v1, -0x19E0
    ctx->pc = 0x196e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960672));
    // 0x196e40: 0x2442e621  addiu       $v0, $v0, -0x19DF
    ctx->pc = 0x196e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960673));
    // 0x196e44: 0xae0500a0  sw          $a1, 0xA0($s0)
    ctx->pc = 0x196e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 5));
    // 0x196e48: 0x92070005  lbu         $a3, 0x5($s0)
    ctx->pc = 0x196e48u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x196e4c: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x196e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x196e50: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x196e50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x196e54: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x196e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x196e58: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x196e58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x196e5c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x196e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x196e60: 0xae0500a0  sw          $a1, 0xA0($s0)
    ctx->pc = 0x196e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 5));
    // 0x196e64: 0xa2080001  sb          $t0, 0x1($s0)
    ctx->pc = 0x196e64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x196e68: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x196e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x196e6c: 0xa200004a  sb          $zero, 0x4A($s0)
    ctx->pc = 0x196e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 0));
    // 0x196e70: 0xa200004b  sb          $zero, 0x4B($s0)
    ctx->pc = 0x196e70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 75), (uint8_t)GPR_U32(ctx, 0));
    // 0x196e74: 0xa209004e  sb          $t1, 0x4E($s0)
    ctx->pc = 0x196e74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 9));
    // 0x196e78: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x196e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x196e7c: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x196e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x196e80: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x196e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x196e84: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x196e84u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x196e88: 0x30a50080  andi        $a1, $a1, 0x80
    ctx->pc = 0x196e88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x196e8c: 0xa2050049  sb          $a1, 0x49($s0)
    ctx->pc = 0x196e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 5));
    // 0x196e90: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x196e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x196e94: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x196e94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x196e98: 0x30a5007f  andi        $a1, $a1, 0x7F
    ctx->pc = 0x196e98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
    // 0x196e9c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x196e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x196ea0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x196ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x196ea4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x196ea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x196ea8: 0xa203004c  sb          $v1, 0x4C($s0)
    ctx->pc = 0x196ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 3));
    // 0x196eac: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x196eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x196eb0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x196eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x196eb4: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x196eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x196eb8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x196eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x196ebc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x196ec0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x196ec0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x196ec4: 0xc065da8  jal         func_1976A0
    ctx->pc = 0x196EC4u;
    SET_GPR_U32(ctx, 31, 0x196ECCu);
    ctx->pc = 0x196EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196EC4u;
    // 0x196ec8: 0xa202004d  sb          $v0, 0x4D($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1976A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1976A0u, 0x196EC4u, 0x196ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196ECCu;
label_196ecc:
    // 0x196ecc: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x196eccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x196ed0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x196ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ed4: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x196ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x196ed8: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x196ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x196edc: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x196edcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x196ee0: 0xa2020048  sb          $v0, 0x48($s0)
    ctx->pc = 0x196ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 2));
    // 0x196ee4: 0x0  nop
    ctx->pc = 0x196ee4u;
    // NOP
label_196ee8:
    // 0x196ee8: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x196ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x196eec: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x196eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x196ef0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x196ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x196ef4: 0x80420009  lb          $v0, 0x9($v0)
    ctx->pc = 0x196ef4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x196ef8: 0xa082004f  sb          $v0, 0x4F($a0)
    ctx->pc = 0x196ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x196efc: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x196efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x196f00: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x196f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x196f04: 0x8042000a  lb          $v0, 0xA($v0)
    ctx->pc = 0x196f04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x196f08: 0xa0820050  sb          $v0, 0x50($a0)
    ctx->pc = 0x196f08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 2));
    // 0x196f0c: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x196f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x196f10: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x196f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x196f14: 0x8042000b  lb          $v0, 0xB($v0)
    ctx->pc = 0x196f14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x196f18: 0xa0820051  sb          $v0, 0x51($a0)
    ctx->pc = 0x196f18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 81), (uint8_t)GPR_U32(ctx, 2));
    // 0x196f1c: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x196f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x196f20: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x196f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x196f24: 0x8042000c  lb          $v0, 0xC($v0)
    ctx->pc = 0x196f24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x196f28: 0xa0820052  sb          $v0, 0x52($a0)
    ctx->pc = 0x196f28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 82), (uint8_t)GPR_U32(ctx, 2));
    // 0x196f2c: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x196f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x196f30: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x196f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x196f34: 0x8043000d  lb          $v1, 0xD($v0)
    ctx->pc = 0x196f34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
    // 0x196f38: 0x24a50005  addiu       $a1, $a1, 0x5
    ctx->pc = 0x196f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x196f3c: 0x28a20019  slti        $v0, $a1, 0x19
    ctx->pc = 0x196f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x196f40: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x196F40u;
    {
        const bool branch_taken_0x196f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F40u;
        // 0x196f44: 0xa0830053  sb          $v1, 0x53($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 83), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196f40) {
            ctx->pc = 0x196EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196ee8;
        }
    }
    ctx->pc = 0x196F48u;
    // 0x196f48: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x196f48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x196f4c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x196F4Cu;
    {
        const bool branch_taken_0x196f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F4Cu;
        // 0x196f50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196f4c) {
            ctx->pc = 0x196F88u;
            goto label_196f88;
        }
    }
    ctx->pc = 0x196F54u;
    // 0x196f54: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x196f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x196f58: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x196f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x196f5c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x196f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x196f60: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x196f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x196f64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196f68: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x196f68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x196f6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x196f6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196f70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x196f70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196f74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x196f74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196f78: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x196f78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196f7c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x196F7Cu;
    SET_GPR_U32(ctx, 31, 0x196F84u);
    ctx->pc = 0x196F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196F7Cu;
    // 0x196f80: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x196F7Cu, 0x196F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196F84u;
label_196f84:
    // 0x196f84: 0x0  nop
    ctx->pc = 0x196f84u;
    // NOP
label_196f88:
    // 0x196f88: 0x100001bd  b           . + 4 + (0x1BD << 2)
    ctx->pc = 0x196F88u;
    {
        const bool branch_taken_0x196f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F88u;
        // 0x196f8c: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196f88) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x196F90u;
label_196f90:
    // 0x196f90: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x196f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x196f94: 0xc063d48  jal         func_18F520
    ctx->pc = 0x196F94u;
    SET_GPR_U32(ctx, 31, 0x196F9Cu);
    ctx->pc = 0x196F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196F94u;
    // 0x196f98: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x196F94u, 0x196F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196F9Cu;
label_196f9c:
    // 0x196f9c: 0x144001b8  bnez        $v0, . + 4 + (0x1B8 << 2)
    ctx->pc = 0x196F9Cu;
    {
        const bool branch_taken_0x196f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196f9c) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x196FA4u;
    // 0x196fa4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x196fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196fa8: 0x100001b5  b           . + 4 + (0x1B5 << 2)
    ctx->pc = 0x196FA8u;
    {
        const bool branch_taken_0x196fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196FA8u;
        // 0x196fac: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196fa8) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x196FB0u;
label_196fb0:
    // 0x196fb0: 0x30432000  andi        $v1, $v0, 0x2000
    ctx->pc = 0x196fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x196fb4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x196FB4u;
    {
        const bool branch_taken_0x196fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x196fb4) {
            ctx->pc = 0x197020u;
            goto label_197020;
        }
    }
    ctx->pc = 0x196FBCu;
    // 0x196fbc: 0xa2060001  sb          $a2, 0x1($s0)
    ctx->pc = 0x196fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x196fc0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x196fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x196fc4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x196fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x196fc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x196fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196fcc: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x196fccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x196fd0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x196fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x196fd4: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x196fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x196fd8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x196fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x196fdc: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x196fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x196fe0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196fe4: 0x34456424  ori         $a1, $v0, 0x6424
    ctx->pc = 0x196fe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25636);
    // 0x196fe8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x196fe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196fec: 0x82020048  lb          $v0, 0x48($s0)
    ctx->pc = 0x196fecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x196ff0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x196ff0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ff4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x196ff4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ff8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x196ff8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ffc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x196ffcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197000: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x197000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x197004: 0xa2020048  sb          $v0, 0x48($s0)
    ctx->pc = 0x197004u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 2));
    // 0x197008: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x197008u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x19700c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x19700Cu;
    SET_GPR_U32(ctx, 31, 0x197014u);
    ctx->pc = 0x197010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19700Cu;
    // 0x197010: 0xffac0000  sd          $t4, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x19700Cu, 0x197014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197014u;
label_197014:
    // 0x197014: 0x1000019a  b           . + 4 + (0x19A << 2)
    ctx->pc = 0x197014u;
    {
        const bool branch_taken_0x197014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197014) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x19701Cu;
    // 0x19701c: 0x0  nop
    ctx->pc = 0x19701cu;
    // NOP
label_197020:
    // 0x197020: 0x30434000  andi        $v1, $v0, 0x4000
    ctx->pc = 0x197020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x197024: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x197024u;
    {
        const bool branch_taken_0x197024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x197024) {
            ctx->pc = 0x197078u;
            goto label_197078;
        }
    }
    ctx->pc = 0x19702Cu;
    // 0x19702c: 0xa2050001  sb          $a1, 0x1($s0)
    ctx->pc = 0x19702cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x197030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197034: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x197034u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x197038: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x197038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19703c: 0xa600000c  sh          $zero, 0xC($s0)
    ctx->pc = 0x19703cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x197040: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x197040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x197044: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x197044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x197048: 0xffac0000  sd          $t4, 0x0($sp)
    ctx->pc = 0x197048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 12));
    // 0x19704c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x19704cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x197050: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x197050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197054: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x197054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197058: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x197058u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19705c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19705cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197060: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x197060u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197064: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x197064u;
    SET_GPR_U32(ctx, 31, 0x19706Cu);
    ctx->pc = 0x197068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197064u;
    // 0x197068: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x197064u, 0x19706Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19706Cu;
label_19706c:
    // 0x19706c: 0x10000184  b           . + 4 + (0x184 << 2)
    ctx->pc = 0x19706Cu;
    {
        const bool branch_taken_0x19706c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19706c) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x197074u;
    // 0x197074: 0x0  nop
    ctx->pc = 0x197074u;
    // NOP
label_197078:
    // 0x197078: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x197078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x19707c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x19707cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x197080: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x197080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x197084: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x197084u;
    {
        const bool branch_taken_0x197084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x197084) {
            ctx->pc = 0x1970B0u;
            goto label_1970b0;
        }
    }
    ctx->pc = 0x19708Cu;
    // 0x19708c: 0x8203004b  lb          $v1, 0x4B($s0)
    ctx->pc = 0x19708cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
    // 0x197090: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x197090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x197094: 0xa203004b  sb          $v1, 0x4B($s0)
    ctx->pc = 0x197094u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 75), (uint8_t)GPR_U32(ctx, 3));
    // 0x197098: 0x8203004b  lb          $v1, 0x4B($s0)
    ctx->pc = 0x197098u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
    // 0x19709c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19709Cu;
    {
        const bool branch_taken_0x19709c = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x19709c) {
            ctx->pc = 0x1970B0u;
            goto label_1970b0;
        }
    }
    ctx->pc = 0x1970A4u;
    // 0x1970a4: 0x8203004d  lb          $v1, 0x4D($s0)
    ctx->pc = 0x1970a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x1970a8: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1970a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1970ac: 0xa203004b  sb          $v1, 0x4B($s0)
    ctx->pc = 0x1970acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 75), (uint8_t)GPR_U32(ctx, 3));
label_1970b0:
    // 0x1970b0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1970b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1970b4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1970b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x1970b8: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x1970b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1970bc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1970BCu;
    {
        const bool branch_taken_0x1970bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1970bc) {
            ctx->pc = 0x1970F0u;
            goto label_1970f0;
        }
    }
    ctx->pc = 0x1970C4u;
    // 0x1970c4: 0x8203004b  lb          $v1, 0x4B($s0)
    ctx->pc = 0x1970c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
    // 0x1970c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1970c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1970cc: 0xa203004b  sb          $v1, 0x4B($s0)
    ctx->pc = 0x1970ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 75), (uint8_t)GPR_U32(ctx, 3));
    // 0x1970d0: 0x8203004d  lb          $v1, 0x4D($s0)
    ctx->pc = 0x1970d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x1970d4: 0x8204004b  lb          $a0, 0x4B($s0)
    ctx->pc = 0x1970d4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
    // 0x1970d8: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1970d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1970dc: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1970dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1970e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1970E0u;
    {
        const bool branch_taken_0x1970e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1970e0) {
            ctx->pc = 0x1970F0u;
            goto label_1970f0;
        }
    }
    ctx->pc = 0x1970E8u;
    // 0x1970e8: 0xa200004b  sb          $zero, 0x4B($s0)
    ctx->pc = 0x1970e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 75), (uint8_t)GPR_U32(ctx, 0));
    // 0x1970ec: 0x0  nop
    ctx->pc = 0x1970ecu;
    // NOP
label_1970f0:
    // 0x1970f0: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1970f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1970f4: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1970f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1970f8: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x1970f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1970fc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1970FCu;
    {
        const bool branch_taken_0x1970fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1970fc) {
            ctx->pc = 0x197128u;
            goto label_197128;
        }
    }
    ctx->pc = 0x197104u;
    // 0x197104: 0x8203004a  lb          $v1, 0x4A($s0)
    ctx->pc = 0x197104u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x197108: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x197108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19710c: 0xa203004a  sb          $v1, 0x4A($s0)
    ctx->pc = 0x19710cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 3));
    // 0x197110: 0x8203004a  lb          $v1, 0x4A($s0)
    ctx->pc = 0x197110u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x197114: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x197114u;
    {
        const bool branch_taken_0x197114 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x197114) {
            ctx->pc = 0x197128u;
            goto label_197128;
        }
    }
    ctx->pc = 0x19711Cu;
    // 0x19711c: 0x8203004c  lb          $v1, 0x4C($s0)
    ctx->pc = 0x19711cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x197120: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x197120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x197124: 0xa203004a  sb          $v1, 0x4A($s0)
    ctx->pc = 0x197124u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 3));
label_197128:
    // 0x197128: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x197128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x19712c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x19712cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x197130: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x197130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x197134: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x197134u;
    {
        const bool branch_taken_0x197134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x197134) {
            ctx->pc = 0x197168u;
            goto label_197168;
        }
    }
    ctx->pc = 0x19713Cu;
    // 0x19713c: 0x8203004a  lb          $v1, 0x4A($s0)
    ctx->pc = 0x19713cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x197140: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x197140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x197144: 0xa203004a  sb          $v1, 0x4A($s0)
    ctx->pc = 0x197144u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 3));
    // 0x197148: 0x8203004c  lb          $v1, 0x4C($s0)
    ctx->pc = 0x197148u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x19714c: 0x8204004a  lb          $a0, 0x4A($s0)
    ctx->pc = 0x19714cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x197150: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x197150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x197154: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x197154u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x197158: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x197158u;
    {
        const bool branch_taken_0x197158 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x197158) {
            ctx->pc = 0x197168u;
            goto label_197168;
        }
    }
    ctx->pc = 0x197160u;
    // 0x197160: 0xa200004a  sb          $zero, 0x4A($s0)
    ctx->pc = 0x197160u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 0));
    // 0x197164: 0x0  nop
    ctx->pc = 0x197164u;
    // NOP
label_197168:
    // 0x197168: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x197168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x19716c: 0x346300f0  ori         $v1, $v1, 0xF0
    ctx->pc = 0x19716cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)240);
    // 0x197170: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x197170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x197174: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x197174u;
    {
        const bool branch_taken_0x197174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197174) {
            ctx->pc = 0x1971B8u;
            goto label_1971b8;
        }
    }
    ctx->pc = 0x19717Cu;
    // 0x19717c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19717cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197180: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x197180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x197184: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x197184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x197188: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x197188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x19718c: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x19718cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x197190: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x197190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197194: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x197194u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197198: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x197198u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19719c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19719cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1971a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1971a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1971a4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x1971A4u;
    SET_GPR_U32(ctx, 31, 0x1971ACu);
    ctx->pc = 0x1971A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1971A4u;
    // 0x1971a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x1971A4u, 0x1971ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1971ACu;
label_1971ac:
    // 0x1971ac: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x1971ACu;
    {
        const bool branch_taken_0x1971ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1971B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971ACu;
        // 0x1971b0: 0xa6000010  sh          $zero, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971ac) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x1971B4u;
    // 0x1971b4: 0x0  nop
    ctx->pc = 0x1971b4u;
    // NOP
label_1971b8:
    // 0x1971b8: 0x86030010  lh          $v1, 0x10($s0)
    ctx->pc = 0x1971b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1971bc: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x1971bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1971c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1971C0u;
    {
        const bool branch_taken_0x1971c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1971C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971C0u;
        // 0x1971c4: 0x2462fffc  addiu       $v0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971c0) {
            ctx->pc = 0x1971E8u;
            goto label_1971e8;
        }
    }
    ctx->pc = 0x1971C8u;
    // 0x1971c8: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x1971c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x1971cc: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x1971ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1971d0: 0x28410040  slti        $at, $v0, 0x40
    ctx->pc = 0x1971d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1971d4: 0x1020012a  beqz        $at, . + 4 + (0x12A << 2)
    ctx->pc = 0x1971D4u;
    {
        const bool branch_taken_0x1971d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1971d4) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x1971DCu;
    // 0x1971dc: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x1971DCu;
    {
        const bool branch_taken_0x1971dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1971E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971DCu;
        // 0x1971e0: 0xa6000010  sh          $zero, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971dc) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x1971E4u;
    // 0x1971e4: 0x0  nop
    ctx->pc = 0x1971e4u;
    // NOP
label_1971e8:
    // 0x1971e8: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x1971e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1971ec: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x1971ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x1971f0: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x1971f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1971f4: 0x28410040  slti        $at, $v0, 0x40
    ctx->pc = 0x1971f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1971f8: 0x14200121  bnez        $at, . + 4 + (0x121 << 2)
    ctx->pc = 0x1971F8u;
    {
        const bool branch_taken_0x1971f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1971FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971F8u;
        // 0x1971fc: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971f8) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x197200u;
    // 0x197200: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x197200u;
    {
        const bool branch_taken_0x197200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197200u;
        // 0x197204: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197200) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x197208u;
label_197208:
    // 0x197208: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x197208u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x19720c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19720cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197210: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x197210u;
    {
        const bool branch_taken_0x197210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x197214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197210u;
        // 0x197214: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197210) {
            ctx->pc = 0x197310u;
            goto label_197310;
        }
    }
    ctx->pc = 0x197218u;
    // 0x197218: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x197218u;
    {
        const bool branch_taken_0x197218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x197218) {
            ctx->pc = 0x197298u;
            goto label_197298;
        }
    }
    ctx->pc = 0x197220u;
    // 0x197220: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x197220u;
    {
        const bool branch_taken_0x197220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x197220) {
            ctx->pc = 0x197230u;
            goto label_197230;
        }
    }
    ctx->pc = 0x197228u;
    // 0x197228: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x197228u;
    {
        const bool branch_taken_0x197228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197228) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x197230u;
label_197230:
    // 0x197230: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x197230u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x197234: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x197234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x197238: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x197238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x19723c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x19723cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x197240: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x197240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x197244: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x197244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x197248: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x197248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x19724c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x19724cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x197250: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x197250u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x197254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x197254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197258: 0x0  nop
    ctx->pc = 0x197258u;
    // NOP
    // 0x19725c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x19725cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x197260: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x197260u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x197264: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x197264u;
    {
        const bool branch_taken_0x197264 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x197264) {
            ctx->pc = 0x19727Cu;
            goto label_19727c;
        }
    }
    ctx->pc = 0x19726Cu;
    // 0x19726c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19726cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x197270: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x197270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x197274: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x197274u;
    {
        const bool branch_taken_0x197274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197274u;
        // 0x197278: 0xa603000c  sh          $v1, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197274) {
            ctx->pc = 0x197298u;
            goto label_197298;
        }
    }
    ctx->pc = 0x19727Cu;
label_19727c:
    // 0x19727c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x19727cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x197280: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x197280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x197284: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x197284u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x197288: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x197288u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19728c: 0x0  nop
    ctx->pc = 0x19728cu;
    // NOP
    // 0x197290: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x197290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x197294: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x197294u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
label_197298:
    // 0x197298: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x197298u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19729c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19729cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1972a0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1972a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1972a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1972a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1972a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1972a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1972ac: 0x44100f4  bgez        $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x1972ACu;
    {
        const bool branch_taken_0x1972ac = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1972B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972ACu;
        // 0x1972b0: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1972ac) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x1972B4u;
    // 0x1972b4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1972b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1972b8: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x1972b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x1972bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1972bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1972c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1972c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1972c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1972c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1972c8: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x1972C8u;
    SET_GPR_U32(ctx, 31, 0x1972D0u);
    ctx->pc = 0x1972CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1972C8u;
    // 0x1972cc: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x1972C8u, 0x1972D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1972D0u;
label_1972d0:
    // 0x1972d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1972d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1972d4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1972d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1972d8: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x1972d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1972dc: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x1972dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x1972e0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x1972e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x1972e4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1972e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x1972e8: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x1972e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x1972ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1972ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1972f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1972f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1972f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1972f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1972f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1972f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1972fc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1972fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197300: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x197300u;
    SET_GPR_U32(ctx, 31, 0x197308u);
    ctx->pc = 0x197304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197300u;
    // 0x197304: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x197300u, 0x197308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197308u;
label_197308:
    // 0x197308: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x197308u;
    {
        const bool branch_taken_0x197308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197308) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x197310u;
label_197310:
    // 0x197310: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x197310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x197314: 0xc063d48  jal         func_18F520
    ctx->pc = 0x197314u;
    SET_GPR_U32(ctx, 31, 0x19731Cu);
    ctx->pc = 0x197318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197314u;
    // 0x197318: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x197314u, 0x19731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19731Cu;
label_19731c:
    // 0x19731c: 0x144000d8  bnez        $v0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x19731Cu;
    {
        const bool branch_taken_0x19731c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19731Cu;
        // 0x197320: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19731c) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x197324u;
    // 0x197324: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x197324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x197328: 0x8c230fe0  lw          $v1, 0xFE0($at)
    ctx->pc = 0x197328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4064)));
    // 0x19732c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19732cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x197330: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x197330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x197334: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x197334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x197338: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x197338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19733c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x19733cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x197340: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x197340u;
    SET_GPR_U32(ctx, 31, 0x197348u);
    ctx->pc = 0x197344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197340u;
    // 0x197344: 0xac220fe0  sw          $v0, 0xFE0($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4064), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x197340u, 0x197348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197348u;
label_197348:
    // 0x197348: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x197348u;
    {
        const bool branch_taken_0x197348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197348u;
        // 0x19734c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197348) {
            ctx->pc = 0x197690u;
            goto label_197690;
        }
    }
    ctx->pc = 0x197350u;
label_197350:
    // 0x197350: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x197350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x197354: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x197354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197358: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x197358u;
    {
        const bool branch_taken_0x197358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197358u;
        // 0x19735c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197358) {
            ctx->pc = 0x197470u;
            goto label_197470;
        }
    }
    ctx->pc = 0x197360u;
    // 0x197360: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x197360u;
    {
        const bool branch_taken_0x197360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x197360) {
            ctx->pc = 0x1973E0u;
            goto label_1973e0;
        }
    }
    ctx->pc = 0x197368u;
    // 0x197368: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x197368u;
    {
        const bool branch_taken_0x197368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x197368) {
            ctx->pc = 0x197378u;
            goto label_197378;
        }
    }
    ctx->pc = 0x197370u;
    // 0x197370: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x197370u;
    {
        const bool branch_taken_0x197370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197370) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x197378u;
label_197378:
    // 0x197378: 0xc0957bc  jal         func_255EF0
    ctx->pc = 0x197378u;
    SET_GPR_U32(ctx, 31, 0x197380u);
    ctx->pc = 0x19737Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197378u;
    // 0x19737c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255EF0u, 0x197378u, 0x197380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197380u;
label_197380:
    // 0x197380: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x197380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x197384: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x197384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197388: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x197388u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x19738c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19738cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197390: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x197390u;
    {
        const bool branch_taken_0x197390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x197394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197390u;
        // 0x197394: 0xa3a40039  sb          $a0, 0x39($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 57), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197390) {
            ctx->pc = 0x1973B0u;
            goto label_1973b0;
        }
    }
    ctx->pc = 0x197398u;
    // 0x197398: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x197398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x19739c: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x19739cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x1973a0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1973a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1973a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1973A4u;
    {
        const bool branch_taken_0x1973a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1973a4) {
            ctx->pc = 0x1973B0u;
            goto label_1973b0;
        }
    }
    ctx->pc = 0x1973ACu;
    // 0x1973ac: 0xa3a4003a  sb          $a0, 0x3A($sp)
    ctx->pc = 0x1973acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 58), (uint8_t)GPR_U32(ctx, 4));
label_1973b0:
    // 0x1973b0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x1973b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x1973b4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1973b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1973b8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x1973b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x1973bc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1973bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1973c0: 0x34450011  ori         $a1, $v0, 0x11
    ctx->pc = 0x1973c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x1973c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1973c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1973c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1973c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1973cc: 0xc09565c  jal         func_255970
    ctx->pc = 0x1973CCu;
    SET_GPR_U32(ctx, 31, 0x1973D4u);
    ctx->pc = 0x1973D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1973CCu;
    // 0x1973d0: 0x27a90030  addiu       $t1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x1973CCu, 0x1973D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1973D4u;
label_1973d4:
    // 0x1973d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1973d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1973d8: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x1973D8u;
    {
        const bool branch_taken_0x1973d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1973DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973D8u;
        // 0x1973dc: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1973d8) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x1973E0u;
label_1973e0:
    // 0x1973e0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x1973e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x1973e4: 0xc095150  jal         func_254540
    ctx->pc = 0x1973E4u;
    SET_GPR_U32(ctx, 31, 0x1973ECu);
    ctx->pc = 0x1973E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1973E4u;
    // 0x1973e8: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x1973E4u, 0x1973ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1973ECu;
label_1973ec:
    // 0x1973ec: 0x144000a4  bnez        $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x1973ECu;
    {
        const bool branch_taken_0x1973ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1973F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973ECu;
        // 0x1973f0: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1973ec) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x1973F4u;
    // 0x1973f4: 0xc095154  jal         func_254550
    ctx->pc = 0x1973F4u;
    SET_GPR_U32(ctx, 31, 0x1973FCu);
    ctx->pc = 0x1973F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1973F4u;
    // 0x1973f8: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x1973F4u, 0x1973FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1973FCu;
label_1973fc:
    // 0x1973fc: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1973fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x197400: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x197400u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x197404: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x197404u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x197408: 0x10690015  beq         $v1, $t1, . + 4 + (0x15 << 2)
    ctx->pc = 0x197408u;
    {
        const bool branch_taken_0x197408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        if (branch_taken_0x197408) {
            ctx->pc = 0x197460u;
            goto label_197460;
        }
    }
    ctx->pc = 0x197410u;
    // 0x197410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197414: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x197414u;
    {
        const bool branch_taken_0x197414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x197414) {
            ctx->pc = 0x197460u;
            goto label_197460;
        }
    }
    ctx->pc = 0x19741Cu;
    // 0x19741c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19741Cu;
    {
        const bool branch_taken_0x19741c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19741c) {
            ctx->pc = 0x197430u;
            goto label_197430;
        }
    }
    ctx->pc = 0x197424u;
    // 0x197424: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x197424u;
    {
        const bool branch_taken_0x197424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197424) {
            ctx->pc = 0x197460u;
            goto label_197460;
        }
    }
    ctx->pc = 0x19742Cu;
    // 0x19742c: 0x0  nop
    ctx->pc = 0x19742cu;
    // NOP
label_197430:
    // 0x197430: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x197430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197434: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x197434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x197438: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x197438u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x19743c: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x19743cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x197440: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x197440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x197444: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x197444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197448: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x197448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19744c: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x19744Cu;
    SET_GPR_U32(ctx, 31, 0x197454u);
    ctx->pc = 0x197450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19744Cu;
    // 0x197450: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x19744Cu, 0x197454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197454u;
label_197454:
    // 0x197454: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x197454u;
    {
        const bool branch_taken_0x197454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197454) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x19745Cu;
    // 0x19745c: 0x0  nop
    ctx->pc = 0x19745cu;
    // NOP
label_197460:
    // 0x197460: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x197460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197464: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x197464u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x197468: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x197468u;
    {
        const bool branch_taken_0x197468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197468u;
        // 0x19746c: 0xa2000002  sb          $zero, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197468) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x197470u;
label_197470:
    // 0x197470: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x197470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x197474: 0xc063d48  jal         func_18F520
    ctx->pc = 0x197474u;
    SET_GPR_U32(ctx, 31, 0x19747Cu);
    ctx->pc = 0x197478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197474u;
    // 0x197478: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x197474u, 0x19747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19747Cu;
label_19747c:
    // 0x19747c: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x19747Cu;
    {
        const bool branch_taken_0x19747c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19747c) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x197484u;
    // 0x197484: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x197484u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x197488: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19748c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x19748cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x197490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197494: 0xc065b74  jal         func_196DD0
    ctx->pc = 0x197494u;
    SET_GPR_U32(ctx, 31, 0x19749Cu);
    ctx->pc = 0x197498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197494u;
    // 0x197498: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196DD0u;
    goto label_196dd0;
    ctx->pc = 0x19749Cu;
label_19749c:
    // 0x19749c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x19749cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1974a0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1974a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1974a4: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x1974a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x1974a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1974a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1974ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1974acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1974b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1974b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1974b4: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x1974B4u;
    SET_GPR_U32(ctx, 31, 0x1974BCu);
    ctx->pc = 0x1974B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1974B4u;
    // 0x1974b8: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x1974B4u, 0x1974BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1974BCu;
label_1974bc:
    // 0x1974bc: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1974BCu;
    {
        const bool branch_taken_0x1974bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1974bc) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x1974C4u;
    // 0x1974c4: 0x0  nop
    ctx->pc = 0x1974c4u;
    // NOP
label_1974c8:
    // 0x1974c8: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x1974c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1974cc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1974CCu;
    {
        const bool branch_taken_0x1974cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1974cc) {
            ctx->pc = 0x197530u;
            goto label_197530;
        }
    }
    ctx->pc = 0x1974D4u;
    // 0x1974d4: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x1974d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1974d8: 0x3c024ec4  lui         $v0, 0x4EC4
    ctx->pc = 0x1974d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20164 << 16));
    // 0x1974dc: 0x3442ec4f  ori         $v0, $v0, 0xEC4F
    ctx->pc = 0x1974dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60495);
    // 0x1974e0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1974e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1974e4: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x1974e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x1974e8: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x1974e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1974ec: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1974ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1974f0: 0x0  nop
    ctx->pc = 0x1974f0u;
    // NOP
    // 0x1974f4: 0x0  nop
    ctx->pc = 0x1974f4u;
    // NOP
    // 0x1974f8: 0x1010  mfhi        $v0
    ctx->pc = 0x1974f8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1974fc: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1974fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x197500: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x197500u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x197504: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197508: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x197508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x19750c: 0xa202004e  sb          $v0, 0x4E($s0)
    ctx->pc = 0x19750cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x197510: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x197510u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x197514: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x197514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x197518: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x197518u;
    {
        const bool branch_taken_0x197518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197518u;
        // 0x19751c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197518) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x197520u;
    // 0x197520: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x197520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x197524: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x197524u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x197528: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x197528u;
    {
        const bool branch_taken_0x197528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197528u;
        // 0x19752c: 0xa202004e  sb          $v0, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197528) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x197530u;
label_197530:
    // 0x197530: 0x8207004c  lb          $a3, 0x4C($s0)
    ctx->pc = 0x197530u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x197534: 0x8202004b  lb          $v0, 0x4B($s0)
    ctx->pc = 0x197534u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
    // 0x197538: 0x8203004a  lb          $v1, 0x4A($s0)
    ctx->pc = 0x197538u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x19753c: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x19753cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x197540: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x197540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x197544: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x197544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x197548: 0x24c8004f  addiu       $t0, $a2, 0x4F
    ctx->pc = 0x197548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 79));
    // 0x19754c: 0x80c5004f  lb          $a1, 0x4F($a2)
    ctx->pc = 0x19754cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 79)));
    // 0x197550: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x197550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x197554: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x197554u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197558: 0xa0c2004f  sb          $v0, 0x4F($a2)
    ctx->pc = 0x197558u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x19755c: 0x8202004c  lb          $v0, 0x4C($s0)
    ctx->pc = 0x19755cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x197560: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x197560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x197564: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x197564u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x197568: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x197568u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19756c: 0x8202004c  lb          $v0, 0x4C($s0)
    ctx->pc = 0x19756cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x197570: 0x80c30050  lb          $v1, 0x50($a2)
    ctx->pc = 0x197570u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x197574: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x197574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x197578: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x197578u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x19757c: 0xc065dc0  jal         func_197700
    ctx->pc = 0x19757Cu;
    SET_GPR_U32(ctx, 31, 0x197584u);
    ctx->pc = 0x197580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19757Cu;
    // 0x197580: 0xa0c50050  sb          $a1, 0x50($a2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 6), 80), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197700u, 0x19757Cu, 0x197584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197584u;
label_197584:
    // 0x197584: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x197584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x197588: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197588u;
    {
        const bool branch_taken_0x197588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197588u;
        // 0x19758c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197588) {
            ctx->pc = 0x197598u;
            goto label_197598;
        }
    }
    ctx->pc = 0x197590u;
    // 0x197590: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x197590u;
    {
        const bool branch_taken_0x197590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197590u;
        // 0x197594: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197590) {
            ctx->pc = 0x1975C0u;
            goto label_1975c0;
        }
    }
    ctx->pc = 0x197598u;
label_197598:
    // 0x197598: 0x82020048  lb          $v0, 0x48($s0)
    ctx->pc = 0x197598u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x19759c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19759Cu;
    {
        const bool branch_taken_0x19759c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1975A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19759Cu;
        // 0x1975a0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19759c) {
            ctx->pc = 0x1975B0u;
            goto label_1975b0;
        }
    }
    ctx->pc = 0x1975A4u;
    // 0x1975a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1975A4u;
    {
        const bool branch_taken_0x1975a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1975A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975A4u;
        // 0x1975a8: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975a4) {
            ctx->pc = 0x1975C0u;
            goto label_1975c0;
        }
    }
    ctx->pc = 0x1975ACu;
    // 0x1975ac: 0x0  nop
    ctx->pc = 0x1975acu;
    // NOP
label_1975b0:
    // 0x1975b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1975b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1975b4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1975b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1975b8: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x1975b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x1975bc: 0x0  nop
    ctx->pc = 0x1975bcu;
    // NOP
label_1975c0:
    // 0x1975c0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1975c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1975c4: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1975c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1975c8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1975c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1975cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1975ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1975d0: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x1975d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x1975d4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1975D4u;
    {
        const bool branch_taken_0x1975d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1975D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975D4u;
        // 0x1975d8: 0xa6000012  sh          $zero, 0x12($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975d4) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x1975DCu;
    // 0x1975dc: 0x0  nop
    ctx->pc = 0x1975dcu;
    // NOP
label_1975e0:
    // 0x1975e0: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x1975e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1975e4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1975E4u;
    {
        const bool branch_taken_0x1975e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1975e4) {
            ctx->pc = 0x197618u;
            goto label_197618;
        }
    }
    ctx->pc = 0x1975ECu;
    // 0x1975ec: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x1975ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1975f0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1975f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1975f4: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x1975f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x1975f8: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x1975f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1975fc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1975fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x197600: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x197600u;
    {
        const bool branch_taken_0x197600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197600u;
        // 0x197604: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197600) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x197608u;
    // 0x197608: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x197608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x19760c: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x19760cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x197610: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x197610u;
    {
        const bool branch_taken_0x197610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197610u;
        // 0x197614: 0xa6020012  sh          $v0, 0x12($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197610) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x197618u;
label_197618:
    // 0x197618: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x197618u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x19761c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x19761cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x197620: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x197620u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x197624: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x197624u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x197628: 0x1c400015  bgtz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x197628u;
    {
        const bool branch_taken_0x197628 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x197628) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x197630u;
    // 0x197630: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x197630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x197634: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x197634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x197638: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197638u;
    {
        const bool branch_taken_0x197638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197638u;
        // 0x19763c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197638) {
            ctx->pc = 0x197650u;
            goto label_197650;
        }
    }
    ctx->pc = 0x197640u;
    // 0x197640: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197644: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x197644u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x197648: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x197648u;
    {
        const bool branch_taken_0x197648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197648u;
        // 0x19764c: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197648) {
            ctx->pc = 0x197678u;
            goto label_197678;
        }
    }
    ctx->pc = 0x197650u;
label_197650:
    // 0x197650: 0x82020048  lb          $v0, 0x48($s0)
    ctx->pc = 0x197650u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x197654: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x197654u;
    {
        const bool branch_taken_0x197654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197654u;
        // 0x197658: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197654) {
            ctx->pc = 0x197668u;
            goto label_197668;
        }
    }
    ctx->pc = 0x19765Cu;
    // 0x19765c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19765Cu;
    {
        const bool branch_taken_0x19765c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19765Cu;
        // 0x197660: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19765c) {
            ctx->pc = 0x197678u;
            goto label_197678;
        }
    }
    ctx->pc = 0x197664u;
    // 0x197664: 0x0  nop
    ctx->pc = 0x197664u;
    // NOP
label_197668:
    // 0x197668: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x197668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19766c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x19766cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x197670: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x197670u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x197674: 0x0  nop
    ctx->pc = 0x197674u;
    // NOP
label_197678:
    // 0x197678: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x197678u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19767c: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x19767cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
label_197680:
    // 0x197680: 0xc065e7c  jal         func_1979F0
    ctx->pc = 0x197680u;
    SET_GPR_U32(ctx, 31, 0x197688u);
    ctx->pc = 0x197684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197680u;
    // 0x197684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1979F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1979F0u, 0x197680u, 0x197688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197688u;
label_197688:
    // 0x197688: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x197688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19768c: 0x0  nop
    ctx->pc = 0x19768cu;
    // NOP
label_197690:
    // 0x197690: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x197690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197694: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x197694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197698: 0x3e00008  jr          $ra
    ctx->pc = 0x197698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197698u;
        // 0x19769c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1976A0u;
}
