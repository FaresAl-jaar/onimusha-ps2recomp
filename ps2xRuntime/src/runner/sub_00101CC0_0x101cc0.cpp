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

// Function: sub_00101CC0
// Address: 0x101cc0 - 0x102004
void sub_00101CC0_0x101cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101CC0_0x101cc0");
#endif

    switch (ctx->pc) {
        case 0x101cd8u: goto label_101cd8;
        case 0x101d0cu: goto label_101d0c;
        case 0x101d18u: goto label_101d18;
        case 0x101d2cu: goto label_101d2c;
        case 0x101d3cu: goto label_101d3c;
        case 0x101d8cu: goto label_101d8c;
        case 0x101da4u: goto label_101da4;
        case 0x101db0u: goto label_101db0;
        case 0x101dccu: goto label_101dcc;
        case 0x101de4u: goto label_101de4;
        case 0x101df0u: goto label_101df0;
        case 0x101dfcu: goto label_101dfc;
        case 0x101e14u: goto label_101e14;
        case 0x101e20u: goto label_101e20;
        case 0x101e3cu: goto label_101e3c;
        case 0x101e48u: goto label_101e48;
        case 0x101e64u: goto label_101e64;
        case 0x101e70u: goto label_101e70;
        case 0x101e7cu: goto label_101e7c;
        case 0x101e94u: goto label_101e94;
        case 0x101ea0u: goto label_101ea0;
        case 0x101eacu: goto label_101eac;
        case 0x101eb8u: goto label_101eb8;
        case 0x101ed4u: goto label_101ed4;
        case 0x101eecu: goto label_101eec;
        case 0x101ef8u: goto label_101ef8;
        case 0x101f40u: goto label_101f40;
        case 0x101f4cu: goto label_101f4c;
        case 0x101f64u: goto label_101f64;
        case 0x101f7cu: goto label_101f7c;
        case 0x101f88u: goto label_101f88;
        case 0x101f94u: goto label_101f94;
        case 0x101fb0u: goto label_101fb0;
        case 0x101fb8u: goto label_101fb8;
        case 0x101fc4u: goto label_101fc4;
        default: break;
    }

    ctx->pc = 0x101cc0u;

    // 0x101cc0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x101cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x101cc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x101cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x101cc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x101cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x101ccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x101cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x101cd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x101cd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101cd4: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x101cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_101cd8:
    // 0x101cd8: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x101cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x101cdc: 0x8102b  sltu        $v0, $zero, $t0
    ctx->pc = 0x101cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x101ce0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x101ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x101ce4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x101CE4u;
    {
        const bool branch_taken_0x101ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101ce4) {
            ctx->pc = 0x101D00u;
            goto label_101d00;
        }
    }
    ctx->pc = 0x101CECu;
    // 0x101cec: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x101cecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x101cf0: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x101cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x101cf4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x101CF4u;
    {
        const bool branch_taken_0x101cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101cf4) {
            ctx->pc = 0x101D50u;
            goto label_101d50;
        }
    }
    ctx->pc = 0x101CFCu;
    // 0x101cfc: 0x0  nop
    ctx->pc = 0x101cfcu;
    // NOP
label_101d00:
    // 0x101d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d04: 0xc040900  jal         func_102400
    ctx->pc = 0x101D04u;
    SET_GPR_U32(ctx, 31, 0x101D0Cu);
    ctx->pc = 0x101D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101D04u;
    // 0x101d08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102400u, 0x101D04u, 0x101D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101D0Cu;
label_101d0c:
    // 0x101d0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d10: 0xc040804  jal         func_102010
    ctx->pc = 0x101D10u;
    SET_GPR_U32(ctx, 31, 0x101D18u);
    ctx->pc = 0x101D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101D10u;
    // 0x101d14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102010u, 0x101D10u, 0x101D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101D18u;
