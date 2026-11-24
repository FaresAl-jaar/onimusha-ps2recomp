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

// Function: sub_003A4CC0
// Address: 0x3a4cc0 - 0x3a51a8
void sub_003A4CC0_0x3a4cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4CC0_0x3a4cc0");
#endif

    switch (ctx->pc) {
        case 0x3a4d3cu: goto label_3a4d3c;
        case 0x3a4d50u: goto label_3a4d50;
        case 0x3a4d6cu: goto label_3a4d6c;
        case 0x3a4de0u: goto label_3a4de0;
        case 0x3a4e0cu: goto label_3a4e0c;
        case 0x3a4ef0u: goto label_3a4ef0;
        case 0x3a4f1cu: goto label_3a4f1c;
        case 0x3a5030u: goto label_3a5030;
        case 0x3a5040u: goto label_3a5040;
        case 0x3a50c0u: goto label_3a50c0;
        case 0x3a512cu: goto label_3a512c;
        case 0x3a513cu: goto label_3a513c;
        default: break;
    }

    ctx->pc = 0x3a4cc0u;

    // 0x3a4cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a4cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a4cc4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a4cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a4cc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a4cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a4ccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a4cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a4cd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a4cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4cd4: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x3a4cd4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3a4cd8: 0x10830103  beq         $a0, $v1, . + 4 + (0x103 << 2)
    ctx->pc = 0x3A4CD8u;
    {
        const bool branch_taken_0x3a4cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A4CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4CD8u;
        // 0x3a4cdc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4cd8) {
            ctx->pc = 0x3A50E8u;
            goto label_3a50e8;
        }
    }
    ctx->pc = 0x3A4CE0u;
    // 0x3a4ce0: 0x10830089  beq         $a0, $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x3A4CE0u;
    {
        const bool branch_taken_0x3a4ce0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a4ce0) {
            ctx->pc = 0x3A4F08u;
            goto label_3a4f08;
        }
    }
    ctx->pc = 0x3A4CE8u;
    // 0x3a4ce8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a4ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a4cec: 0x10830042  beq         $a0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x3A4CECu;
    {
        const bool branch_taken_0x3a4cec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A4CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4CECu;
        // 0x3a4cf0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4cec) {
            ctx->pc = 0x3A4DF8u;
            goto label_3a4df8;
        }
    }
    ctx->pc = 0x3A4CF4u;
    // 0x3a4cf4: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3A4CF4u;
    {
        const bool branch_taken_0x3a4cf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a4cf4) {
            ctx->pc = 0x3A4D58u;
            goto label_3a4d58;
        }
    }
    ctx->pc = 0x3A4CFCu;
    // 0x3a4cfc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A4CFCu;
    {
        const bool branch_taken_0x3a4cfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4cfc) {
            ctx->pc = 0x3A4D10u;
            goto label_3a4d10;
        }
    }
    ctx->pc = 0x3A4D04u;
    // 0x3a4d04: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x3A4D04u;
    {
        const bool branch_taken_0x3a4d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4d04) {
            ctx->pc = 0x3A5198u;
            goto label_3a5198;
        }
    }
    ctx->pc = 0x3A4D0Cu;
    // 0x3a4d0c: 0x0  nop
    ctx->pc = 0x3a4d0cu;
    // NOP
label_3a4d10:
    // 0x3a4d10: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3a4d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a4d14: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x3a4d14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a4d18: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a4d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a4d1c: 0xa2000007  sb          $zero, 0x7($s0)
    ctx->pc = 0x3a4d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4d20: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a4d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a4d24: 0xa2000058  sb          $zero, 0x58($s0)
    ctx->pc = 0x3a4d24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4d28: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x3a4d28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4d2c: 0xa2000059  sb          $zero, 0x59($s0)
    ctx->pc = 0x3a4d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 89), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4d30: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x3a4d30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4d34: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A4D34u;
    SET_GPR_U32(ctx, 31, 0x3A4D3Cu);
    ctx->pc = 0x3A4D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4D34u;
    // 0x3a4d38: 0xa200000d  sb          $zero, 0xD($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A4D34u, 0x3A4D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4D3Cu;
