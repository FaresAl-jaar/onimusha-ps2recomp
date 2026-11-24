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

// Function: sub_00368A60
// Address: 0x368a60 - 0x368d58
void sub_00368A60_0x368a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368A60_0x368a60");
#endif

    switch (ctx->pc) {
        case 0x368b18u: goto label_368b18;
        case 0x368bf0u: goto label_368bf0;
        case 0x368c20u: goto label_368c20;
        case 0x368c30u: goto label_368c30;
        case 0x368d40u: goto label_368d40;
        case 0x368d48u: goto label_368d48;
        default: break;
    }

    ctx->pc = 0x368a60u;

    // 0x368a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x368a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x368a64: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x368a64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x368a68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x368a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x368a6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x368a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x368a70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x368a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x368a74: 0x8c8306c8  lw          $v1, 0x6C8($a0)
    ctx->pc = 0x368a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x368a78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x368a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368a7c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x368a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x368a80: 0xac8306c8  sw          $v1, 0x6C8($a0)
    ctx->pc = 0x368a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1736), GPR_U32(ctx, 3));
    // 0x368a84: 0x8c8306cc  lw          $v1, 0x6CC($a0)
    ctx->pc = 0x368a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x368a88: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x368a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x368a8c: 0xac8306cc  sw          $v1, 0x6CC($a0)
    ctx->pc = 0x368a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 3));
    // 0x368a90: 0x90842b25  lbu         $a0, 0x2B25($a0)
    ctx->pc = 0x368a90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11045)));
    // 0x368a94: 0x10820052  beq         $a0, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x368A94u;
    {
        const bool branch_taken_0x368a94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x368a94) {
            ctx->pc = 0x368BE0u;
            goto label_368be0;
        }
    }
    ctx->pc = 0x368A9Cu;
    // 0x368a9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x368a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368aa0: 0x10830045  beq         $a0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x368AA0u;
    {
        const bool branch_taken_0x368aa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x368aa0) {
            ctx->pc = 0x368BB8u;
            goto label_368bb8;
        }
    }
    ctx->pc = 0x368AA8u;
    // 0x368aa8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x368AA8u;
    {
        const bool branch_taken_0x368aa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x368aa8) {
            ctx->pc = 0x368AB8u;
            goto label_368ab8;
        }
    }
    ctx->pc = 0x368AB0u;
    // 0x368ab0: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x368AB0u;
    {
        const bool branch_taken_0x368ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x368ab0) {
            ctx->pc = 0x368D20u;
            goto label_368d20;
        }
    }
    ctx->pc = 0x368AB8u;
label_368ab8:
    // 0x368ab8: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x368ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x368abc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x368abcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x368ac0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x368AC0u;
    {
        const bool branch_taken_0x368ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x368ac0) {
            ctx->pc = 0x368B38u;
            goto label_368b38;
        }
    }
    ctx->pc = 0x368AC8u;
    // 0x368ac8: 0x9602065a  lhu         $v0, 0x65A($s0)
    ctx->pc = 0x368ac8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1626)));
    // 0x368acc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x368ACCu;
    {
        const bool branch_taken_0x368acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x368acc) {
            ctx->pc = 0x368B38u;
            goto label_368b38;
        }
    }
    ctx->pc = 0x368AD4u;
    // 0x368ad4: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x368ad4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x368ad8: 0x2402009a  addiu       $v0, $zero, 0x9A
    ctx->pc = 0x368ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    // 0x368adc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x368ADCu;
    {
        const bool branch_taken_0x368adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x368adc) {
            ctx->pc = 0x368AF8u;
            goto label_368af8;
        }
    }
    ctx->pc = 0x368AE4u;
    // 0x368ae4: 0x24020099  addiu       $v0, $zero, 0x99
    ctx->pc = 0x368ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x368ae8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x368AE8u;
    {
        const bool branch_taken_0x368ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x368ae8) {
            ctx->pc = 0x368AF8u;
            goto label_368af8;
        }
    }
    ctx->pc = 0x368AF0u;
    // 0x368af0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x368AF0u;
    {
        const bool branch_taken_0x368af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x368af0) {
            ctx->pc = 0x368B38u;
            goto label_368b38;
        }
    }
    ctx->pc = 0x368AF8u;
label_368af8:
    // 0x368af8: 0x96022b26  lhu         $v0, 0x2B26($s0)
    ctx->pc = 0x368af8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11046)));
    // 0x368afc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x368afcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x368b00: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x368b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x368b04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x368b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x368b08: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x368B08u;
    {
        const bool branch_taken_0x368b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x368b08) {
            ctx->pc = 0x368B38u;
            goto label_368b38;
        }
    }
    ctx->pc = 0x368B10u;
    // 0x368b10: 0xc0da3b0  jal         func_368EC0
    ctx->pc = 0x368B10u;
    SET_GPR_U32(ctx, 31, 0x368B18u);
    ctx->pc = 0x368B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368B10u;
    // 0x368b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368EC0u, 0x368B10u, 0x368B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368B18u;