label_101d18:
    // 0x101d18: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x101d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x101d1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x101D1Cu;
    {
        const bool branch_taken_0x101d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101d1c) {
            ctx->pc = 0x101D30u;
            goto label_101d30;
        }
    }
    ctx->pc = 0x101D24u;
    // 0x101d24: 0xc040224  jal         func_100890
    ctx->pc = 0x101D24u;
    SET_GPR_U32(ctx, 31, 0x101D2Cu);
    ctx->pc = 0x100890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100890u, 0x101D24u, 0x101D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101D2Cu;
label_101d2c:
    // 0x101d2c: 0x0  nop
    ctx->pc = 0x101d2cu;
    // NOP
label_101d30:
    // 0x101d30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d34: 0xc0408d0  jal         func_102340
    ctx->pc = 0x101D34u;
    SET_GPR_U32(ctx, 31, 0x101D3Cu);
    ctx->pc = 0x101D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101D34u;
    // 0x101d38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102340u, 0x101D34u, 0x101D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101D3Cu;
label_101d3c:
    // 0x101d3c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x101d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x101d40: 0x144000a5  bnez        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x101D40u;
    {
        const bool branch_taken_0x101d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101d40) {
            ctx->pc = 0x101FD8u;
            goto label_101fd8;
        }
    }
    ctx->pc = 0x101D48u;
    // 0x101d48: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x101D48u;
    {
        const bool branch_taken_0x101d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x101d48) {
            ctx->pc = 0x101CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101cd8;
        }
    }
    ctx->pc = 0x101D50u;
label_101d50:
    // 0x101d50: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x101d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x101d54: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x101d54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x101d58: 0x10200093  beqz        $at, . + 4 + (0x93 << 2)
    ctx->pc = 0x101D58u;
    {
        const bool branch_taken_0x101d58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x101d58) {
            ctx->pc = 0x101FA8u;
            goto label_101fa8;
        }
    }
    ctx->pc = 0x101D60u;
    // 0x101d60: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x101d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x101d64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x101d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x101d68: 0x246319c0  addiu       $v1, $v1, 0x19C0
    ctx->pc = 0x101d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6592));
    // 0x101d6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x101d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x101d70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x101d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101d74: 0x400008  jr          $v0
    ctx->pc = 0x101D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101D80u: goto label_101d80;
            case 0x101D98u: goto label_101d98;
            case 0x101DC0u: goto label_101dc0;
            case 0x101DD8u: goto label_101dd8;
            case 0x101E08u: goto label_101e08;
            case 0x101E30u: goto label_101e30;
            case 0x101E58u: goto label_101e58;
            case 0x101E88u: goto label_101e88;
            case 0x101EC8u: goto label_101ec8;
            case 0x101EE0u: goto label_101ee0;
            case 0x101F08u: goto label_101f08;
            case 0x101F58u: goto label_101f58;
            case 0x101F70u: goto label_101f70;
            case 0x101FA8u: goto label_101fa8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101D74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x101D7Cu;
    // 0x101d7c: 0x0  nop
    ctx->pc = 0x101d7cu;
    // NOP
label_101d80:
    // 0x101d80: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x101d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x101d84: 0xc0402a8  jal         func_100AA0
    ctx->pc = 0x101D84u;
    SET_GPR_U32(ctx, 31, 0x101D8Cu);
    ctx->pc = 0x101D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101D84u;
    // 0x101d88: 0x27a500ac  addiu       $a1, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101D84u, 0x101D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101D8Cu;
label_101d8c:
    // 0x101d8c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x101d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x101d90: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x101D90u;
    {
        const bool branch_taken_0x101d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101D90u;
        // 0x101d94: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d90) {
            ctx->pc = 0x101FD8u;
            goto label_101fd8;
        }
    }
    ctx->pc = 0x101D98u;
label_101d98:
    // 0x101d98: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x101d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x101d9c: 0xc0402a8  jal         func_100AA0
    ctx->pc = 0x101D9Cu;
    SET_GPR_U32(ctx, 31, 0x101DA4u);
    ctx->pc = 0x101DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101D9Cu;
    // 0x101da0: 0x27a500a8  addiu       $a1, $sp, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101D9Cu, 0x101DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101DA4u;
