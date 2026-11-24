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

// Function: sub_00153950
// Address: 0x153950 - 0x153bb0
void sub_00153950_0x153950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153950_0x153950");
#endif

    switch (ctx->pc) {
        case 0x153980u: goto label_153980;
        case 0x153990u: goto label_153990;
        case 0x1539b0u: goto label_1539b0;
        case 0x1539c0u: goto label_1539c0;
        case 0x1539e0u: goto label_1539e0;
        case 0x153a18u: goto label_153a18;
        case 0x153a70u: goto label_153a70;
        case 0x153a9cu: goto label_153a9c;
        case 0x153ab0u: goto label_153ab0;
        case 0x153af4u: goto label_153af4;
        case 0x153b2cu: goto label_153b2c;
        case 0x153b3cu: goto label_153b3c;
        case 0x153b44u: goto label_153b44;
        case 0x153b48u: goto label_153b48;
        case 0x153b54u: goto label_153b54;
        case 0x153b74u: goto label_153b74;
        case 0x153b8cu: goto label_153b8c;
        default: break;
    }

    ctx->pc = 0x153950u;

    // 0x153950: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x153950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x153954: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x153954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x153958: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x153958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15395c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15395cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x153960: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x153960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x153964: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x153964u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15396c: 0x3c110080  lui         $s1, 0x80
    ctx->pc = 0x15396cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)128 << 16));
    // 0x153970: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x153970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153974: 0xa02011d0  sb          $zero, 0x11D0($at)
    ctx->pc = 0x153974u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F11D0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7F11D0u, _value); } while (0);
    // 0x153978: 0x2631e810  addiu       $s1, $s1, -0x17F0
    ctx->pc = 0x153978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961168));
    // 0x15397c: 0x0  nop
    ctx->pc = 0x15397cu;
    // NOP
label_153980:
    // 0x153980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153984: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x153984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153988: 0xc049590  jal         func_125640
    ctx->pc = 0x153988u;
    SET_GPR_U32(ctx, 31, 0x153990u);
    ctx->pc = 0x15398Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153988u;
    // 0x15398c: 0x24060068  addiu       $a2, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x153988u, 0x153990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153990u;
label_153990:
    // 0x153990: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x153990u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x153994: 0x2a420010  slti        $v0, $s2, 0x10
    ctx->pc = 0x153994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x153998: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x153998u;
    {
        const bool branch_taken_0x153998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153998u;
        // 0x15399c: 0x26310068  addiu       $s1, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153998) {
            ctx->pc = 0x153980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153980;
        }
    }
    ctx->pc = 0x1539A0u;
    // 0x1539a0: 0x3c120080  lui         $s2, 0x80
    ctx->pc = 0x1539a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)128 << 16));
    // 0x1539a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1539a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1539a8: 0x2652eeb0  addiu       $s2, $s2, -0x1150
    ctx->pc = 0x1539a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962864));
    // 0x1539ac: 0x0  nop
    ctx->pc = 0x1539acu;
    // NOP
label_1539b0:
    // 0x1539b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1539b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1539b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1539b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1539b8: 0xc049590  jal         func_125640
    ctx->pc = 0x1539B8u;
    SET_GPR_U32(ctx, 31, 0x1539C0u);
    ctx->pc = 0x1539BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1539B8u;
    // 0x1539bc: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1539B8u, 0x1539C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1539C0u;
label_1539c0:
    // 0x1539c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1539c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1539c4: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x1539c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1539c8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1539C8u;
    {
        const bool branch_taken_0x1539c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1539CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1539C8u;
        // 0x1539cc: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1539c8) {
            ctx->pc = 0x1539B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1539b0;
        }
    }
    ctx->pc = 0x1539D0u;
    // 0x1539d0: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x1539d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x1539d4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1539d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1539d8: 0x2484f090  addiu       $a0, $a0, -0xF70
    ctx->pc = 0x1539d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963344));
    // 0x1539dc: 0x0  nop
    ctx->pc = 0x1539dcu;
    // NOP