label_3a4d3c:
    // 0x3a4d3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a4d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4d40: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x3a4d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x3a4d44: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3a4d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a4d48: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A4D48u;
    SET_GPR_U32(ctx, 31, 0x3A4D50u);
    ctx->pc = 0x3A4D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4D48u;
    // 0x3a4d4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A4D48u, 0x3A4D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4D50u;
label_3a4d50:
    // 0x3a4d50: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x3A4D50u;
    {
        const bool branch_taken_0x3a4d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4d50) {
            ctx->pc = 0x3A5198u;
            goto label_3a5198;
        }
    }
    ctx->pc = 0x3A4D58u;
label_3a4d58:
    // 0x3a4d58: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3a4d58u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a4d5c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a4d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a4d60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a4d60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4d64: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x3A4D64u;
    SET_GPR_U32(ctx, 31, 0x3A4D6Cu);
    ctx->pc = 0x3A4D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4D64u;
    // 0x3a4d68: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149DF0u, 0x3A4D64u, 0x3A4D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4D6Cu;
label_3a4d6c:
    // 0x3a4d6c: 0x1c40010a  bgtz        $v0, . + 4 + (0x10A << 2)
    ctx->pc = 0x3A4D6Cu;
    {
        const bool branch_taken_0x3a4d6c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3A4D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4D6Cu;
        // 0x3a4d70: 0x2841fffc  slti        $at, $v0, -0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967292) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4d6c) {
            ctx->pc = 0x3A5198u;
            goto label_3a5198;
        }
    }
    ctx->pc = 0x3A4D74u;
    // 0x3a4d74: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x3A4D74u;
    {
        const bool branch_taken_0x3a4d74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4d74) {
            ctx->pc = 0x3A4DB0u;
            goto label_3a4db0;
        }
    }
    ctx->pc = 0x3A4D7Cu;
    // 0x3a4d7c: 0x82060007  lb          $a2, 0x7($s0)
    ctx->pc = 0x3a4d7cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a4d80: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a4d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a4d84: 0x24848e38  addiu       $a0, $a0, -0x71C8
    ctx->pc = 0x3a4d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938168));
    // 0x3a4d88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a4d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a4d8c: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x3a4d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3a4d90: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x3a4d90u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3a4d94: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3a4d94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3a4d98: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3a4d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3a4d9c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3a4d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3a4da0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3a4da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3a4da4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3a4da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a4da8: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3A4DA8u;
    {
        const bool branch_taken_0x3a4da8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a4da8) {
            ctx->pc = 0x3A4DE8u;
            goto label_3a4de8;
        }
    }
    ctx->pc = 0x3A4DB0u;
label_3a4db0:
    // 0x3a4db0: 0x82030007  lb          $v1, 0x7($s0)
    ctx->pc = 0x3a4db0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a4db4: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x3a4db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3a4db8: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x3a4db8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3a4dbc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3a4dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3a4dc0: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x3a4dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a4dc4: 0x82030007  lb          $v1, 0x7($s0)
    ctx->pc = 0x3a4dc4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a4dc8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4DC8u;
    {
        const bool branch_taken_0x3a4dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DC8u;
        // 0x3a4dcc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4dc8) {
            ctx->pc = 0x3A4DD8u;
            goto label_3a4dd8;
        }
    }
    ctx->pc = 0x3A4DD0u;
    // 0x3a4dd0: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x3A4DD0u;
    {
        const bool branch_taken_0x3a4dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DD0u;
        // 0x3a4dd4: 0xa2030007  sb          $v1, 0x7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4dd0) {
            ctx->pc = 0x3A5198u;
            goto label_3a5198;
        }
    }
    ctx->pc = 0x3A4DD8u;
label_3a4dd8:
    // 0x3a4dd8: 0xc0e94cc  jal         func_3A5330
    ctx->pc = 0x3A4DD8u;
    SET_GPR_U32(ctx, 31, 0x3A4DE0u);
    ctx->pc = 0x3A4DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4DD8u;
    // 0x3a4ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5330u, 0x3A4DD8u, 0x3A4DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4DE0u;