label_101da4:
    // 0x101da4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101da8: 0xc0402a8  jal         func_100AA0
    ctx->pc = 0x101DA8u;
    SET_GPR_U32(ctx, 31, 0x101DB0u);
    ctx->pc = 0x101DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101DA8u;
    // 0x101dac: 0x27a500a4  addiu       $a1, $sp, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101DA8u, 0x101DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101DB0u;
label_101db0:
    // 0x101db0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x101db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x101db4: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x101DB4u;
    {
        const bool branch_taken_0x101db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101DB4u;
        // 0x101db8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101db4) {
            ctx->pc = 0x101FD8u;
            goto label_101fd8;
        }
    }
    ctx->pc = 0x101DBCu;
    // 0x101dbc: 0x0  nop
    ctx->pc = 0x101dbcu;
    // NOP
label_101dc0:
    // 0x101dc0: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x101dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x101dc4: 0xc0402a8  jal         func_100AA0
    ctx->pc = 0x101DC4u;
    SET_GPR_U32(ctx, 31, 0x101DCCu);
    ctx->pc = 0x101DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101DC4u;
    // 0x101dc8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101DC4u, 0x101DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101DCCu;
label_101dcc:
    // 0x101dcc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x101dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x101dd0: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x101DD0u;
    {
        const bool branch_taken_0x101dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101DD0u;
        // 0x101dd4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101dd0) {
            ctx->pc = 0x101FD8u;
            goto label_101fd8;
        }
    }
    ctx->pc = 0x101DD8u;
label_101dd8:
    // 0x101dd8: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x101dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x101ddc: 0xc0402a8  jal         func_100AA0
    ctx->pc = 0x101DDCu;
    SET_GPR_U32(ctx, 31, 0x101DE4u);
    ctx->pc = 0x101DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101DDCu;
    // 0x101de0: 0x27a5009c  addiu       $a1, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101DDCu, 0x101DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101DE4u;
label_101de4:
    // 0x101de4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101de8: 0xc04027c  jal         func_1009F0
    ctx->pc = 0x101DE8u;
    SET_GPR_U32(ctx, 31, 0x101DF0u);
    ctx->pc = 0x101DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101DE8u;
    // 0x101dec: 0x27a50098  addiu       $a1, $sp, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x101DE8u, 0x101DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101DF0u;
label_101df0:
    // 0x101df0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101df4: 0xc04027c  jal         func_1009F0
    ctx->pc = 0x101DF4u;
    SET_GPR_U32(ctx, 31, 0x101DFCu);
    ctx->pc = 0x101DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101DF4u;
    // 0x101df8: 0x27a50094  addiu       $a1, $sp, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x101DF4u, 0x101DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101DFCu;
label_101dfc:
    // 0x101dfc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x101dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x101e00: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x101E00u;
    {
        const bool branch_taken_0x101e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E00u;
        // 0x101e04: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e00) {
            ctx->pc = 0x101FD8u;
            goto label_101fd8;
        }
    }
    ctx->pc = 0x101E08u;
label_101e08:
    // 0x101e08: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x101e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x101e0c: 0xc0402a8  jal         func_100AA0
    ctx->pc = 0x101E0Cu;
    SET_GPR_U32(ctx, 31, 0x101E14u);
    ctx->pc = 0x101E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101E0Cu;
    // 0x101e10: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101E0Cu, 0x101E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101E14u;
label_101e14:
    // 0x101e14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101e18: 0xc0402a8  jal         func_100AA0
    ctx->pc = 0x101E18u;
    SET_GPR_U32(ctx, 31, 0x101E20u);
    ctx->pc = 0x101E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101E18u;
    // 0x101e1c: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101E18u, 0x101E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101E20u;
label_101e20:
    // 0x101e20: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x101e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x101e24: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x101E24u;
    {
        const bool branch_taken_0x101e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E24u;
        // 0x101e28: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e24) {
            ctx->pc = 0x101FD8u;
            goto label_101fd8;
        }
    }
    ctx->pc = 0x101E2Cu;
    // 0x101e2c: 0x0  nop
    ctx->pc = 0x101e2cu;
    // NOP