label_1539e0:
    // 0x1539e0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1539e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1539e4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1539e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1539e8: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x1539e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x1539ec: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1539ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1539f0: 0x28620024  slti        $v0, $v1, 0x24
    ctx->pc = 0x1539f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)36) ? 1 : 0);
    // 0x1539f4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1539f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1539f8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1539f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1539fc: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1539fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x153a00: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x153A00u;
    {
        const bool branch_taken_0x153a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A00u;
        // 0x153a04: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153a00) {
            ctx->pc = 0x1539E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1539e0;
        }
    }
    ctx->pc = 0x153A08u;
    // 0x153a08: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x153a08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x153a0c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x153a0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153a10: 0x2484e610  addiu       $a0, $a0, -0x19F0
    ctx->pc = 0x153a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960656));
    // 0x153a14: 0x0  nop
    ctx->pc = 0x153a14u;
    // NOP
label_153a18:
    // 0x153a18: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x153a18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x153a1c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x153a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x153a20: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x153a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x153a24: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x153a24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x153a28: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x153a28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x153a2c: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x153a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x153a30: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x153a30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x153a34: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x153a34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x153a38: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x153a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x153a3c: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x153a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x153a40: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x153A40u;
    {
        const bool branch_taken_0x153a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A40u;
        // 0x153a44: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153a40) {
            ctx->pc = 0x153A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153a18;
        }
    }
    ctx->pc = 0x153A48u;
    // 0x153a48: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x153a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x153a4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x153a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x153a50: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153a54: 0x2484e5e0  addiu       $a0, $a0, -0x1A20
    ctx->pc = 0x153a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960608));
    // 0x153a58: 0xac22ee90  sw          $v0, -0x1170($at)
    ctx->pc = 0x153a58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7FEE90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7FEE90u, _value); } while (0);
    // 0x153a5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x153a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153a60: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x153a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x153a64: 0xaf8085bc  sw          $zero, -0x7A44($gp)
    ctx->pc = 0x153a64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935996), GPR_U32(ctx, 0));
    // 0x153a68: 0xc049590  jal         func_125640
    ctx->pc = 0x153A68u;
    SET_GPR_U32(ctx, 31, 0x153A70u);
    ctx->pc = 0x153A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A68u;
    // 0x153a6c: 0xaf8085c0  sw          $zero, -0x7A40($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936000), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x153A68u, 0x153A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153A70u;
label_153a70:
    // 0x153a70: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153a74: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x153a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x153a78: 0xac20e5e4  sw          $zero, -0x1A1C($at)
    ctx->pc = 0x153a78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7FE5E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7FE5E4u, _value); } while (0);
    // 0x153a7c: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x153a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x153a80: 0x24425028  addiu       $v0, $v0, 0x5028
    ctx->pc = 0x153a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20520));
    // 0x153a84: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153a88: 0xac22e5e0  sw          $v0, -0x1A20($at)
    ctx->pc = 0x153a88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7FE5E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7FE5E0u, _value); } while (0);
    // 0x153a8c: 0x2484e5e0  addiu       $a0, $a0, -0x1A20
    ctx->pc = 0x153a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960608));
    // 0x153a90: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153a94: 0xc08e2ce  jal         func_238B38
    ctx->pc = 0x153A94u;
    SET_GPR_U32(ctx, 31, 0x153A9Cu);
    ctx->pc = 0x153A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A94u;
    // 0x153a98: 0xac20e5e8  sw          $zero, -0x1A18($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960616), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B38u, 0x153A94u, 0x153A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153A9Cu;
label_153a9c:
    // 0x153a9c: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x153a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x153aa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x153aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153aa4: 0x2484e600  addiu       $a0, $a0, -0x1A00
    ctx->pc = 0x153aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960640));
    // 0x153aa8: 0xc049590  jal         func_125640
    ctx->pc = 0x153AA8u;
    SET_GPR_U32(ctx, 31, 0x153AB0u);
    ctx->pc = 0x153AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153AA8u;
    // 0x153aac: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x153AA8u, 0x153AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153AB0u;
