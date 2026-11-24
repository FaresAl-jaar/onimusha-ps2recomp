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

// Function: sub_0017A070
// Address: 0x17a070 - 0x17a204
void sub_0017A070_0x17a070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A070_0x17a070");
#endif

    switch (ctx->pc) {
        case 0x17a084u: goto label_17a084;
        case 0x17a090u: goto label_17a090;
        case 0x17a09cu: goto label_17a09c;
        case 0x17a110u: goto label_17a110;
        case 0x17a120u: goto label_17a120;
        case 0x17a138u: goto label_17a138;
        case 0x17a148u: goto label_17a148;
        case 0x17a150u: goto label_17a150;
        case 0x17a168u: goto label_17a168;
        case 0x17a184u: goto label_17a184;
        case 0x17a198u: goto label_17a198;
        case 0x17a1c8u: goto label_17a1c8;
        case 0x17a1f4u: goto label_17a1f4;
        default: break;
    }

    ctx->pc = 0x17a070u;

    // 0x17a070: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x17a070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x17a074: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17a078: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a07c: 0xc054658  jal         func_151960
    ctx->pc = 0x17A07Cu;
    SET_GPR_U32(ctx, 31, 0x17A084u);
    ctx->pc = 0x17A080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A07Cu;
    // 0x17a080: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151960u, 0x17A07Cu, 0x17A084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A084u;
label_17a084:
    // 0x17a084: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x17a084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x17a088: 0xc0546d0  jal         func_151B40
    ctx->pc = 0x17A088u;
    SET_GPR_U32(ctx, 31, 0x17A090u);
    ctx->pc = 0x17A08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A088u;
    // 0x17a08c: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151B40u, 0x17A088u, 0x17A090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A090u;
label_17a090:
    // 0x17a090: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17a090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a094: 0xc054a10  jal         func_152840
    ctx->pc = 0x17A094u;
    SET_GPR_U32(ctx, 31, 0x17A09Cu);
    ctx->pc = 0x17A098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A094u;
    // 0x17a098: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152840u, 0x17A094u, 0x17A09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A09Cu;
label_17a09c:
    // 0x17a09c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a0a0: 0x3c020011  lui         $v0, 0x11
    ctx->pc = 0x17a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17 << 16));
    // 0x17a0a4: 0xa4206b5a  sh          $zero, 0x6B5A($at)
    ctx->pc = 0x17a0a4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7E6B5Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7E6B5Au, _value); } while (0);
    // 0x17a0a8: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x17a0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x17a0ac: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a0b0: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x17a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x17a0b4: 0xac236b40  sw          $v1, 0x6B40($at)
    ctx->pc = 0x17a0b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7E6B40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6B40u, _value); } while (0);
    // 0x17a0b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x17a0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x17a0bc: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a0c0: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x17a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x17a0c4: 0xac226b44  sw          $v0, 0x6B44($at)
    ctx->pc = 0x17a0c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E6B44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6B44u, _value); } while (0);
    // 0x17a0c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a0cc: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a0d0: 0xac226b48  sw          $v0, 0x6B48($at)
    ctx->pc = 0x17a0d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E6B48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6B48u, _value); } while (0);
    // 0x17a0d4: 0x24021047  addiu       $v0, $zero, 0x1047
    ctx->pc = 0x17a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4167));
    // 0x17a0d8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a0dc: 0xac226b4c  sw          $v0, 0x6B4C($at)
    ctx->pc = 0x17a0dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E6B4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6B4Cu, _value); } while (0);
    // 0x17a0e0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a0e4: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x17a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x17a0e8: 0xa4236b50  sh          $v1, 0x6B50($at)
    ctx->pc = 0x17a0e8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7E6B50u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7E6B50u, _value); } while (0);
    // 0x17a0ec: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a0f0: 0xa4226b58  sh          $v0, 0x6B58($at)
    ctx->pc = 0x17a0f0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E6B58u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7E6B58u, _value); } while (0);
    // 0x17a0f4: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a0f8: 0xa4236b52  sh          $v1, 0x6B52($at)
    ctx->pc = 0x17a0f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7E6B52u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7E6B52u, _value); } while (0);
    // 0x17a0fc: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a100: 0xa4236b54  sh          $v1, 0x6B54($at)
    ctx->pc = 0x17a100u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7E6B54u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7E6B54u, _value); } while (0);
    // 0x17a104: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a108: 0xa4236b56  sh          $v1, 0x6B56($at)
    ctx->pc = 0x17a108u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7E6B56u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7E6B56u, _value); } while (0);
    // 0x17a10c: 0x0  nop
    ctx->pc = 0x17a10cu;
    // NOP
label_17a110:
    // 0x17a110: 0x3c05007e  lui         $a1, 0x7E
    ctx->pc = 0x17a110u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)126 << 16));
    // 0x17a114: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17a114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17a118: 0xc0545a0  jal         func_151680
    ctx->pc = 0x17A118u;
    SET_GPR_U32(ctx, 31, 0x17A120u);
    ctx->pc = 0x17A11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A118u;
    // 0x17a11c: 0x24a56b40  addiu       $a1, $a1, 0x6B40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151680u, 0x17A118u, 0x17A120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A120u;
label_17a120:
    // 0x17a120: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x17a120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x17a124: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x17a124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x17a128: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x17a128u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x17a12c: 0x248454f0  addiu       $a0, $a0, 0x54F0
    ctx->pc = 0x17a12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21744));
    // 0x17a130: 0xc045c78  jal         func_1171E0
    ctx->pc = 0x17A130u;
    SET_GPR_U32(ctx, 31, 0x17A138u);
    ctx->pc = 0x17A134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A130u;
    // 0x17a134: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1171E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1171E0u, 0x17A130u, 0x17A138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A138u;