label_3a4de0:
    // 0x3a4de0: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x3A4DE0u;
    {
        const bool branch_taken_0x3a4de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4de0) {
            ctx->pc = 0x3A5198u;
            goto label_3a5198;
        }
    }
    ctx->pc = 0x3A4DE8u;
label_3a4de8:
    // 0x3a4de8: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x3a4de8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a4dec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a4decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a4df0: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x3A4DF0u;
    {
        const bool branch_taken_0x3a4df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DF0u;
        // 0x3a4df4: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4df0) {
            ctx->pc = 0x3A5198u;
            goto label_3a5198;
        }
    }
    ctx->pc = 0x3A4DF8u;
label_3a4df8:
    // 0x3a4df8: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3a4df8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a4dfc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a4dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a4e00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a4e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4e04: 0xc052aa4  jal         func_14AA90
    ctx->pc = 0x3A4E04u;
    SET_GPR_U32(ctx, 31, 0x3A4E0Cu);
    ctx->pc = 0x3A4E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4E04u;
    // 0x3a4e08: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AA90u, 0x3A4E04u, 0x3A4E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4E0Cu;
label_3a4e0c:
    // 0x3a4e0c: 0x1c4000e2  bgtz        $v0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x3A4E0Cu;
    {
        const bool branch_taken_0x3a4e0c = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x3a4e0c) {
            ctx->pc = 0x3A5198u;
            goto label_3a5198;
        }
    }
    ctx->pc = 0x3A4E14u;
    // 0x3a4e14: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x3A4E14u;
    {
        const bool branch_taken_0x3a4e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E14u;
        // 0x3a4e18: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4e14) {
            ctx->pc = 0x3A4EF8u;
            goto label_3a4ef8;
        }
    }
    ctx->pc = 0x3A4E1Cu;
    // 0x3a4e1c: 0x10430026  beq         $v0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3A4E1Cu;
    {
        const bool branch_taken_0x3a4e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a4e1c) {
            ctx->pc = 0x3A4EB8u;
            goto label_3a4eb8;
        }
    }
    ctx->pc = 0x3A4E24u;
    // 0x3a4e24: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x3a4e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x3a4e28: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3A4E28u;
    {
        const bool branch_taken_0x3a4e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E28u;
        // 0x3a4e2c: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4e28) {
            ctx->pc = 0x3A4E58u;
            goto label_3a4e58;
        }
    }
    ctx->pc = 0x3A4E30u;
    // 0x3a4e30: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4E30u;
    {
        const bool branch_taken_0x3a4e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a4e30) {
            ctx->pc = 0x3A4E40u;
            goto label_3a4e40;
        }
    }
    ctx->pc = 0x3A4E38u;
    // 0x3a4e38: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3A4E38u;
    {
        const bool branch_taken_0x3a4e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4e38) {
            ctx->pc = 0x3A4EB8u;
            goto label_3a4eb8;
        }
    }
    ctx->pc = 0x3A4E40u;
label_3a4e40:
    // 0x3a4e40: 0x82030007  lb          $v1, 0x7($s0)
    ctx->pc = 0x3a4e40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a4e44: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x3a4e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3a4e48: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x3a4e48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3a4e4c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3a4e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3a4e50: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3A4E50u;
    {
        const bool branch_taken_0x3a4e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E50u;
        // 0x3a4e54: 0xa083000c  sb          $v1, 0xC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4e50) {
            ctx->pc = 0x3A4ED0u;
            goto label_3a4ed0;
        }
    }
    ctx->pc = 0x3A4E58u;
