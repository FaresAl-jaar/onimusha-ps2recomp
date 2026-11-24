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

// Function: sub_001CF920
// Address: 0x1cf920 - 0x1cfa48
void sub_001CF920_0x1cf920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF920_0x1cf920");
#endif

    switch (ctx->pc) {
        case 0x1cf970u: goto label_1cf970;
        case 0x1cfa08u: goto label_1cfa08;
        case 0x1cfa24u: goto label_1cfa24;
        default: break;
    }

    ctx->pc = 0x1cf920u;

    // 0x1cf920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf924: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cf924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf928: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cf928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cf92c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cf92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cf930: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf934: 0x90843022  lbu         $a0, 0x3022($a0)
    ctx->pc = 0x1cf934u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12322)));
    // 0x1cf938: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1CF938u;
    {
        const bool branch_taken_0x1cf938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cf938) {
            ctx->pc = 0x1CF968u;
            goto label_1cf968;
        }
    }
    ctx->pc = 0x1CF940u;
    // 0x1cf940: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF940u;
    {
        const bool branch_taken_0x1cf940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf940) {
            ctx->pc = 0x1CF950u;
            goto label_1cf950;
        }
    }
    ctx->pc = 0x1CF948u;
    // 0x1cf948: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1CF948u;
    {
        const bool branch_taken_0x1cf948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf948) {
            ctx->pc = 0x1CFA38u;
            goto label_1cfa38;
        }
    }
    ctx->pc = 0x1CF950u;
label_1cf950:
    // 0x1cf950: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cf950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cf954: 0x9022cea4  lbu         $v0, -0x315C($at)
    ctx->pc = 0x1cf954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x1cf958: 0xa2023023  sb          $v0, 0x3023($s0)
    ctx->pc = 0x1cf958u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12323), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cf95c: 0x92023022  lbu         $v0, 0x3022($s0)
    ctx->pc = 0x1cf95cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12322)));
    // 0x1cf960: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cf960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cf964: 0xa2023022  sb          $v0, 0x3022($s0)
    ctx->pc = 0x1cf964u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12322), (uint8_t)GPR_U32(ctx, 2));
label_1cf968:
    // 0x1cf968: 0xc074050  jal         func_1D0140
    ctx->pc = 0x1CF968u;
    SET_GPR_U32(ctx, 31, 0x1CF970u);
    ctx->pc = 0x1CF96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF968u;
    // 0x1cf96c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0140u, 0x1CF968u, 0x1CF970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF970u;