label_101e30:
    // 0x101e30: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x101e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x101e34: 0xc0402a8  jal         func_100AA0
    ctx->pc = 0x101E34u;
    SET_GPR_U32(ctx, 31, 0x101E3Cu);
    ctx->pc = 0x101E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101E34u;
    // 0x101e38: 0x27a50088  addiu       $a1, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101E34u, 0x101E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101E3Cu;
label_101e3c:
    // 0x101e3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101e40: 0xc0402a8  jal         func_100AA0
    ctx->pc = 0x101E40u;
    SET_GPR_U32(ctx, 31, 0x101E48u);
    ctx->pc = 0x101E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101E40u;
    // 0x101e44: 0x27a50084  addiu       $a1, $sp, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101E40u, 0x101E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101E48u;
label_101e48:
    // 0x101e48: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x101e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x101e4c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x101E4Cu;
    {
        const bool branch_taken_0x101e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E4Cu;
        // 0x101e50: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e4c) {
            ctx->pc = 0x101FD8u;
            goto label_101fd8;
        }
    }
    ctx->pc = 0x101E54u;
    // 0x101e54: 0x0  nop
    ctx->pc = 0x101e54u;
    // NOP
label_101e58:
    // 0x101e58: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x101e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x101e5c: 0xc0402a8  jal         func_100AA0
    ctx->pc = 0x101E5Cu;
    SET_GPR_U32(ctx, 31, 0x101E64u);
    ctx->pc = 0x101E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101E5Cu;
    // 0x101e60: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101E5Cu, 0x101E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101E64u;
label_101e64:
    // 0x101e64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101e68: 0xc0402a8  jal         func_100AA0
    ctx->pc = 0x101E68u;
    SET_GPR_U32(ctx, 31, 0x101E70u);
    ctx->pc = 0x101E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101E68u;
    // 0x101e6c: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101E68u, 0x101E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101E70u;
label_101e70:
    // 0x101e70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101e74: 0xc0402a8  jal         func_100AA0
    ctx->pc = 0x101E74u;
    SET_GPR_U32(ctx, 31, 0x101E7Cu);
    ctx->pc = 0x101E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101E74u;
    // 0x101e78: 0x27a50078  addiu       $a1, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101E74u, 0x101E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101E7Cu;
label_101e7c:
    // 0x101e7c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x101e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x101e80: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x101E80u;
    {
        const bool branch_taken_0x101e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E80u;
        // 0x101e84: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e80) {
            ctx->pc = 0x101FD8u;
            goto label_101fd8;
        }
    }
    ctx->pc = 0x101E88u;
label_101e88:
    // 0x101e88: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x101e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x101e8c: 0xc0402a8  jal         func_100AA0
    ctx->pc = 0x101E8Cu;
    SET_GPR_U32(ctx, 31, 0x101E94u);
    ctx->pc = 0x101E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101E8Cu;
    // 0x101e90: 0x27a50074  addiu       $a1, $sp, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101E8Cu, 0x101E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101E94u;
label_101e94:
    // 0x101e94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101e98: 0xc0402a8  jal         func_100AA0
    ctx->pc = 0x101E98u;
    SET_GPR_U32(ctx, 31, 0x101EA0u);
    ctx->pc = 0x101E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101E98u;
    // 0x101e9c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101E98u, 0x101EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101EA0u;
label_101ea0:
    // 0x101ea0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101ea4: 0xc04027c  jal         func_1009F0
    ctx->pc = 0x101EA4u;
    SET_GPR_U32(ctx, 31, 0x101EACu);
    ctx->pc = 0x101EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101EA4u;
    // 0x101ea8: 0x27a5006c  addiu       $a1, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x101EA4u, 0x101EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101EACu;
label_101eac:
    // 0x101eac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101eb0: 0xc04027c  jal         func_1009F0
    ctx->pc = 0x101EB0u;
    SET_GPR_U32(ctx, 31, 0x101EB8u);
    ctx->pc = 0x101EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101EB0u;
    // 0x101eb4: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x101EB0u, 0x101EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101EB8u;