label_3a4e58:
    // 0x3a4e58: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3a4e58u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a4e5c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3a4e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3a4e60: 0x24638e3c  addiu       $v1, $v1, -0x71C4
    ctx->pc = 0x3a4e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938172));
    // 0x3a4e64: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x3a4e64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3a4e68: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3a4e68u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3a4e6c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3a4e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a4e70: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3a4e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3a4e74: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3a4e74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a4e78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a4e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a4e7c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a4e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a4e80: 0x28610137  slti        $at, $v1, 0x137
    ctx->pc = 0x3a4e80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)311) ? 1 : 0);
    // 0x3a4e84: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A4E84u;
    {
        const bool branch_taken_0x3a4e84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E84u;
        // 0x3a4e88: 0xb02021  addu        $a0, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4e84) {
            ctx->pc = 0x3A4EA0u;
            goto label_3a4ea0;
        }
    }
    ctx->pc = 0x3A4E8Cu;
    // 0x3a4e8c: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x3a4e8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3a4e90: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x3a4e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x3a4e94: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3A4E94u;
    {
        const bool branch_taken_0x3a4e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E94u;
        // 0x3a4e98: 0xa083000c  sb          $v1, 0xC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4e94) {
            ctx->pc = 0x3A4ED0u;
            goto label_3a4ed0;
        }
    }
    ctx->pc = 0x3A4E9Cu;
    // 0x3a4e9c: 0x0  nop
    ctx->pc = 0x3a4e9cu;
    // NOP
label_3a4ea0:
    // 0x3a4ea0: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x3a4ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x3a4ea4: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x3a4ea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3a4ea8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x3a4ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x3a4eac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A4EACu;
    {
        const bool branch_taken_0x3a4eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4EACu;
        // 0x3a4eb0: 0xa083000c  sb          $v1, 0xC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4eac) {
            ctx->pc = 0x3A4ED0u;
            goto label_3a4ed0;
        }
    }
    ctx->pc = 0x3A4EB4u;
    // 0x3a4eb4: 0x0  nop
    ctx->pc = 0x3a4eb4u;
    // NOP
label_3a4eb8:
    // 0x3a4eb8: 0x82030007  lb          $v1, 0x7($s0)
    ctx->pc = 0x3a4eb8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a4ebc: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x3a4ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3a4ec0: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x3a4ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3a4ec4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3a4ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3a4ec8: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x3a4ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a4ecc: 0x0  nop
    ctx->pc = 0x3a4eccu;
    // NOP
label_3a4ed0:
    // 0x3a4ed0: 0x82030007  lb          $v1, 0x7($s0)
    ctx->pc = 0x3a4ed0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a4ed4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A4ED4u;
    {
        const bool branch_taken_0x3a4ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4ED4u;
        // 0x3a4ed8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4ed4) {
            ctx->pc = 0x3A4EE8u;
            goto label_3a4ee8;
        }
    }
    ctx->pc = 0x3A4EDCu;
    // 0x3a4edc: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x3a4edcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a4ee0: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x3A4EE0u;
    {
        const bool branch_taken_0x3a4ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4EE0u;
        // 0x3a4ee4: 0xa2030007  sb          $v1, 0x7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4ee0) {
            ctx->pc = 0x3A5198u;
            goto label_3a5198;
        }
    }
    ctx->pc = 0x3A4EE8u;
label_3a4ee8:
    // 0x3a4ee8: 0xc0e94cc  jal         func_3A5330
    ctx->pc = 0x3A4EE8u;
    SET_GPR_U32(ctx, 31, 0x3A4EF0u);
    ctx->pc = 0x3A4EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4EE8u;
    // 0x3a4eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5330u, 0x3A4EE8u, 0x3A4EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4EF0u;
label_3a4ef0:
    // 0x3a4ef0: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x3A4EF0u;
    {
        const bool branch_taken_0x3a4ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4ef0) {
            ctx->pc = 0x3A5198u;
            goto label_3a5198;
        }
    }
    ctx->pc = 0x3A4EF8u;
label_3a4ef8:
    // 0x3a4ef8: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x3a4ef8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a4efc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a4efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a4f00: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x3A4F00u;
    {
        const bool branch_taken_0x3a4f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F00u;
        // 0x3a4f04: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4f00) {
            ctx->pc = 0x3A5198u;
            goto label_3a5198;
        }
    }
    ctx->pc = 0x3A4F08u;