label_1cf970:
    // 0x1cf970: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1CF970u;
    {
        const bool branch_taken_0x1cf970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF970u;
        // 0x1cf974: 0x3c010041  lui         $at, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf970) {
            ctx->pc = 0x1CFA38u;
            goto label_1cfa38;
        }
    }
    ctx->pc = 0x1CF978u;
    // 0x1cf978: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1cf978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1cf97c: 0xac20fcec  sw          $zero, -0x314($at)
    ctx->pc = 0x1cf97cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966508), GPR_U32(ctx, 0));
    // 0x1cf980: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1cf980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cf984: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1cf984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1cf988: 0x24a5fcd0  addiu       $a1, $a1, -0x330
    ctx->pc = 0x1cf988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966480));
    // 0x1cf98c: 0xac22fce4  sw          $v0, -0x31C($at)
    ctx->pc = 0x1cf98cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x40FCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40FCE4u, _value); } while (0);
    // 0x1cf990: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cf990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf994: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1cf994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1cf998: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1cf998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1cf99c: 0xac22fce8  sw          $v0, -0x318($at)
    ctx->pc = 0x1cf99cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x40FCE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40FCE8u, _value); } while (0);
    // 0x1cf9a0: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1cf9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1cf9a4: 0xac20fcf0  sw          $zero, -0x310($at)
    ctx->pc = 0x1cf9a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x40FCF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40FCF0u, _value); } while (0);
    // 0x1cf9a8: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1cf9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1cf9ac: 0x9029fd04  lbu         $t1, -0x2FC($at)
    ctx->pc = 0x1cf9acu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)FAST_READ8(0x40FD04u));
    // 0x1cf9b0: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1cf9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1cf9b4: 0x92400  sll         $a0, $t1, 16
    ctx->pc = 0x1cf9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x1cf9b8: 0x9027fd05  lbu         $a3, -0x2FB($at)
    ctx->pc = 0x1cf9b8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966533)));
    // 0x1cf9bc: 0x91a00  sll         $v1, $t1, 8
    ctx->pc = 0x1cf9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x1cf9c0: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1cf9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1cf9c4: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x1cf9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x1cf9c8: 0x9422fd02  lhu         $v0, -0x2FE($at)
    ctx->pc = 0x1cf9c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294966530)));
    // 0x1cf9cc: 0xe42025  or          $a0, $a3, $a0
    ctx->pc = 0x1cf9ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x1cf9d0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1cf9d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1cf9d4: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1cf9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1cf9d8: 0xac22fcd0  sw          $v0, -0x330($at)
    ctx->pc = 0x1cf9d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x40FCD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40FCD0u, _value); } while (0);
    // 0x1cf9dc: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1cf9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1cf9e0: 0xac22fcd4  sw          $v0, -0x32C($at)
    ctx->pc = 0x1cf9e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x40FCD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40FCD4u, _value); } while (0);
    // 0x1cf9e4: 0x1231025  or          $v0, $t1, $v1
    ctx->pc = 0x1cf9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x1cf9e8: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1cf9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1cf9ec: 0xac22fcd8  sw          $v0, -0x328($at)
    ctx->pc = 0x1cf9ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x40FCD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40FCD8u, _value); } while (0);
    // 0x1cf9f0: 0xae003028  sw          $zero, 0x3028($s0)
    ctx->pc = 0x1cf9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12328), GPR_U32(ctx, 0));
    // 0x1cf9f4: 0xa2003026  sb          $zero, 0x3026($s0)
    ctx->pc = 0x1cf9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12326), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf9f8: 0x8e043030  lw          $a0, 0x3030($s0)
    ctx->pc = 0x1cf9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12336)));
    // 0x1cf9fc: 0x92073026  lbu         $a3, 0x3026($s0)
    ctx->pc = 0x1cf9fcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12326)));
    // 0x1cfa00: 0xc073538  jal         func_1CD4E0
    ctx->pc = 0x1CFA00u;
    SET_GPR_U32(ctx, 31, 0x1CFA08u);
    ctx->pc = 0x1CFA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFA00u;
    // 0x1cfa04: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD4E0u, 0x1CFA00u, 0x1CFA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFA08u;
label_1cfa08:
    // 0x1cfa08: 0x8e043034  lw          $a0, 0x3034($s0)
    ctx->pc = 0x1cfa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12340)));
    // 0x1cfa0c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1cfa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1cfa10: 0x92073026  lbu         $a3, 0x3026($s0)
    ctx->pc = 0x1cfa10u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12326)));
    // 0x1cfa14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cfa14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfa18: 0x24a5fcd0  addiu       $a1, $a1, -0x330
    ctx->pc = 0x1cfa18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966480));
    // 0x1cfa1c: 0xc073538  jal         func_1CD4E0
    ctx->pc = 0x1CFA1Cu;
    SET_GPR_U32(ctx, 31, 0x1CFA24u);
    ctx->pc = 0x1CFA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFA1Cu;
    // 0x1cfa20: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD4E0u, 0x1CFA1Cu, 0x1CFA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFA24u;
label_1cfa24:
    // 0x1cfa24: 0x92043022  lbu         $a0, 0x3022($s0)
    ctx->pc = 0x1cfa24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12322)));
    // 0x1cfa28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cfa28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfa2c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1cfa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cfa30: 0xa2043022  sb          $a0, 0x3022($s0)
    ctx->pc = 0x1cfa30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12322), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cfa34: 0xa2033021  sb          $v1, 0x3021($s0)
    ctx->pc = 0x1cfa34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12321), (uint8_t)GPR_U32(ctx, 3));
label_1cfa38:
    // 0x1cfa38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cfa38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfa3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cfa3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfa40: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA40u;
        // 0x1cfa44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFA48u;
}