label_101eb8:
    // 0x101eb8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x101eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x101ebc: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x101EBCu;
    {
        const bool branch_taken_0x101ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EBCu;
        // 0x101ec0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ebc) {
            ctx->pc = 0x101FD8u;
            goto label_101fd8;
        }
    }
    ctx->pc = 0x101EC4u;
    // 0x101ec4: 0x0  nop
    ctx->pc = 0x101ec4u;
    // NOP
label_101ec8:
    // 0x101ec8: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x101ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x101ecc: 0xc0402a8  jal         func_100AA0
    ctx->pc = 0x101ECCu;
    SET_GPR_U32(ctx, 31, 0x101ED4u);
    ctx->pc = 0x101ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101ECCu;
    // 0x101ed0: 0x27a50064  addiu       $a1, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101ECCu, 0x101ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101ED4u;
label_101ed4:
    // 0x101ed4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x101ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x101ed8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x101ED8u;
    {
        const bool branch_taken_0x101ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101ED8u;
        // 0x101edc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ed8) {
            ctx->pc = 0x101FD8u;
            goto label_101fd8;
        }
    }
    ctx->pc = 0x101EE0u;
label_101ee0:
    // 0x101ee0: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x101ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x101ee4: 0xc0402a8  jal         func_100AA0
    ctx->pc = 0x101EE4u;
    SET_GPR_U32(ctx, 31, 0x101EECu);
    ctx->pc = 0x101EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101EE4u;
    // 0x101ee8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101EE4u, 0x101EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101EECu;
label_101eec:
    // 0x101eec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101ef0: 0xc0402a8  jal         func_100AA0
    ctx->pc = 0x101EF0u;
    SET_GPR_U32(ctx, 31, 0x101EF8u);
    ctx->pc = 0x101EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101EF0u;
    // 0x101ef4: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101EF0u, 0x101EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101EF8u;
label_101ef8:
    // 0x101ef8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x101ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x101efc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x101EFCu;
    {
        const bool branch_taken_0x101efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EFCu;
        // 0x101f00: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101efc) {
            ctx->pc = 0x101FD8u;
            goto label_101fd8;
        }
    }
    ctx->pc = 0x101F04u;
    // 0x101f04: 0x0  nop
    ctx->pc = 0x101f04u;
    // NOP
label_101f08:
    // 0x101f08: 0x91070002  lbu         $a3, 0x2($t0)
    ctx->pc = 0x101f08u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x101f0c: 0x91030003  lbu         $v1, 0x3($t0)
    ctx->pc = 0x101f0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x101f10: 0x25040005  addiu       $a0, $t0, 0x5
    ctx->pc = 0x101f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x101f14: 0x91020004  lbu         $v0, 0x4($t0)
    ctx->pc = 0x101f14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x101f18: 0x27a50054  addiu       $a1, $sp, 0x54
    ctx->pc = 0x101f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x101f1c: 0x91060001  lbu         $a2, 0x1($t0)
    ctx->pc = 0x101f1cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x101f20: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x101f20u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x101f24: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x101f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x101f28: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x101f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x101f2c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x101f2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x101f30: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x101f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x101f34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x101f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x101f38: 0xc04027c  jal         func_1009F0
    ctx->pc = 0x101F38u;
    SET_GPR_U32(ctx, 31, 0x101F40u);
    ctx->pc = 0x101F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F38u;
    // 0x101f3c: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x101F38u, 0x101F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F40u;
label_101f40:
    // 0x101f40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101f44: 0xc0402a8  jal         func_100AA0
    ctx->pc = 0x101F44u;
    SET_GPR_U32(ctx, 31, 0x101F4Cu);
    ctx->pc = 0x101F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F44u;
    // 0x101f48: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101F44u, 0x101F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F4Cu;