label_3a4f08:
    // 0x3a4f08: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3a4f08u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a4f0c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a4f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a4f10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a4f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4f14: 0xc052a3c  jal         func_14A8F0
    ctx->pc = 0x3A4F14u;
    SET_GPR_U32(ctx, 31, 0x3A4F1Cu);
    ctx->pc = 0x3A4F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4F14u;
    // 0x3a4f18: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A8F0u, 0x3A4F14u, 0x3A4F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4F1Cu;
label_3a4f1c:
    // 0x3a4f1c: 0x1440009e  bnez        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x3A4F1Cu;
    {
        const bool branch_taken_0x3a4f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4f1c) {
            ctx->pc = 0x3A5198u;
            goto label_3a5198;
        }
    }
    ctx->pc = 0x3A4F24u;
    // 0x3a4f24: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3a4f24u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a4f28: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3a4f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3a4f2c: 0x24638e40  addiu       $v1, $v1, -0x71C0
    ctx->pc = 0x3a4f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938176));
    // 0x3a4f30: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x3a4f30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3a4f34: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3a4f34u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3a4f38: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3a4f38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a4f3c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3a4f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3a4f40: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3a4f40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a4f44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a4f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a4f48: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x3a4f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a4f4c: 0x4c1003a  bgez        $a2, . + 4 + (0x3A << 2)
    ctx->pc = 0x3A4F4Cu;
    {
        const bool branch_taken_0x3a4f4c = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x3A4F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F4Cu;
        // 0x3a4f50: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4f4c) {
            ctx->pc = 0x3A5038u;
            goto label_3a5038;
        }
    }
    ctx->pc = 0x3A4F54u;
    // 0x3a4f54: 0x10c30028  beq         $a2, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x3A4F54u;
    {
        const bool branch_taken_0x3a4f54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a4f54) {
            ctx->pc = 0x3A4FF8u;
            goto label_3a4ff8;
        }
    }
    ctx->pc = 0x3A4F5Cu;
    // 0x3a4f5c: 0x2403fffa  addiu       $v1, $zero, -0x6
    ctx->pc = 0x3a4f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x3a4f60: 0x10c3001f  beq         $a2, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3A4F60u;
    {
        const bool branch_taken_0x3a4f60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A4F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F60u;
        // 0x3a4f64: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4f60) {
            ctx->pc = 0x3A4FE0u;
            goto label_3a4fe0;
        }
    }
    ctx->pc = 0x3A4F68u;
    // 0x3a4f68: 0x10c3000d  beq         $a2, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3A4F68u;
    {
        const bool branch_taken_0x3a4f68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a4f68) {
            ctx->pc = 0x3A4FA0u;
            goto label_3a4fa0;
        }
    }
    ctx->pc = 0x3A4F70u;
    // 0x3a4f70: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3a4f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3a4f74: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A4F74u;
    {
        const bool branch_taken_0x3a4f74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a4f74) {
            ctx->pc = 0x3A4F88u;
            goto label_3a4f88;
        }
    }
    ctx->pc = 0x3A4F7Cu;
    // 0x3a4f7c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3A4F7Cu;
    {
        const bool branch_taken_0x3a4f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4f7c) {
            ctx->pc = 0x3A4FF8u;
            goto label_3a4ff8;
        }
    }
    ctx->pc = 0x3A4F84u;
    // 0x3a4f84: 0x0  nop
    ctx->pc = 0x3a4f84u;
    // NOP
label_3a4f88:
    // 0x3a4f88: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x3a4f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x3a4f8c: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x3a4f8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3a4f90: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3a4f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3a4f94: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3A4F94u;
    {
        const bool branch_taken_0x3a4f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F94u;
        // 0x3a4f98: 0xa083000c  sb          $v1, 0xC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4f94) {
            ctx->pc = 0x3A5010u;
            goto label_3a5010;
        }
    }
    ctx->pc = 0x3A4F9Cu;
    // 0x3a4f9c: 0x0  nop
    ctx->pc = 0x3a4f9cu;
    // NOP