label_368b18:
    // 0x368b18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x368B18u;
    {
        const bool branch_taken_0x368b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x368b18) {
            ctx->pc = 0x368B38u;
            goto label_368b38;
        }
    }
    ctx->pc = 0x368B20u;
    // 0x368b20: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x368b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x368b24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x368b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x368b28: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x368b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x368b2c: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x368b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
    // 0x368b30: 0xa2022b25  sb          $v0, 0x2B25($s0)
    ctx->pc = 0x368b30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11045), (uint8_t)GPR_U32(ctx, 2));
    // 0x368b34: 0x0  nop
    ctx->pc = 0x368b34u;
    // NOP
label_368b38:
    // 0x368b38: 0x92022b25  lbu         $v0, 0x2B25($s0)
    ctx->pc = 0x368b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11045)));
    // 0x368b3c: 0x14400078  bnez        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x368B3Cu;
    {
        const bool branch_taken_0x368b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x368b3c) {
            ctx->pc = 0x368D20u;
            goto label_368d20;
        }
    }
    ctx->pc = 0x368B44u;
    // 0x368b44: 0x8e0206ac  lw          $v0, 0x6AC($s0)
    ctx->pc = 0x368b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x368b48: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x368b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x368b4c: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x368B4Cu;
    {
        const bool branch_taken_0x368b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x368b4c) {
            ctx->pc = 0x368D20u;
            goto label_368d20;
        }
    }
    ctx->pc = 0x368B54u;
    // 0x368b54: 0x96022b26  lhu         $v0, 0x2B26($s0)
    ctx->pc = 0x368b54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11046)));
    // 0x368b58: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x368b58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x368b5c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x368b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x368b60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x368b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x368b64: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x368B64u;
    {
        const bool branch_taken_0x368b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x368b64) {
            ctx->pc = 0x368D20u;
            goto label_368d20;
        }
    }
    ctx->pc = 0x368B6Cu;
    // 0x368b6c: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x368b6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x368b70: 0x2402008e  addiu       $v0, $zero, 0x8E
    ctx->pc = 0x368b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x368b74: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x368B74u;
    {
        const bool branch_taken_0x368b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x368b74) {
            ctx->pc = 0x368BA8u;
            goto label_368ba8;
        }
    }
    ctx->pc = 0x368B7Cu;
    // 0x368b7c: 0x2402008a  addiu       $v0, $zero, 0x8A
    ctx->pc = 0x368b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x368b80: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x368B80u;
    {
        const bool branch_taken_0x368b80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x368b80) {
            ctx->pc = 0x368BA8u;
            goto label_368ba8;
        }
    }
    ctx->pc = 0x368B88u;
    // 0x368b88: 0x24020083  addiu       $v0, $zero, 0x83
    ctx->pc = 0x368b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x368b8c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x368B8Cu;
    {
        const bool branch_taken_0x368b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x368b8c) {
            ctx->pc = 0x368BA8u;
            goto label_368ba8;
        }
    }
    ctx->pc = 0x368B94u;
    // 0x368b94: 0x24020082  addiu       $v0, $zero, 0x82
    ctx->pc = 0x368b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x368b98: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x368B98u;
    {
        const bool branch_taken_0x368b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x368b98) {
            ctx->pc = 0x368BA8u;
            goto label_368ba8;
        }
    }
    ctx->pc = 0x368BA0u;
    // 0x368ba0: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x368BA0u;
    {
        const bool branch_taken_0x368ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x368ba0) {
            ctx->pc = 0x368D20u;
            goto label_368d20;
        }
    }
    ctx->pc = 0x368BA8u;
label_368ba8:
    // 0x368ba8: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x368ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x368bac: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x368BACu;
    {
        const bool branch_taken_0x368bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368BACu;
        // 0x368bb0: 0xa2020780  sb          $v0, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368bac) {
            ctx->pc = 0x368D20u;
            goto label_368d20;
        }
    }
    ctx->pc = 0x368BB4u;
    // 0x368bb4: 0x0  nop
    ctx->pc = 0x368bb4u;
    // NOP
label_368bb8:
    // 0x368bb8: 0x9202065c  lbu         $v0, 0x65C($s0)
    ctx->pc = 0x368bb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x368bbc: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x368BBCu;
    {
        const bool branch_taken_0x368bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x368bbc) {
            ctx->pc = 0x368BD8u;
            goto label_368bd8;
        }
    }
    ctx->pc = 0x368BC4u;
    // 0x368bc4: 0x0  nop
    ctx->pc = 0x368bc4u;
    // NOP
    // 0x368bc8: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x368bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x368bcc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x368bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x368bd0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x368BD0u;
    {
        const bool branch_taken_0x368bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368BD0u;
        // 0x368bd4: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368bd0) {
            ctx->pc = 0x368D20u;
            goto label_368d20;
        }
    }
    ctx->pc = 0x368BD8u;
