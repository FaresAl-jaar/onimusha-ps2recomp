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

// Function: sub_003A8AB0
// Address: 0x3a8ab0 - 0x3a8e88
void sub_003A8AB0_0x3a8ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8AB0_0x3a8ab0");
#endif

    switch (ctx->pc) {
        case 0x3a8b0cu: goto label_3a8b0c;
        case 0x3a8b20u: goto label_3a8b20;
        case 0x3a8b3cu: goto label_3a8b3c;
        case 0x3a8b6cu: goto label_3a8b6c;
        case 0x3a8bf0u: goto label_3a8bf0;
        case 0x3a8c04u: goto label_3a8c04;
        case 0x3a8c68u: goto label_3a8c68;
        case 0x3a8cbcu: goto label_3a8cbc;
        case 0x3a8cc8u: goto label_3a8cc8;
        case 0x3a8cdcu: goto label_3a8cdc;
        case 0x3a8d10u: goto label_3a8d10;
        case 0x3a8d90u: goto label_3a8d90;
        case 0x3a8d9cu: goto label_3a8d9c;
        case 0x3a8db0u: goto label_3a8db0;
        case 0x3a8dbcu: goto label_3a8dbc;
        case 0x3a8e0cu: goto label_3a8e0c;
        case 0x3a8e1cu: goto label_3a8e1c;
        default: break;
    }

    ctx->pc = 0x3a8ab0u;

    // 0x3a8ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a8ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a8ab4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a8ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a8ab8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a8ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a8abc: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x3a8abcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3a8ac0: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x3a8ac0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3a8ac4: 0x102000ec  beqz        $at, . + 4 + (0xEC << 2)
    ctx->pc = 0x3A8AC4u;
    {
        const bool branch_taken_0x3a8ac4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8AC4u;
        // 0x3a8ac8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8ac4) {
            ctx->pc = 0x3A8E78u;
            goto label_3a8e78;
        }
    }
    ctx->pc = 0x3A8ACCu;
    // 0x3a8acc: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3a8accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3a8ad0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3a8ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3a8ad4: 0x248428a0  addiu       $a0, $a0, 0x28A0
    ctx->pc = 0x3a8ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10400));
    // 0x3a8ad8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a8ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a8adc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a8adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a8ae0: 0x600008  jr          $v1
    ctx->pc = 0x3A8AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A8AE8u: goto label_3a8ae8;
            case 0x3A8B28u: goto label_3a8b28;
            case 0x3A8B58u: goto label_3a8b58;
            case 0x3A8BC0u: goto label_3a8bc0;
            case 0x3A8C10u: goto label_3a8c10;
            case 0x3A8DC8u: goto label_3a8dc8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8AE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A8AE8u;
label_3a8ae8:
    // 0x3a8ae8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3a8ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a8aec: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x3a8aecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a8af0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a8af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a8af4: 0x82020058  lb          $v0, 0x58($s0)
    ctx->pc = 0x3a8af4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3a8af8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a8af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a8afc: 0xa2020007  sb          $v0, 0x7($s0)
    ctx->pc = 0x3a8afcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a8b00: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x3a8b00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8b04: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A8B04u;
    SET_GPR_U32(ctx, 31, 0x3A8B0Cu);
    ctx->pc = 0x3A8B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8B04u;
    // 0x3a8b08: 0xa200004e  sb          $zero, 0x4E($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A8B04u, 0x3A8B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8B0Cu;
label_3a8b0c:
    // 0x3a8b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a8b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8b10: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x3a8b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x3a8b14: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3a8b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a8b18: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A8B18u;
    SET_GPR_U32(ctx, 31, 0x3A8B20u);
    ctx->pc = 0x3A8B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8B18u;
    // 0x3a8b1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A8B18u, 0x3A8B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8B20u;