label_153ab0:
    // 0x153ab0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x153ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x153ab4: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x153ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x153ab8: 0x24635030  addiu       $v1, $v1, 0x5030
    ctx->pc = 0x153ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20528));
    // 0x153abc: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153ac0: 0xac23e600  sw          $v1, -0x1A00($at)
    ctx->pc = 0x153ac0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7FE600u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7FE600u, _value); } while (0);
    // 0x153ac4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x153ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x153ac8: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153acc: 0x24031568  addiu       $v1, $zero, 0x1568
    ctx->pc = 0x153accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5480));
    // 0x153ad0: 0xac22e604  sw          $v0, -0x19FC($at)
    ctx->pc = 0x153ad0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7FE604u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7FE604u, _value); } while (0);
    // 0x153ad4: 0x2484e600  addiu       $a0, $a0, -0x1A00
    ctx->pc = 0x153ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960640));
    // 0x153ad8: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153adc: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x153adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x153ae0: 0xac23e60c  sw          $v1, -0x19F4($at)
    ctx->pc = 0x153ae0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7FE60Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7FE60Cu, _value); } while (0);
    // 0x153ae4: 0x2442d070  addiu       $v0, $v0, -0x2F90
    ctx->pc = 0x153ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955120));
    // 0x153ae8: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x153ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x153aec: 0xc08e30e  jal         func_238C38
    ctx->pc = 0x153AECu;
    SET_GPR_U32(ctx, 31, 0x153AF4u);
    ctx->pc = 0x153AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153AECu;
    // 0x153af0: 0xac22e608  sw          $v0, -0x19F8($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960648), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238C38u, 0x153AECu, 0x153AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153AF4u;
label_153af4:
    // 0x153af4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x153af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x153af8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x153af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x153afc: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x153afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x153b00: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x153b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x153b04: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x153b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x153b08: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x153b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x153b0c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x153b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x153b10: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x153b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x153b14: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x153b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x153b18: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x153b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x153b1c: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x153b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x153b20: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x153b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x153b24: 0xc08d008  jal         func_234020
    ctx->pc = 0x153B24u;
    SET_GPR_U32(ctx, 31, 0x153B2Cu);
    ctx->pc = 0x153B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153B24u;
    // 0x153b28: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234020u, 0x153B24u, 0x153B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153B2Cu;
label_153b2c:
    // 0x153b2c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x153b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x153b30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x153b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153b34: 0xc08d002  jal         func_234008
    ctx->pc = 0x153B34u;
    SET_GPR_U32(ctx, 31, 0x153B3Cu);
    ctx->pc = 0x153B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153B34u;
    // 0x153b38: 0x24843510  addiu       $a0, $a0, 0x3510 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234008u, 0x153B34u, 0x153B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153B3Cu;
label_153b3c:
    // 0x153b3c: 0xc08c9b6  jal         func_2326D8
    ctx->pc = 0x153B3Cu;
    SET_GPR_U32(ctx, 31, 0x153B44u);
    ctx->pc = 0x2326D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326D8u, 0x153B3Cu, 0x153B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153B44u;
label_153b44:
    // 0x153b44: 0x0  nop
    ctx->pc = 0x153b44u;
    // NOP
label_153b48:
    // 0x153b48: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x153b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x153b4c: 0xc048296  jal         func_120A58
    ctx->pc = 0x153B4Cu;
    SET_GPR_U32(ctx, 31, 0x153B54u);
    ctx->pc = 0x153B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153B4Cu;
    // 0x153b50: 0x278585b4  addiu       $a1, $gp, -0x7A4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935988));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A58u, 0x153B4Cu, 0x153B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153B54u;
label_153b54:
    // 0x153b54: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x153b54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x153b58: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x153b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x153b5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x153B5Cu;
    {
        const bool branch_taken_0x153b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x153b5c) {
            ctx->pc = 0x153B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153b48;
        }
    }
    ctx->pc = 0x153B64u;
    // 0x153b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153b68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x153b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153b6c: 0xc054e00  jal         func_153800
    ctx->pc = 0x153B6Cu;
    SET_GPR_U32(ctx, 31, 0x153B74u);
    ctx->pc = 0x153B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153B6Cu;
    // 0x153b70: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153800u, 0x153B6Cu, 0x153B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153B74u;
label_153b74:
    // 0x153b74: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x153b74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x153b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153b7c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x153b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x153b80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x153b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x153b84: 0xc054e34  jal         func_1538D0
    ctx->pc = 0x153B84u;
    SET_GPR_U32(ctx, 31, 0x153B8Cu);
    ctx->pc = 0x153B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153B84u;
    // 0x153b88: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1538D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1538D0u, 0x153B84u, 0x153B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153B8Cu;
label_153b8c:
    // 0x153b8c: 0x3c0301c0  lui         $v1, 0x1C0
    ctx->pc = 0x153b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)448 << 16));
    // 0x153b90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x153b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153b94: 0xaf8385b8  sw          $v1, -0x7A48($gp)
    ctx->pc = 0x153b94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935992), GPR_U32(ctx, 3));
    // 0x153b98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x153b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153b9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x153b9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153ba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x153ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x153BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153BA8u;
        // 0x153bac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153BB0u;
}