label_368bd8:
    // 0x368bd8: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x368BD8u;
    {
        const bool branch_taken_0x368bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368BD8u;
        // 0x368bdc: 0xa2002b25  sb          $zero, 0x2B25($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11045), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368bd8) {
            ctx->pc = 0x368D20u;
            goto label_368d20;
        }
    }
    ctx->pc = 0x368BE0u;
label_368be0:
    // 0x368be0: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x368be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x368be4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x368be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368be8: 0x24840850  addiu       $a0, $a0, 0x850
    ctx->pc = 0x368be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2128));
    // 0x368bec: 0x0  nop
    ctx->pc = 0x368becu;
    // NOP
label_368bf0:
    // 0x368bf0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x368bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x368bf4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x368bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x368bf8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x368BF8u;
    {
        const bool branch_taken_0x368bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x368bf8) {
            ctx->pc = 0x368C08u;
            goto label_368c08;
        }
    }
    ctx->pc = 0x368C00u;
    // 0x368c00: 0x8e022b20  lw          $v0, 0x2B20($s0)
    ctx->pc = 0x368c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x368c04: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x368c04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_368c08:
    // 0x368c08: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x368c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x368c0c: 0x2ca20020  sltiu       $v0, $a1, 0x20
    ctx->pc = 0x368c0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x368c10: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x368C10u;
    {
        const bool branch_taken_0x368c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368C10u;
        // 0x368c14: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368c10) {
            ctx->pc = 0x368BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368bf0;
        }
    }
    ctx->pc = 0x368C18u;
    // 0x368c18: 0xc0a7330  jal         func_29CCC0
    ctx->pc = 0x368C18u;
    SET_GPR_U32(ctx, 31, 0x368C20u);
    ctx->pc = 0x368C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368C18u;
    // 0x368c1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CCC0u, 0x368C18u, 0x368C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368C20u;
label_368c20:
    // 0x368c20: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x368c20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x368c24: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x368C24u;
    {
        const bool branch_taken_0x368c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x368c24) {
            ctx->pc = 0x368D08u;
            goto label_368d08;
        }
    }
    ctx->pc = 0x368C2Cu;
    // 0x368c2c: 0x27858060  addiu       $a1, $gp, -0x7FA0
    ctx->pc = 0x368c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
label_368c30:
    // 0x368c30: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x368C30u;
    {
        const bool branch_taken_0x368c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x368c30) {
            ctx->pc = 0x368CF8u;
            goto label_368cf8;
        }
    }
    ctx->pc = 0x368C38u;
    // 0x368c38: 0x8c4407c0  lw          $a0, 0x7C0($v0)
    ctx->pc = 0x368c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1984)));
    // 0x368c3c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x368c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x368c40: 0x1483002d  bne         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x368C40u;
    {
        const bool branch_taken_0x368c40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x368c40) {
            ctx->pc = 0x368CF8u;
            goto label_368cf8;
        }
    }
    ctx->pc = 0x368C48u;
    // 0x368c48: 0x8e032b20  lw          $v1, 0x2B20($s0)
    ctx->pc = 0x368c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x368c4c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x368c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x368c50: 0xac4307c0  sw          $v1, 0x7C0($v0)
    ctx->pc = 0x368c50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1984), GPR_U32(ctx, 3));
    // 0x368c54: 0x8e032b20  lw          $v1, 0x2B20($s0)
    ctx->pc = 0x368c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x368c58: 0xac4307c4  sw          $v1, 0x7C4($v0)
    ctx->pc = 0x368c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1988), GPR_U32(ctx, 3));
    // 0x368c5c: 0x90266c1c  lbu         $a2, 0x6C1C($at)
    ctx->pc = 0x368c5cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x368c60: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x368c60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x368c64: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x368c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x368c68: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x368c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x368c6c: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x368C6Cu;
    {
        const bool branch_taken_0x368c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x368c6c) {
            ctx->pc = 0x368CA8u;
            goto label_368ca8;
        }
    }
    ctx->pc = 0x368C74u;
    // 0x368c74: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x368c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x368c78: 0x90236e5c  lbu         $v1, 0x6E5C($at)
    ctx->pc = 0x368c78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6E5Cu));
    // 0x368c7c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x368C7Cu;
    {
        const bool branch_taken_0x368c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x368c7c) {
            ctx->pc = 0x368CA8u;
            goto label_368ca8;
        }
    }
    ctx->pc = 0x368C84u;
    // 0x368c84: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x368c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x368c88: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x368c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x368c8c: 0x8c246e40  lw          $a0, 0x6E40($at)
    ctx->pc = 0x368c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8D6E40u));
    // 0x368c90: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x368C90u;
    {
        const bool branch_taken_0x368c90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x368c90) {
            ctx->pc = 0x368CA8u;
            goto label_368ca8;
        }
    }
    ctx->pc = 0x368C98u;
    // 0x368c98: 0x8e032b20  lw          $v1, 0x2B20($s0)
    ctx->pc = 0x368c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x368c9c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x368c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x368ca0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x368CA0u;
    {
        const bool branch_taken_0x368ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368CA0u;
        // 0x368ca4: 0xac236e40  sw          $v1, 0x6E40($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 28224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368ca0) {
            ctx->pc = 0x368CF8u;
            goto label_368cf8;
        }
    }
    ctx->pc = 0x368CA8u;