label_3a8b20:
    // 0x3a8b20: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x3A8B20u;
    {
        const bool branch_taken_0x3a8b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8b20) {
            ctx->pc = 0x3A8E78u;
            goto label_3a8e78;
        }
    }
    ctx->pc = 0x3A8B28u;
label_3a8b28:
    // 0x3a8b28: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a8b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a8b2c: 0x24848c10  addiu       $a0, $a0, -0x73F0
    ctx->pc = 0x3a8b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    // 0x3a8b30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a8b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8b34: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x3A8B34u;
    SET_GPR_U32(ctx, 31, 0x3A8B3Cu);
    ctx->pc = 0x3A8B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8B34u;
    // 0x3a8b38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149DF0u, 0x3A8B34u, 0x3A8B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8B3Cu;
label_3a8b3c:
    // 0x3a8b3c: 0x1c4000ce  bgtz        $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x3A8B3Cu;
    {
        const bool branch_taken_0x3a8b3c = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x3a8b3c) {
            ctx->pc = 0x3A8E78u;
            goto label_3a8e78;
        }
    }
    ctx->pc = 0x3A8B44u;
    // 0x3a8b44: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x3a8b44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a8b48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a8b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a8b4c: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x3A8B4Cu;
    {
        const bool branch_taken_0x3a8b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B4Cu;
        // 0x3a8b50: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8b4c) {
            ctx->pc = 0x3A8E78u;
            goto label_3a8e78;
        }
    }
    ctx->pc = 0x3A8B54u;
    // 0x3a8b54: 0x0  nop
    ctx->pc = 0x3a8b54u;
    // NOP
label_3a8b58:
    // 0x3a8b58: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a8b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a8b5c: 0x24848c10  addiu       $a0, $a0, -0x73F0
    ctx->pc = 0x3a8b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    // 0x3a8b60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a8b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a8b64: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x3A8B64u;
    SET_GPR_U32(ctx, 31, 0x3A8B6Cu);
    ctx->pc = 0x3A8B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8B64u;
    // 0x3a8b68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149DF0u, 0x3A8B64u, 0x3A8B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8B6Cu;
label_3a8b6c:
    // 0x3a8b6c: 0x1c4000c2  bgtz        $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x3A8B6Cu;
    {
        const bool branch_taken_0x3a8b6c = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x3a8b6c) {
            ctx->pc = 0x3A8E78u;
            goto label_3a8e78;
        }
    }
    ctx->pc = 0x3A8B74u;
    // 0x3a8b74: 0x82030058  lb          $v1, 0x58($s0)
    ctx->pc = 0x3a8b74u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3a8b78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a8b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a8b7c: 0x14650008  bne         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A8B7Cu;
    {
        const bool branch_taken_0x3a8b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3A8B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B7Cu;
        // 0x3a8b80: 0x3c01006c  lui         $at, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8b7c) {
            ctx->pc = 0x3A8BA0u;
            goto label_3a8ba0;
        }
    }
    ctx->pc = 0x3A8B84u;
    // 0x3a8b84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a8b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a8b88: 0x8c248eac  lw          $a0, -0x7154($at)
    ctx->pc = 0x3a8b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938284)));
    // 0x3a8b8c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A8B8Cu;
    {
        const bool branch_taken_0x3a8b8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a8b8c) {
            ctx->pc = 0x3A8BA0u;
            goto label_3a8ba0;
        }
    }
    ctx->pc = 0x3A8B94u;
    // 0x3a8b94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A8B94u;
    {
        const bool branch_taken_0x3a8b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B94u;
        // 0x3a8b98: 0xa2050007  sb          $a1, 0x7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8b94) {
            ctx->pc = 0x3A8BA8u;
            goto label_3a8ba8;
        }
    }
    ctx->pc = 0x3A8B9Cu;
    // 0x3a8b9c: 0x0  nop
    ctx->pc = 0x3a8b9cu;
    // NOP