label_3a4fa0:
    // 0x3a4fa0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3a4fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3a4fa4: 0x24638e3c  addiu       $v1, $v1, -0x71C4
    ctx->pc = 0x3a4fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938172));
    // 0x3a4fa8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a4fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a4fac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a4facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a4fb0: 0x28610137  slti        $at, $v1, 0x137
    ctx->pc = 0x3a4fb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)311) ? 1 : 0);
    // 0x3a4fb4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A4FB4u;
    {
        const bool branch_taken_0x3a4fb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4fb4) {
            ctx->pc = 0x3A4FD0u;
            goto label_3a4fd0;
        }
    }
    ctx->pc = 0x3A4FBCu;
    // 0x3a4fbc: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x3a4fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x3a4fc0: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x3a4fc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3a4fc4: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x3a4fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x3a4fc8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A4FC8u;
    {
        const bool branch_taken_0x3a4fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4FC8u;
        // 0x3a4fcc: 0xa083000c  sb          $v1, 0xC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4fc8) {
            ctx->pc = 0x3A4FE0u;
            goto label_3a4fe0;
        }
    }
    ctx->pc = 0x3A4FD0u;
label_3a4fd0:
    // 0x3a4fd0: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x3a4fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x3a4fd4: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x3a4fd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3a4fd8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x3a4fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x3a4fdc: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x3a4fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
label_3a4fe0:
    // 0x3a4fe0: 0x82030007  lb          $v1, 0x7($s0)
    ctx->pc = 0x3a4fe0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a4fe4: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x3a4fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3a4fe8: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x3a4fe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3a4fec: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3a4fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x3a4ff0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A4FF0u;
    {
        const bool branch_taken_0x3a4ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4FF0u;
        // 0x3a4ff4: 0xa083000c  sb          $v1, 0xC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4ff0) {
            ctx->pc = 0x3A5010u;
            goto label_3a5010;
        }
    }
    ctx->pc = 0x3A4FF8u;
label_3a4ff8:
    // 0x3a4ff8: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x3a4ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
    // 0x3a4ffc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3a4ffcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x3a5000: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x3a5000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3a5004: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x3a5004u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3a5008: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3a5008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3a500c: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x3a500cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
label_3a5010:
    // 0x3a5010: 0x82030007  lb          $v1, 0x7($s0)
    ctx->pc = 0x3a5010u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a5014: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A5014u;
    {
        const bool branch_taken_0x3a5014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5014u;
        // 0x3a5018: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5014) {
            ctx->pc = 0x3A5028u;
            goto label_3a5028;
        }
    }
    ctx->pc = 0x3A501Cu;
    // 0x3a501c: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x3a501cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a5020: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x3A5020u;
    {
        const bool branch_taken_0x3a5020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5020u;
        // 0x3a5024: 0xa2030007  sb          $v1, 0x7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5020) {
            ctx->pc = 0x3A5198u;
            goto label_3a5198;
        }
    }
    ctx->pc = 0x3A5028u;
label_3a5028:
    // 0x3a5028: 0xc0e94cc  jal         func_3A5330
    ctx->pc = 0x3A5028u;
    SET_GPR_U32(ctx, 31, 0x3A5030u);
    ctx->pc = 0x3A502Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5028u;
    // 0x3a502c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5330u, 0x3A5028u, 0x3A5030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5030u;
label_3a5030:
    // 0x3a5030: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x3A5030u;
    {
        const bool branch_taken_0x3a5030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5030) {
            ctx->pc = 0x3A5198u;
            goto label_3a5198;
        }
    }
    ctx->pc = 0x3A5038u;
label_3a5038:
    // 0x3a5038: 0xc0eb678  jal         func_3AD9E0
    ctx->pc = 0x3A5038u;
    SET_GPR_U32(ctx, 31, 0x3A5040u);
    ctx->pc = 0x3A503Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5038u;
    // 0x3a503c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD9E0u, 0x3A5038u, 0x3A5040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5040u;