label_368ca8:
    // 0x368ca8: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x368ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x368cac: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x368cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x368cb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x368cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x368cb4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x368cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x368cb8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x368cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x368cbc: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x368CBCu;
    {
        const bool branch_taken_0x368cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x368cbc) {
            ctx->pc = 0x368CF8u;
            goto label_368cf8;
        }
    }
    ctx->pc = 0x368CC4u;
    // 0x368cc4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x368cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x368cc8: 0x90236e9c  lbu         $v1, 0x6E9C($at)
    ctx->pc = 0x368cc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6E9Cu));
    // 0x368ccc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x368CCCu;
    {
        const bool branch_taken_0x368ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x368ccc) {
            ctx->pc = 0x368CF8u;
            goto label_368cf8;
        }
    }
    ctx->pc = 0x368CD4u;
    // 0x368cd4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x368cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x368cd8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x368cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x368cdc: 0x8c246e80  lw          $a0, 0x6E80($at)
    ctx->pc = 0x368cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8D6E80u));
    // 0x368ce0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x368CE0u;
    {
        const bool branch_taken_0x368ce0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x368ce0) {
            ctx->pc = 0x368CF8u;
            goto label_368cf8;
        }
    }
    ctx->pc = 0x368CE8u;
    // 0x368ce8: 0x8e032b20  lw          $v1, 0x2B20($s0)
    ctx->pc = 0x368ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x368cec: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x368cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x368cf0: 0xac236e80  sw          $v1, 0x6E80($at)
    ctx->pc = 0x368cf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6E80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6E80u, _value); } while (0);
    // 0x368cf4: 0x0  nop
    ctx->pc = 0x368cf4u;
    // NOP
label_368cf8:
    // 0x368cf8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x368cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x368cfc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x368cfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x368d00: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x368D00u;
    {
        const bool branch_taken_0x368d00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x368d00) {
            ctx->pc = 0x368C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368c30;
        }
    }
    ctx->pc = 0x368D08u;
label_368d08:
    // 0x368d08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x368d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x368d0c: 0xa2022ab6  sb          $v0, 0x2AB6($s0)
    ctx->pc = 0x368d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10934), (uint8_t)GPR_U32(ctx, 2));
    // 0x368d10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x368d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368d14: 0xa6022ab4  sh          $v0, 0x2AB4($s0)
    ctx->pc = 0x368d14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10932), (uint16_t)GPR_U32(ctx, 2));
    // 0x368d18: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x368d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x368d1c: 0xa2022b25  sb          $v0, 0x2B25($s0)
    ctx->pc = 0x368d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11045), (uint8_t)GPR_U32(ctx, 2));
label_368d20:
    // 0x368d20: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x368d20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x368d24: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x368d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x368d28: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x368D28u;
    {
        const bool branch_taken_0x368d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x368d28) {
            ctx->pc = 0x368D38u;
            goto label_368d38;
        }
    }
    ctx->pc = 0x368D30u;
    // 0x368d30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x368D30u;
    {
        const bool branch_taken_0x368d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x368d30) {
            ctx->pc = 0x368D40u;
            goto label_368d40;
        }
    }
    ctx->pc = 0x368D38u;
label_368d38:
    // 0x368d38: 0xc0da358  jal         func_368D60
    ctx->pc = 0x368D38u;
    SET_GPR_U32(ctx, 31, 0x368D40u);
    ctx->pc = 0x368D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368D38u;
    // 0x368d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368D60u, 0x368D38u, 0x368D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368D40u;
label_368d40:
    // 0x368d40: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x368D40u;
    SET_GPR_U32(ctx, 31, 0x368D48u);
    ctx->pc = 0x368D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368D40u;
    // 0x368d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x368D40u, 0x368D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368D48u;
label_368d48:
    // 0x368d48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x368d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368d4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x368d4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368d50: 0x3e00008  jr          $ra
    ctx->pc = 0x368D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368D50u;
        // 0x368d54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368D58u;
}