label_3a8ba0:
    // 0x3a8ba0: 0xa2000007  sb          $zero, 0x7($s0)
    ctx->pc = 0x3a8ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8ba4: 0x0  nop
    ctx->pc = 0x3a8ba4u;
    // NOP
label_3a8ba8:
    // 0x3a8ba8: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x3a8ba8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a8bac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a8bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a8bb0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a8bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a8bb4: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x3a8bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a8bb8: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x3A8BB8u;
    {
        const bool branch_taken_0x3a8bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8BB8u;
        // 0x3a8bbc: 0xa2030005  sb          $v1, 0x5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8bb8) {
            ctx->pc = 0x3A8E78u;
            goto label_3a8e78;
        }
    }
    ctx->pc = 0x3A8BC0u;
label_3a8bc0:
    // 0x3a8bc0: 0x92040009  lbu         $a0, 0x9($s0)
    ctx->pc = 0x3a8bc0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x3a8bc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a8bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a8bc8: 0x148300ab  bne         $a0, $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x3A8BC8u;
    {
        const bool branch_taken_0x3a8bc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a8bc8) {
            ctx->pc = 0x3A8E78u;
            goto label_3a8e78;
        }
    }
    ctx->pc = 0x3A8BD0u;
    // 0x3a8bd0: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x3a8bd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3a8bd4: 0x146000a8  bnez        $v1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x3A8BD4u;
    {
        const bool branch_taken_0x3a8bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a8bd4) {
            ctx->pc = 0x3A8E78u;
            goto label_3a8e78;
        }
    }
    ctx->pc = 0x3A8BDCu;
    // 0x3a8bdc: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3a8bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a8be0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a8be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a8be4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a8be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a8be8: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A8BE8u;
    SET_GPR_U32(ctx, 31, 0x3A8BF0u);
    ctx->pc = 0x3A8BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8BE8u;
    // 0x3a8bec: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A8BE8u, 0x3A8BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8BF0u;
label_3a8bf0:
    // 0x3a8bf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a8bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8bf4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3a8bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3a8bf8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3a8bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a8bfc: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A8BFCu;
    SET_GPR_U32(ctx, 31, 0x3A8C04u);
    ctx->pc = 0x3A8C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8BFCu;
    // 0x3a8c00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A8BFCu, 0x3A8C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8C04u;
label_3a8c04:
    // 0x3a8c04: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x3A8C04u;
    {
        const bool branch_taken_0x3a8c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8c04) {
            ctx->pc = 0x3A8E78u;
            goto label_3a8e78;
        }
    }
    ctx->pc = 0x3A8C0Cu;
    // 0x3a8c0c: 0x0  nop
    ctx->pc = 0x3a8c0cu;
    // NOP
label_3a8c10:
    // 0x3a8c10: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x3a8c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3a8c14: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x3a8c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x3a8c18: 0x344200a0  ori         $v0, $v0, 0xA0
    ctx->pc = 0x3a8c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)160);
    // 0x3a8c1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a8c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a8c20: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A8C20u;
    {
        const bool branch_taken_0x3a8c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8c20) {
            ctx->pc = 0x3A8C68u;
            goto label_3a8c68;
        }
    }
    ctx->pc = 0x3A8C28u;
    // 0x3a8c28: 0x82030007  lb          $v1, 0x7($s0)
    ctx->pc = 0x3a8c28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a8c2c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a8c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a8c30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a8c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a8c34: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a8c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a8c38: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3a8c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3a8c3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a8c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8c40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a8c40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8c44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a8c44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8c48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a8c48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8c4c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a8c4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8c50: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a8c50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8c54: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3a8c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3a8c58: 0xa2030007  sb          $v1, 0x7($s0)
    ctx->pc = 0x3a8c58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a8c5c: 0xa2000053  sb          $zero, 0x53($s0)
    ctx->pc = 0x3a8c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 83), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8c60: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3A8C60u;
    SET_GPR_U32(ctx, 31, 0x3A8C68u);
    ctx->pc = 0x3A8C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8C60u;
    // 0x3a8c64: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3A8C60u, 0x3A8C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8C68u;