label_3a5040:
    // 0x3a5040: 0x4410021  bgez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3A5040u;
    {
        const bool branch_taken_0x3a5040 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x3a5040) {
            ctx->pc = 0x3A50C8u;
            goto label_3a50c8;
        }
    }
    ctx->pc = 0x3A5048u;
    // 0x3a5048: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3a5048u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a504c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3a504cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3a5050: 0x24638e3c  addiu       $v1, $v1, -0x71C4
    ctx->pc = 0x3a5050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938172));
    // 0x3a5054: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x3a5054u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3a5058: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3a5058u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3a505c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3a505cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a5060: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3a5060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3a5064: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3a5064u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a5068: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a5068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a506c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a506cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a5070: 0x28610137  slti        $at, $v1, 0x137
    ctx->pc = 0x3a5070u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)311) ? 1 : 0);
    // 0x3a5074: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A5074u;
    {
        const bool branch_taken_0x3a5074 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5074u;
        // 0x3a5078: 0xb02021  addu        $a0, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5074) {
            ctx->pc = 0x3A5090u;
            goto label_3a5090;
        }
    }
    ctx->pc = 0x3A507Cu;
    // 0x3a507c: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x3a507cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3a5080: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x3a5080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x3a5084: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3A5084u;
    {
        const bool branch_taken_0x3a5084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5084u;
        // 0x3a5088: 0xa083000c  sb          $v1, 0xC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5084) {
            ctx->pc = 0x3A50A0u;
            goto label_3a50a0;
        }
    }
    ctx->pc = 0x3A508Cu;
    // 0x3a508c: 0x0  nop
    ctx->pc = 0x3a508cu;
    // NOP
label_3a5090:
    // 0x3a5090: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x3a5090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x3a5094: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x3a5094u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3a5098: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x3a5098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x3a509c: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x3a509cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
label_3a50a0:
    // 0x3a50a0: 0x82030007  lb          $v1, 0x7($s0)
    ctx->pc = 0x3a50a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a50a4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A50A4u;
    {
        const bool branch_taken_0x3a50a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A50A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A50A4u;
        // 0x3a50a8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a50a4) {
            ctx->pc = 0x3A50B8u;
            goto label_3a50b8;
        }
    }
    ctx->pc = 0x3A50ACu;
    // 0x3a50ac: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x3a50acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a50b0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x3A50B0u;
    {
        const bool branch_taken_0x3a50b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A50B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A50B0u;
        // 0x3a50b4: 0xa2030007  sb          $v1, 0x7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a50b0) {
            ctx->pc = 0x3A5198u;
            goto label_3a5198;
        }
    }
    ctx->pc = 0x3A50B8u;
label_3a50b8:
    // 0x3a50b8: 0xc0e94cc  jal         func_3A5330
    ctx->pc = 0x3A50B8u;
    SET_GPR_U32(ctx, 31, 0x3A50C0u);
    ctx->pc = 0x3A50BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A50B8u;
    // 0x3a50bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5330u, 0x3A50B8u, 0x3A50C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A50C0u;
label_3a50c0:
    // 0x3a50c0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x3A50C0u;
    {
        const bool branch_taken_0x3a50c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a50c0) {
            ctx->pc = 0x3A5198u;
            goto label_3a5198;
        }
    }
    ctx->pc = 0x3A50C8u;
label_3a50c8:
    // 0x3a50c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a50c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a50cc: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x3a50ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a50d0: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3a50d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a50d4: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3a50d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a50d8: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a50d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a50dc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3A50DCu;
    {
        const bool branch_taken_0x3a50dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A50E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A50DCu;
        // 0x3a50e0: 0xa2000002  sb          $zero, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a50dc) {
            ctx->pc = 0x3A5198u;
            goto label_3a5198;
        }
    }
    ctx->pc = 0x3A50E4u;
    // 0x3a50e4: 0x0  nop
    ctx->pc = 0x3a50e4u;
    // NOP
