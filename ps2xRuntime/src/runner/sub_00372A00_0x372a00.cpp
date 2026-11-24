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

// Function: sub_00372A00
// Address: 0x372a00 - 0x372c48
void sub_00372A00_0x372a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372A00_0x372a00");
#endif

    switch (ctx->pc) {
        case 0x372a54u: goto label_372a54;
        case 0x372a84u: goto label_372a84;
        case 0x372a98u: goto label_372a98;
        case 0x372adcu: goto label_372adc;
        case 0x372aecu: goto label_372aec;
        case 0x372afcu: goto label_372afc;
        case 0x372b0cu: goto label_372b0c;
        case 0x372b20u: goto label_372b20;
        case 0x372b30u: goto label_372b30;
        case 0x372b60u: goto label_372b60;
        case 0x372b70u: goto label_372b70;
        case 0x372b80u: goto label_372b80;
        case 0x372b90u: goto label_372b90;
        case 0x372c08u: goto label_372c08;
        case 0x372c24u: goto label_372c24;
        case 0x372c38u: goto label_372c38;
        default: break;
    }

    ctx->pc = 0x372a00u;

    // 0x372a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x372a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x372a04: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x372a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x372a08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x372a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x372a0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x372a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x372a10: 0x90850020  lbu         $a1, 0x20($a0)
    ctx->pc = 0x372a10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x372a14: 0x10a30086  beq         $a1, $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x372A14u;
    {
        const bool branch_taken_0x372a14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x372A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372A14u;
        // 0x372a18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372a14) {
            ctx->pc = 0x372C30u;
            goto label_372c30;
        }
    }
    ctx->pc = 0x372A1Cu;
    // 0x372a1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x372a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x372a20: 0x10a30059  beq         $a1, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x372A20u;
    {
        const bool branch_taken_0x372a20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x372A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372A20u;
        // 0x372a24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372a20) {
            ctx->pc = 0x372B88u;
            goto label_372b88;
        }
    }
    ctx->pc = 0x372A28u;
    // 0x372a28: 0x10a3003f  beq         $a1, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x372A28u;
    {
        const bool branch_taken_0x372a28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x372a28) {
            ctx->pc = 0x372B28u;
            goto label_372b28;
        }
    }
    ctx->pc = 0x372A30u;
    // 0x372a30: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x372A30u;
    {
        const bool branch_taken_0x372a30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x372a30) {
            ctx->pc = 0x372A40u;
            goto label_372a40;
        }
    }
    ctx->pc = 0x372A38u;
    // 0x372a38: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x372A38u;
    {
        const bool branch_taken_0x372a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372a38) {
            ctx->pc = 0x372C38u;
            goto label_372c38;
        }
    }
    ctx->pc = 0x372A40u;
label_372a40:
    // 0x372a40: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x372a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x372a44: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x372a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x372a48: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x372a48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x372a4c: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x372A4Cu;
    SET_GPR_U32(ctx, 31, 0x372A54u);
    ctx->pc = 0x372A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372A4Cu;
    // 0x372a50: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x372A4Cu, 0x372A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372A54u;
label_372a54:
    // 0x372a54: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x372a54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x372a58: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x372a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x372a5c: 0x2442ace0  addiu       $v0, $v0, -0x5320
    ctx->pc = 0x372a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946016));
    // 0x372a60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x372a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x372a64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x372a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x372a68: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x372a68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x372a6c: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x372a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
    // 0x372a70: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x372a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x372a74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x372A74u;
    {
        const bool branch_taken_0x372a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x372a74) {
            ctx->pc = 0x372A90u;
            goto label_372a90;
        }
    }
    ctx->pc = 0x372A7Cu;
    // 0x372a7c: 0xc09c424  jal         func_271090
    ctx->pc = 0x372A7Cu;
    SET_GPR_U32(ctx, 31, 0x372A84u);
    ctx->pc = 0x271090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271090u, 0x372A7Cu, 0x372A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372A84u;
label_372a84:
    // 0x372a84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x372A84u;
    {
        const bool branch_taken_0x372a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372a84) {
            ctx->pc = 0x372A98u;
            goto label_372a98;
        }
    }
    ctx->pc = 0x372A8Cu;
    // 0x372a8c: 0x0  nop
    ctx->pc = 0x372a8cu;
    // NOP