label_3a8c68:
    // 0x3a8c68: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x3a8c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3a8c6c: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x3a8c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x3a8c70: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3A8C70u;
    {
        const bool branch_taken_0x3a8c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8c70) {
            ctx->pc = 0x3A8D18u;
            goto label_3a8d18;
        }
    }
    ctx->pc = 0x3A8C78u;
    // 0x3a8c78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a8c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a8c7c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a8c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a8c80: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x3a8c80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a8c84: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3a8c84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3a8c88: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a8c88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8c8c: 0x24428c10  addiu       $v0, $v0, -0x73F0
    ctx->pc = 0x3a8c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937616));
    // 0x3a8c90: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x3a8c90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8c94: 0x24a527f0  addiu       $a1, $a1, 0x27F0
    ctx->pc = 0x3a8c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10224));
    // 0x3a8c98: 0x82040007  lb          $a0, 0x7($s0)
    ctx->pc = 0x3a8c98u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a8c9c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3a8c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3a8ca0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3a8ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a8ca4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a8ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a8ca8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a8ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a8cac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a8cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a8cb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a8cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a8cb4: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x3A8CB4u;
    SET_GPR_U32(ctx, 31, 0x3A8CBCu);
    ctx->pc = 0x3A8CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8CB4u;
    // 0x3a8cb8: 0x24440238  addiu       $a0, $v0, 0x238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x3A8CB4u, 0x3A8CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8CBCu;
label_3a8cbc:
    // 0x3a8cbc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a8cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a8cc0: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A8CC0u;
    SET_GPR_U32(ctx, 31, 0x3A8CC8u);
    ctx->pc = 0x3A8CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8CC0u;
    // 0x3a8cc4: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A8CC0u, 0x3A8CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8CC8u;
label_3a8cc8:
    // 0x3a8cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a8cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8ccc: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x3a8cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3a8cd0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3a8cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3a8cd4: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A8CD4u;
    SET_GPR_U32(ctx, 31, 0x3A8CDCu);
    ctx->pc = 0x3A8CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8CD4u;
    // 0x3a8cd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A8CD4u, 0x3A8CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8CDCu;
label_3a8cdc:
    // 0x3a8cdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a8cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a8ce0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a8ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a8ce4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3a8ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3a8ce8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a8ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a8cec: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3a8cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3a8cf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a8cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8cf4: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3a8cf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3a8cf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a8cf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8cfc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a8cfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8d00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a8d00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8d04: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a8d04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8d08: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3A8D08u;
    SET_GPR_U32(ctx, 31, 0x3A8D10u);
    ctx->pc = 0x3A8D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8D08u;
    // 0x3a8d0c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3A8D08u, 0x3A8D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8D10u;
label_3a8d10:
    // 0x3a8d10: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x3A8D10u;
    {
        const bool branch_taken_0x3a8d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8d10) {
            ctx->pc = 0x3A8E78u;
            goto label_3a8e78;
        }
    }
    ctx->pc = 0x3A8D18u;
label_3a8d18:
    // 0x3a8d18: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x3a8d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x3a8d1c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3A8D1Cu;
    {
        const bool branch_taken_0x3a8d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8d1c) {
            ctx->pc = 0x3A8DB0u;
            goto label_3a8db0;
        }
    }
    ctx->pc = 0x3A8D24u;
    // 0x3a8d24: 0x92020052  lbu         $v0, 0x52($s0)
    ctx->pc = 0x3a8d24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 82)));
    // 0x3a8d28: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A8D28u;
    {
        const bool branch_taken_0x3a8d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8d28) {
            ctx->pc = 0x3A8D50u;
            goto label_3a8d50;
        }
    }
    ctx->pc = 0x3A8D30u;
    // 0x3a8d30: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3a8d30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a8d34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a8d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a8d38: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3a8d38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a8d3c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a8d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8d40: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a8d40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8d44: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3A8D44u;
    {
        const bool branch_taken_0x3a8d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8D44u;
        // 0x3a8d48: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8d44) {
            ctx->pc = 0x3A8DB0u;
            goto label_3a8db0;
        }
    }
    ctx->pc = 0x3A8D4Cu;
    // 0x3a8d4c: 0x0  nop
    ctx->pc = 0x3a8d4cu;
    // NOP