label_101f4c:
    // 0x101f4c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x101F4Cu;
    {
        const bool branch_taken_0x101f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F4Cu;
        // 0x101f50: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f4c) {
            ctx->pc = 0x101FD8u;
            goto label_101fd8;
        }
    }
    ctx->pc = 0x101F54u;
    // 0x101f54: 0x0  nop
    ctx->pc = 0x101f54u;
    // NOP
label_101f58:
    // 0x101f58: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x101f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x101f5c: 0xc0402a8  jal         func_100AA0
    ctx->pc = 0x101F5Cu;
    SET_GPR_U32(ctx, 31, 0x101F64u);
    ctx->pc = 0x101F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F5Cu;
    // 0x101f60: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101F5Cu, 0x101F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F64u;
label_101f64:
    // 0x101f64: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x101F64u;
    {
        const bool branch_taken_0x101f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F64u;
        // 0x101f68: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f64) {
            ctx->pc = 0x101FD8u;
            goto label_101fd8;
        }
    }
    ctx->pc = 0x101F6Cu;
    // 0x101f6c: 0x0  nop
    ctx->pc = 0x101f6cu;
    // NOP
label_101f70:
    // 0x101f70: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x101f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x101f74: 0xc04027c  jal         func_1009F0
    ctx->pc = 0x101F74u;
    SET_GPR_U32(ctx, 31, 0x101F7Cu);
    ctx->pc = 0x101F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F74u;
    // 0x101f78: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x101F74u, 0x101F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F7Cu;
label_101f7c:
    // 0x101f7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101f80: 0xc04027c  jal         func_1009F0
    ctx->pc = 0x101F80u;
    SET_GPR_U32(ctx, 31, 0x101F88u);
    ctx->pc = 0x101F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F80u;
    // 0x101f84: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x101F80u, 0x101F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F88u;
label_101f88:
    // 0x101f88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101f8c: 0xc0402a8  jal         func_100AA0
    ctx->pc = 0x101F8Cu;
    SET_GPR_U32(ctx, 31, 0x101F94u);
    ctx->pc = 0x101F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F8Cu;
    // 0x101f90: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101F8Cu, 0x101F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F94u;
label_101f94:
    // 0x101f94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x101f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x101f98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x101f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x101f9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x101f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x101fa0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x101FA0u;
    {
        const bool branch_taken_0x101fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FA0u;
        // 0x101fa4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101fa0) {
            ctx->pc = 0x101FD8u;
            goto label_101fd8;
        }
    }
    ctx->pc = 0x101FA8u;
label_101fa8:
    // 0x101fa8: 0xc040224  jal         func_100890
    ctx->pc = 0x101FA8u;
    SET_GPR_U32(ctx, 31, 0x101FB0u);
    ctx->pc = 0x100890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100890u, 0x101FA8u, 0x101FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FB0u;
label_101fb0:
    // 0x101fb0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x101FB0u;
    {
        const bool branch_taken_0x101fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x101fb0) {
            ctx->pc = 0x101FD8u;
            goto label_101fd8;
        }
    }
    ctx->pc = 0x101FB8u;
label_101fb8:
    // 0x101fb8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x101fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x101fbc: 0xc0402a8  jal         func_100AA0
    ctx->pc = 0x101FBCu;
    SET_GPR_U32(ctx, 31, 0x101FC4u);
    ctx->pc = 0x101FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101FBCu;
    // 0x101fc0: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x101FBCu, 0x101FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FC4u;
label_101fc4:
    // 0x101fc4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x101fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x101fc8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x101fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x101fcc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x101fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x101fd0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x101fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x101fd4: 0x0  nop
    ctx->pc = 0x101fd4u;
    // NOP
label_101fd8:
    // 0x101fd8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x101fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x101fdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x101fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101fe0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x101fe0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x101fe4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x101fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x101fe8: 0x1043fff3  beq         $v0, $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x101FE8u;
    {
        const bool branch_taken_0x101fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x101fe8) {
            ctx->pc = 0x101FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101fb8;
        }
    }
    ctx->pc = 0x101FF0u;
    // 0x101ff0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x101ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101ff4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101ff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101ff8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x101FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FFCu;
        // 0x102000: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102004u;
}