label_372a90:
    // 0x372a90: 0xc09c3c8  jal         func_270F20
    ctx->pc = 0x372A90u;
    SET_GPR_U32(ctx, 31, 0x372A98u);
    ctx->pc = 0x270F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270F20u, 0x372A90u, 0x372A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372A98u;
label_372a98:
    // 0x372a98: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x372a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x372a9c: 0x8c26ceb8  lw          $a2, -0x3148($at)
    ctx->pc = 0x372a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x372aa0: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x372aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x372aa4: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x372aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x372aa8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x372aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x372aac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x372aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x372ab0: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x372ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x372ab4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x372ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x372ab8: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x372ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x372abc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x372abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x372ac0: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x372ac0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x372ac4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x372ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x372ac8: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x372ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x372acc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x372accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x372ad0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x372ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x372ad4: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x372AD4u;
    SET_GPR_U32(ctx, 31, 0x372ADCu);
    ctx->pc = 0x372AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372AD4u;
    // 0x372ad8: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x372AD4u, 0x372ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372ADCu;
label_372adc:
    // 0x372adc: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x372adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x372ae0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x372ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x372ae4: 0xc04ca14  jal         func_132850
    ctx->pc = 0x372AE4u;
    SET_GPR_U32(ctx, 31, 0x372AECu);
    ctx->pc = 0x372AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372AE4u;
    // 0x372ae8: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x372AE4u, 0x372AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372AECu;
label_372aec:
    // 0x372aec: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x372aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x372af0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x372af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x372af4: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x372AF4u;
    SET_GPR_U32(ctx, 31, 0x372AFCu);
    ctx->pc = 0x372AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372AF4u;
    // 0x372af8: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x372AF4u, 0x372AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372AFCu;
label_372afc:
    // 0x372afc: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x372afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x372b00: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x372b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x372b04: 0xc04ca14  jal         func_132850
    ctx->pc = 0x372B04u;
    SET_GPR_U32(ctx, 31, 0x372B0Cu);
    ctx->pc = 0x372B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372B04u;
    // 0x372b08: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x372B04u, 0x372B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372B0Cu;
label_372b0c:
    // 0x372b0c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x372b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x372b10: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x372b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x372b14: 0x8c22fc98  lw          $v0, -0x368($at)
    ctx->pc = 0x372b14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81FC98u));
    // 0x372b18: 0xc0550b0  jal         func_1542C0
    ctx->pc = 0x372B18u;
    SET_GPR_U32(ctx, 31, 0x372B20u);
    ctx->pc = 0x372B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372B18u;
    // 0x372b1c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542C0u, 0x372B18u, 0x372B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372B20u;
label_372b20:
    // 0x372b20: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x372B20u;
    {
        const bool branch_taken_0x372b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372b20) {
            ctx->pc = 0x372C38u;
            goto label_372c38;
        }
    }
    ctx->pc = 0x372B28u;
label_372b28:
    // 0x372b28: 0xc05551c  jal         func_155470
    ctx->pc = 0x372B28u;
    SET_GPR_U32(ctx, 31, 0x372B30u);
    ctx->pc = 0x372B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372B28u;
    // 0x372b2c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155470u, 0x372B28u, 0x372B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372B30u;
label_372b30:
    // 0x372b30: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x372B30u;
    {
        const bool branch_taken_0x372b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x372b30) {
            ctx->pc = 0x372C38u;
            goto label_372c38;
        }
    }
    ctx->pc = 0x372B38u;
    // 0x372b38: 0x92030020  lbu         $v1, 0x20($s0)
    ctx->pc = 0x372b38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x372b3c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x372b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x372b40: 0x2442ace0  addiu       $v0, $v0, -0x5320
    ctx->pc = 0x372b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946016));
    // 0x372b44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x372b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x372b48: 0xa2030020  sb          $v1, 0x20($s0)
    ctx->pc = 0x372b48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x372b4c: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x372b4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x372b50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x372b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x372b54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x372b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x372b58: 0xc0c70c8  jal         func_31C320
    ctx->pc = 0x372B58u;
    SET_GPR_U32(ctx, 31, 0x372B60u);
    ctx->pc = 0x372B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372B58u;
    // 0x372b5c: 0x94440000  lhu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C320u, 0x372B58u, 0x372B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372B60u;
label_372b60:
    // 0x372b60: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x372b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x372b64: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x372b64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x372b68: 0xc0f0140  jal         func_3C0500
    ctx->pc = 0x372B68u;
    SET_GPR_U32(ctx, 31, 0x372B70u);
    ctx->pc = 0x372B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372B68u;
    // 0x372b6c: 0x2484fee0  addiu       $a0, $a0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0500u, 0x372B68u, 0x372B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372B70u;