label_3a8d50:
    // 0x3a8d50: 0x920c0002  lbu         $t4, 0x2($s0)
    ctx->pc = 0x3a8d50u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a8d54: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3a8d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3a8d58: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a8d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a8d5c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3a8d5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3a8d60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a8d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a8d64: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a8d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a8d68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a8d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8d6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a8d6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8d70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a8d70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8d74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a8d74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8d78: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a8d78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8d7c: 0x25820001  addiu       $v0, $t4, 0x1
    ctx->pc = 0x3a8d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x3a8d80: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a8d80u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8d84: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x3a8d84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a8d88: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3A8D88u;
    SET_GPR_U32(ctx, 31, 0x3A8D90u);
    ctx->pc = 0x3A8D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8D88u;
    // 0x3a8d8c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3A8D88u, 0x3A8D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8D90u;
label_3a8d90:
    // 0x3a8d90: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a8d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a8d94: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A8D94u;
    SET_GPR_U32(ctx, 31, 0x3A8D9Cu);
    ctx->pc = 0x3A8D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8D94u;
    // 0x3a8d98: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A8D94u, 0x3A8D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8D9Cu;
label_3a8d9c:
    // 0x3a8d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a8d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8da0: 0x2405005e  addiu       $a1, $zero, 0x5E
    ctx->pc = 0x3a8da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x3a8da4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3a8da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a8da8: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A8DA8u;
    SET_GPR_U32(ctx, 31, 0x3A8DB0u);
    ctx->pc = 0x3A8DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8DA8u;
    // 0x3a8dac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A8DA8u, 0x3A8DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8DB0u;
label_3a8db0:
    // 0x3a8db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a8db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8db4: 0xc0eb300  jal         func_3ACC00
    ctx->pc = 0x3A8DB4u;
    SET_GPR_U32(ctx, 31, 0x3A8DBCu);
    ctx->pc = 0x3A8DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8DB4u;
    // 0x3a8db8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACC00u, 0x3A8DB4u, 0x3A8DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8DBCu;
label_3a8dbc:
    // 0x3a8dbc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3A8DBCu;
    {
        const bool branch_taken_0x3a8dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8dbc) {
            ctx->pc = 0x3A8E78u;
            goto label_3a8e78;
        }
    }
    ctx->pc = 0x3A8DC4u;
    // 0x3a8dc4: 0x0  nop
    ctx->pc = 0x3a8dc4u;
    // NOP
label_3a8dc8:
    // 0x3a8dc8: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3a8dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3a8dcc: 0x8c238e98  lw          $v1, -0x7168($at)
    ctx->pc = 0x3a8dccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B8E98u));
    // 0x3a8dd0: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A8DD0u;
    {
        const bool branch_taken_0x3a8dd0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3A8DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8DD0u;
        // 0x3a8dd4: 0x3c01006c  lui         $at, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8dd0) {
            ctx->pc = 0x3A8DE8u;
            goto label_3a8de8;
        }
    }
    ctx->pc = 0x3A8DD8u;
    // 0x3a8dd8: 0x8c238f0c  lw          $v1, -0x70F4($at)
    ctx->pc = 0x3a8dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938380)));
    // 0x3a8ddc: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A8DDCu;
    {
        const bool branch_taken_0x3a8ddc = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x3a8ddc) {
            ctx->pc = 0x3A8E00u;
            goto label_3a8e00;
        }
    }
    ctx->pc = 0x3A8DE4u;
    // 0x3a8de4: 0x0  nop
    ctx->pc = 0x3a8de4u;
    // NOP