label_17a138:
    // 0x17a138: 0x440fff5  bltz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17A138u;
    {
        const bool branch_taken_0x17a138 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x17a138) {
            ctx->pc = 0x17A110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a110;
        }
    }
    ctx->pc = 0x17A140u;
    // 0x17a140: 0xc054684  jal         func_151A10
    ctx->pc = 0x17A140u;
    SET_GPR_U32(ctx, 31, 0x17A148u);
    ctx->pc = 0x151A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151A10u, 0x17A140u, 0x17A148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A148u;
label_17a148:
    // 0x17a148: 0xc0546b0  jal         func_151AC0
    ctx->pc = 0x17A148u;
    SET_GPR_U32(ctx, 31, 0x17A150u);
    ctx->pc = 0x151AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151AC0u, 0x17A148u, 0x17A150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A150u;
label_17a150:
    // 0x17a150: 0x3c05007e  lui         $a1, 0x7E
    ctx->pc = 0x17a150u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)126 << 16));
    // 0x17a154: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a158: 0x3c040007  lui         $a0, 0x7
    ctx->pc = 0x17a158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
    // 0x17a15c: 0x24a56c40  addiu       $a1, $a1, 0x6C40
    ctx->pc = 0x17a15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27712));
    // 0x17a160: 0xc054738  jal         func_151CE0
    ctx->pc = 0x17A160u;
    SET_GPR_U32(ctx, 31, 0x17A168u);
    ctx->pc = 0x17A164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A160u;
    // 0x17a164: 0xac206c48  sw          $zero, 0x6C48($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 27720), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151CE0u, 0x17A160u, 0x17A168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A168u;
label_17a168:
    // 0x17a168: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x17a168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x17a16c: 0xae002cc0  sw          $zero, 0x2CC0($s0)
    ctx->pc = 0x17a16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11456), GPR_U32(ctx, 0));
    // 0x17a170: 0x24846c40  addiu       $a0, $a0, 0x6C40
    ctx->pc = 0x17a170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27712));
    // 0x17a174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17a174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a178: 0x24060320  addiu       $a2, $zero, 0x320
    ctx->pc = 0x17a178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x17a17c: 0xc049590  jal         func_125640
    ctx->pc = 0x17A17Cu;
    SET_GPR_U32(ctx, 31, 0x17A184u);
    ctx->pc = 0x17A180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A17Cu;
    // 0x17a180: 0xae002cc4  sw          $zero, 0x2CC4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 11460), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x17A17Cu, 0x17A184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A184u;
label_17a184:
    // 0x17a184: 0x3c03007e  lui         $v1, 0x7E
    ctx->pc = 0x17a184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)126 << 16));
    // 0x17a188: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x17a188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x17a18c: 0x24636f40  addiu       $v1, $v1, 0x6F40
    ctx->pc = 0x17a18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28480));
    // 0x17a190: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x17a190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17a194: 0x0  nop
    ctx->pc = 0x17a194u;
    // NOP
label_17a198:
    // 0x17a198: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x17a198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x17a19c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x17a19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x17a1a0: 0xa0620027  sb          $v0, 0x27($v1)
    ctx->pc = 0x17a1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 39), (uint8_t)GPR_U32(ctx, 2));
    // 0x17a1a4: 0x0  nop
    ctx->pc = 0x17a1a4u;
    // NOP
    // 0x17a1a8: 0x0  nop
    ctx->pc = 0x17a1a8u;
    // NOP
    // 0x17a1ac: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17A1ACu;
    {
        const bool branch_taken_0x17a1ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a1ac) {
            ctx->pc = 0x17A198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a198;
        }
    }
    ctx->pc = 0x17A1B4u;
    // 0x17a1b4: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x17a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x17a1b8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x17a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17a1bc: 0xae022c8c  sw          $v0, 0x2C8C($s0)
    ctx->pc = 0x17a1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11404), GPR_U32(ctx, 2));
    // 0x17a1c0: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x17a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x17a1c4: 0x0  nop
    ctx->pc = 0x17a1c4u;
    // NOP
label_17a1c8:
    // 0x17a1c8: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x17a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x17a1cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17a1d0: 0xac402b10  sw          $zero, 0x2B10($v0)
    ctx->pc = 0x17a1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11024), GPR_U32(ctx, 0));
    // 0x17a1d4: 0x0  nop
    ctx->pc = 0x17a1d4u;
    // NOP
    // 0x17a1d8: 0x0  nop
    ctx->pc = 0x17a1d8u;
    // NOP
    // 0x17a1dc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17A1DCu;
    {
        const bool branch_taken_0x17a1dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a1dc) {
            ctx->pc = 0x17A1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a1c8;
        }
    }
    ctx->pc = 0x17A1E4u;
    // 0x17a1e4: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x17a1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x17a1e8: 0xae002cb8  sw          $zero, 0x2CB8($s0)
    ctx->pc = 0x17a1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11448), GPR_U32(ctx, 0));
    // 0x17a1ec: 0xc0c985c  jal         func_326170
    ctx->pc = 0x17A1ECu;
    SET_GPR_U32(ctx, 31, 0x17A1F4u);
    ctx->pc = 0x17A1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A1ECu;
    // 0x17a1f0: 0x24844aa0  addiu       $a0, $a0, 0x4AA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326170u, 0x17A1ECu, 0x17A1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A1F4u;
label_17a1f4:
    // 0x17a1f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17a1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a1f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a1f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x17A1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1FCu;
        // 0x17a200: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A204u;
}