label_372b70:
    // 0x372b70: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x372b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x372b74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x372b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372b78: 0xc052ec4  jal         func_14BB10
    ctx->pc = 0x372B78u;
    SET_GPR_U32(ctx, 31, 0x372B80u);
    ctx->pc = 0x372B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372B78u;
    // 0x372b7c: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BB10u, 0x372B78u, 0x372B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372B80u;
label_372b80:
    // 0x372b80: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x372B80u;
    {
        const bool branch_taken_0x372b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372b80) {
            ctx->pc = 0x372C38u;
            goto label_372c38;
        }
    }
    ctx->pc = 0x372B88u;
label_372b88:
    // 0x372b88: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x372B88u;
    SET_GPR_U32(ctx, 31, 0x372B90u);
    ctx->pc = 0x372B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372B88u;
    // 0x372b8c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x372B88u, 0x372B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372B90u;
label_372b90:
    // 0x372b90: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x372B90u;
    {
        const bool branch_taken_0x372b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x372b90) {
            ctx->pc = 0x372C38u;
            goto label_372c38;
        }
    }
    ctx->pc = 0x372B98u;
    // 0x372b98: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x372b98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x372b9c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x372b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x372ba0: 0x2442ace0  addiu       $v0, $v0, -0x5320
    ctx->pc = 0x372ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946016));
    // 0x372ba4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x372ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x372ba8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x372ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x372bac: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x372bacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x372bb0: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x372bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
    // 0x372bb4: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x372bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x372bb8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x372BB8u;
    {
        const bool branch_taken_0x372bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372BB8u;
        // 0x372bbc: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372bb8) {
            ctx->pc = 0x372BD8u;
            goto label_372bd8;
        }
    }
    ctx->pc = 0x372BC0u;
    // 0x372bc0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x372bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x372bc4: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x372bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x372bc8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x372bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x372bcc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x372bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x372bd0: 0xac22ceb8  sw          $v0, -0x3148($at)
    ctx->pc = 0x372bd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x372bd4: 0x0  nop
    ctx->pc = 0x372bd4u;
    // NOP
label_372bd8:
    // 0x372bd8: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x372bd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x372bdc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x372bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x372be0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x372be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x372be4: 0x2442ace2  addiu       $v0, $v0, -0x531E
    ctx->pc = 0x372be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946018));
    // 0x372be8: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x372be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x372bec: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x372becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x372bf0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x372bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x372bf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x372bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x372bf8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x372bf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x372bfc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x372bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x372c00: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x372C00u;
    SET_GPR_U32(ctx, 31, 0x372C08u);
    ctx->pc = 0x372C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372C00u;
    // 0x372c04: 0x24460d0e  addiu       $a2, $v0, 0xD0E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3342));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x372C00u, 0x372C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372C08u;
label_372c08:
    // 0x372c08: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x372c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x372c0c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x372c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x372c10: 0x92020020  lbu         $v0, 0x20($s0)
    ctx->pc = 0x372c10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x372c14: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x372c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x372c18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x372c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x372c1c: 0xc0c2e84  jal         func_30BA10
    ctx->pc = 0x372C1Cu;
    SET_GPR_U32(ctx, 31, 0x372C24u);
    ctx->pc = 0x372C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372C1Cu;
    // 0x372c20: 0xa2020020  sb          $v0, 0x20($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA10u, 0x372C1Cu, 0x372C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372C24u;
label_372c24:
    // 0x372c24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x372C24u;
    {
        const bool branch_taken_0x372c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372c24) {
            ctx->pc = 0x372C38u;
            goto label_372c38;
        }
    }
    ctx->pc = 0x372C2Cu;
    // 0x372c2c: 0x0  nop
    ctx->pc = 0x372c2cu;
    // NOP
label_372c30:
    // 0x372c30: 0xc0dcbb8  jal         func_372EE0
    ctx->pc = 0x372C30u;
    SET_GPR_U32(ctx, 31, 0x372C38u);
    ctx->pc = 0x372EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372EE0u, 0x372C30u, 0x372C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372C38u;
label_372c38:
    // 0x372c38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x372c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x372c3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x372c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372c40: 0x3e00008  jr          $ra
    ctx->pc = 0x372C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372C40u;
        // 0x372c44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372C48u;
}