label_3a8de8:
    // 0x3a8de8: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a8de8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8dec: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3a8decu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8df0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a8df0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8df4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3A8DF4u;
    {
        const bool branch_taken_0x3a8df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8DF4u;
        // 0x3a8df8: 0xa2000002  sb          $zero, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8df4) {
            ctx->pc = 0x3A8E78u;
            goto label_3a8e78;
        }
    }
    ctx->pc = 0x3A8DFCu;
    // 0x3a8dfc: 0x0  nop
    ctx->pc = 0x3a8dfcu;
    // NOP
label_3a8e00:
    // 0x3a8e00: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a8e00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a8e04: 0xc095150  jal         func_254540
    ctx->pc = 0x3A8E04u;
    SET_GPR_U32(ctx, 31, 0x3A8E0Cu);
    ctx->pc = 0x3A8E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8E04u;
    // 0x3a8e08: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x3A8E04u, 0x3A8E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8E0Cu;
label_3a8e0c:
    // 0x3a8e0c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3A8E0Cu;
    {
        const bool branch_taken_0x3a8e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8E0Cu;
        // 0x3a8e10: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8e0c) {
            ctx->pc = 0x3A8E78u;
            goto label_3a8e78;
        }
    }
    ctx->pc = 0x3A8E14u;
    // 0x3a8e14: 0xc095154  jal         func_254550
    ctx->pc = 0x3A8E14u;
    SET_GPR_U32(ctx, 31, 0x3A8E1Cu);
    ctx->pc = 0x3A8E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8E14u;
    // 0x3a8e18: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x3A8E14u, 0x3A8E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8E1Cu;
label_3a8e1c:
    // 0x3a8e1c: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x3a8e1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3a8e20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a8e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a8e24: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x3a8e24u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x3a8e28: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3A8E28u;
    {
        const bool branch_taken_0x3a8e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A8E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8E28u;
        // 0x3a8e2c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8e28) {
            ctx->pc = 0x3A8E60u;
            goto label_3a8e60;
        }
    }
    ctx->pc = 0x3A8E30u;
    // 0x3a8e30: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3A8E30u;
    {
        const bool branch_taken_0x3a8e30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a8e30) {
            ctx->pc = 0x3A8E60u;
            goto label_3a8e60;
        }
    }
    ctx->pc = 0x3A8E38u;
    // 0x3a8e38: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A8E38u;
    {
        const bool branch_taken_0x3a8e38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8e38) {
            ctx->pc = 0x3A8E48u;
            goto label_3a8e48;
        }
    }
    ctx->pc = 0x3A8E40u;
    // 0x3a8e40: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3A8E40u;
    {
        const bool branch_taken_0x3a8e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8e40) {
            ctx->pc = 0x3A8E78u;
            goto label_3a8e78;
        }
    }
    ctx->pc = 0x3A8E48u;
label_3a8e48:
    // 0x3a8e48: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a8e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a8e4c: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x3a8e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a8e50: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a8e50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8e54: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3a8e54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8e58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A8E58u;
    {
        const bool branch_taken_0x3a8e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8E58u;
        // 0x3a8e5c: 0xa6000016  sh          $zero, 0x16($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8e58) {
            ctx->pc = 0x3A8E78u;
            goto label_3a8e78;
        }
    }
    ctx->pc = 0x3A8E60u;
label_3a8e60:
    // 0x3a8e60: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3a8e60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a8e64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a8e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a8e68: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x3a8e68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a8e6c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a8e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8e70: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a8e70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8e74: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a8e74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_3a8e78:
    // 0x3a8e78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a8e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a8e7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a8e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a8e80: 0x3e00008  jr          $ra
    ctx->pc = 0x3A8E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A8E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8E80u;
        // 0x3a8e84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A8E88u;
}