label_3a50e8:
    // 0x3a50e8: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3a50e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3a50ec: 0x8c238e98  lw          $v1, -0x7168($at)
    ctx->pc = 0x3a50ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B8E98u));
    // 0x3a50f0: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A50F0u;
    {
        const bool branch_taken_0x3a50f0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3A50F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A50F0u;
        // 0x3a50f4: 0x3c01006c  lui         $at, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a50f0) {
            ctx->pc = 0x3A5108u;
            goto label_3a5108;
        }
    }
    ctx->pc = 0x3A50F8u;
    // 0x3a50f8: 0x8c238f0c  lw          $v1, -0x70F4($at)
    ctx->pc = 0x3a50f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938380)));
    // 0x3a50fc: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A50FCu;
    {
        const bool branch_taken_0x3a50fc = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x3a50fc) {
            ctx->pc = 0x3A5120u;
            goto label_3a5120;
        }
    }
    ctx->pc = 0x3A5104u;
    // 0x3a5104: 0x0  nop
    ctx->pc = 0x3a5104u;
    // NOP
label_3a5108:
    // 0x3a5108: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a5108u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a510c: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3a510cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5110: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a5110u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5114: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3A5114u;
    {
        const bool branch_taken_0x3a5114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5114u;
        // 0x3a5118: 0xa2000002  sb          $zero, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5114) {
            ctx->pc = 0x3A5198u;
            goto label_3a5198;
        }
    }
    ctx->pc = 0x3A511Cu;
    // 0x3a511c: 0x0  nop
    ctx->pc = 0x3a511cu;
    // NOP
label_3a5120:
    // 0x3a5120: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a5120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a5124: 0xc095150  jal         func_254540
    ctx->pc = 0x3A5124u;
    SET_GPR_U32(ctx, 31, 0x3A512Cu);
    ctx->pc = 0x3A5128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5124u;
    // 0x3a5128: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x3A5124u, 0x3A512Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A512Cu;
label_3a512c:
    // 0x3a512c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3A512Cu;
    {
        const bool branch_taken_0x3a512c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A512Cu;
        // 0x3a5130: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a512c) {
            ctx->pc = 0x3A5198u;
            goto label_3a5198;
        }
    }
    ctx->pc = 0x3A5134u;
    // 0x3a5134: 0xc095154  jal         func_254550
    ctx->pc = 0x3A5134u;
    SET_GPR_U32(ctx, 31, 0x3A513Cu);
    ctx->pc = 0x3A5138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5134u;
    // 0x3a5138: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x3A5134u, 0x3A513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A513Cu;
label_3a513c:
    // 0x3a513c: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x3a513cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3a5140: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a5140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a5144: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x3a5144u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x3a5148: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3A5148u;
    {
        const bool branch_taken_0x3a5148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5148u;
        // 0x3a514c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5148) {
            ctx->pc = 0x3A5188u;
            goto label_3a5188;
        }
    }
    ctx->pc = 0x3A5150u;
    // 0x3a5150: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3A5150u;
    {
        const bool branch_taken_0x3a5150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a5150) {
            ctx->pc = 0x3A5188u;
            goto label_3a5188;
        }
    }
    ctx->pc = 0x3A5158u;
    // 0x3a5158: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A5158u;
    {
        const bool branch_taken_0x3a5158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5158) {
            ctx->pc = 0x3A5168u;
            goto label_3a5168;
        }
    }
    ctx->pc = 0x3A5160u;
    // 0x3a5160: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3A5160u;
    {
        const bool branch_taken_0x3a5160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5160) {
            ctx->pc = 0x3A5198u;
            goto label_3a5198;
        }
    }
    ctx->pc = 0x3A5168u;
label_3a5168:
    // 0x3a5168: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3a5168u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a516c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a516cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a5170: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x3a5170u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a5174: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x3a5174u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5178: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a5178u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a517c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a517cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5180: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A5180u;
    {
        const bool branch_taken_0x3a5180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5180u;
        // 0x3a5184: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5180) {
            ctx->pc = 0x3A5198u;
            goto label_3a5198;
        }
    }
    ctx->pc = 0x3A5188u;
label_3a5188:
    // 0x3a5188: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3a5188u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a518c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a518cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5190: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a5190u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5194: 0x0  nop
    ctx->pc = 0x3a5194u;
    // NOP
label_3a5198:
    // 0x3a5198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a5198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a519c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a519cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a51a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A51A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A51A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51A0u;
        // 0x3a51a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A51A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A51A8u;
}
