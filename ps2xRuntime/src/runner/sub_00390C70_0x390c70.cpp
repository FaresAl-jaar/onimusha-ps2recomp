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

// Function: sub_00390C70
// Address: 0x390c70 - 0x390ea0
void sub_00390C70_0x390c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390C70_0x390c70");
#endif

    switch (ctx->pc) {
        case 0x390cf4u: goto label_390cf4;
        case 0x390d14u: goto label_390d14;
        case 0x390d28u: goto label_390d28;
        case 0x390d68u: goto label_390d68;
        case 0x390d78u: goto label_390d78;
        case 0x390de4u: goto label_390de4;
        case 0x390e90u: goto label_390e90;
        default: break;
    }

    ctx->pc = 0x390c70u;

    // 0x390c70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x390c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x390c74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x390c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x390c78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x390c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x390c7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x390c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x390c80: 0x90870521  lbu         $a3, 0x521($a0)
    ctx->pc = 0x390c80u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x390c84: 0x10e30034  beq         $a3, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x390C84u;
    {
        const bool branch_taken_0x390c84 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x390C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390C84u;
        // 0x390c88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390c84) {
            ctx->pc = 0x390D58u;
            goto label_390d58;
        }
    }
    ctx->pc = 0x390C8Cu;
    // 0x390c8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x390c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x390c90: 0x10e60029  beq         $a3, $a2, . + 4 + (0x29 << 2)
    ctx->pc = 0x390C90u;
    {
        const bool branch_taken_0x390c90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x390c90) {
            ctx->pc = 0x390D38u;
            goto label_390d38;
        }
    }
    ctx->pc = 0x390C98u;
    // 0x390c98: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x390C98u;
    {
        const bool branch_taken_0x390c98 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x390c98) {
            ctx->pc = 0x390CA8u;
            goto label_390ca8;
        }
    }
    ctx->pc = 0x390CA0u;
    // 0x390ca0: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x390CA0u;
    {
        const bool branch_taken_0x390ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x390ca0) {
            ctx->pc = 0x390E90u;
            goto label_390e90;
        }
    }
    ctx->pc = 0x390CA8u;
label_390ca8:
    // 0x390ca8: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x390CA8u;
    {
        const bool branch_taken_0x390ca8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x390ca8) {
            ctx->pc = 0x390D20u;
            goto label_390d20;
        }
    }
    ctx->pc = 0x390CB0u;
    // 0x390cb0: 0x92040559  lbu         $a0, 0x559($s0)
    ctx->pc = 0x390cb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1369)));
    // 0x390cb4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x390cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x390cb8: 0x24632229  addiu       $v1, $v1, 0x2229
    ctx->pc = 0x390cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8745));
    // 0x390cbc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x390cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x390cc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x390cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x390cc4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x390cc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x390cc8: 0x1066000d  beq         $v1, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x390CC8u;
    {
        const bool branch_taken_0x390cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x390cc8) {
            ctx->pc = 0x390D00u;
            goto label_390d00;
        }
    }
    ctx->pc = 0x390CD0u;
    // 0x390cd0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x390CD0u;
    {
        const bool branch_taken_0x390cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x390cd0) {
            ctx->pc = 0x390CE0u;
            goto label_390ce0;
        }
    }
    ctx->pc = 0x390CD8u;
    // 0x390cd8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x390CD8u;
    {
        const bool branch_taken_0x390cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x390cd8) {
            ctx->pc = 0x390D28u;
            goto label_390d28;
        }
    }
    ctx->pc = 0x390CE0u;
label_390ce0:
    // 0x390ce0: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x390ce0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x390ce4: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x390ce4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x390ce8: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x390ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x390cec: 0xc0aa1f8  jal         func_2A87E0
    ctx->pc = 0x390CECu;
    SET_GPR_U32(ctx, 31, 0x390CF4u);
    ctx->pc = 0x390CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390CECu;
    // 0x390cf0: 0x26070090  addiu       $a3, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E0u, 0x390CECu, 0x390CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390CF4u;
label_390cf4:
    // 0x390cf4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x390CF4u;
    {
        const bool branch_taken_0x390cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390CF4u;
        // 0x390cf8: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390cf4) {
            ctx->pc = 0x390D28u;
            goto label_390d28;
        }
    }
    ctx->pc = 0x390CFCu;
    // 0x390cfc: 0x0  nop
    ctx->pc = 0x390cfcu;
    // NOP
label_390d00:
    // 0x390d00: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x390d00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x390d04: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x390d04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x390d08: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x390d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x390d0c: 0xc0aa20c  jal         func_2A8830
    ctx->pc = 0x390D0Cu;
    SET_GPR_U32(ctx, 31, 0x390D14u);
    ctx->pc = 0x390D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390D0Cu;
    // 0x390d10: 0x26070090  addiu       $a3, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8830u, 0x390D0Cu, 0x390D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390D14u;
label_390d14:
    // 0x390d14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x390D14u;
    {
        const bool branch_taken_0x390d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D14u;
        // 0x390d18: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390d14) {
            ctx->pc = 0x390D28u;
            goto label_390d28;
        }
    }
    ctx->pc = 0x390D1Cu;
    // 0x390d1c: 0x0  nop
    ctx->pc = 0x390d1cu;
    // NOP
label_390d20:
    // 0x390d20: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x390D20u;
    SET_GPR_U32(ctx, 31, 0x390D28u);
    ctx->pc = 0x390D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390D20u;
    // 0x390d24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x390D20u, 0x390D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390D28u;
label_390d28:
    // 0x390d28: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x390d28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x390d2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x390d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x390d30: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x390D30u;
    {
        const bool branch_taken_0x390d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D30u;
        // 0x390d34: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390d30) {
            ctx->pc = 0x390E90u;
            goto label_390e90;
        }
    }
    ctx->pc = 0x390D38u;
label_390d38:
    // 0x390d38: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x390d38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x390d3c: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x390d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x390d40: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x390d40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x390d44: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x390d44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x390d48: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x390d48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x390d4c: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x390d4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x390d50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x390d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x390d54: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x390d54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_390d58:
    // 0x390d58: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x390d58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x390d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x390d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390d60: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x390D60u;
    SET_GPR_U32(ctx, 31, 0x390D68u);
    ctx->pc = 0x390D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390D60u;
    // 0x390d64: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x390D60u, 0x390D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390D68u;
label_390d68:
    // 0x390d68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x390D68u;
    {
        const bool branch_taken_0x390d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D68u;
        // 0x390d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390d68) {
            ctx->pc = 0x390D78u;
            goto label_390d78;
        }
    }
    ctx->pc = 0x390D70u;
    // 0x390d70: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x390D70u;
    SET_GPR_U32(ctx, 31, 0x390D78u);
    ctx->pc = 0x390D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390D70u;
    // 0x390d74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x390D70u, 0x390D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390D78u;
label_390d78:
    // 0x390d78: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x390d78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x390d7c: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x390D7Cu;
    {
        const bool branch_taken_0x390d7c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x390D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D7Cu;
        // 0x390d80: 0x28610015  slti        $at, $v1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x390d7c) {
            ctx->pc = 0x390DE8u;
            goto label_390de8;
        }
    }
    ctx->pc = 0x390D84u;
    // 0x390d84: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x390D84u;
    {
        const bool branch_taken_0x390d84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x390d84) {
            ctx->pc = 0x390DE8u;
            goto label_390de8;
        }
    }
    ctx->pc = 0x390D8Cu;
    // 0x390d8c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x390d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x390d90: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x390d90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x390d94: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x390d94u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x390d98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x390d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390d9c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x390d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x390da0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x390da0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390da4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x390da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x390da8: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x390da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    // 0x390dac: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x390dacu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x390db0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x390db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x390db4: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x390db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x390db8: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x390db8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x390dbc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x390dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x390dc0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x390dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x390dc4: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x390dc4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x390dc8: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x390dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x390dcc: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x390dccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x390dd0: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x390dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x390dd4: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x390dd4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x390dd8: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x390dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x390ddc: 0xc0c0900  jal         func_302400
    ctx->pc = 0x390DDCu;
    SET_GPR_U32(ctx, 31, 0x390DE4u);
    ctx->pc = 0x390DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390DDCu;
    // 0x390de0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x390DDCu, 0x390DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390DE4u;
label_390de4:
    // 0x390de4: 0x0  nop
    ctx->pc = 0x390de4u;
    // NOP
label_390de8:
    // 0x390de8: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x390de8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x390dec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x390DECu;
    {
        const bool branch_taken_0x390dec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x390DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390DECu;
        // 0x390df0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390dec) {
            ctx->pc = 0x390E00u;
            goto label_390e00;
        }
    }
    ctx->pc = 0x390DF4u;
    // 0x390df4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x390DF4u;
    {
        const bool branch_taken_0x390df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x390df4) {
            ctx->pc = 0x390E80u;
            goto label_390e80;
        }
    }
    ctx->pc = 0x390DFCu;
    // 0x390dfc: 0x0  nop
    ctx->pc = 0x390dfcu;
    // NOP
label_390e00:
    // 0x390e00: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x390e00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x390e04: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x390e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x390e08: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x390e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x390e0c: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x390e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x390e10: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x390e10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x390e14: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x390E14u;
    {
        const bool branch_taken_0x390e14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x390e14) {
            ctx->pc = 0x390E50u;
            goto label_390e50;
        }
    }
    ctx->pc = 0x390E1Cu;
    // 0x390e1c: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x390e1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x390e20: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x390e20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x390e24: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x390E24u;
    {
        const bool branch_taken_0x390e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x390E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390E24u;
        // 0x390e28: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390e24) {
            ctx->pc = 0x390E78u;
            goto label_390e78;
        }
    }
    ctx->pc = 0x390E2Cu;
    // 0x390e2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x390e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x390e30: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x390e30u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x390e34: 0x0  nop
    ctx->pc = 0x390e34u;
    // NOP
    // 0x390e38: 0x0  nop
    ctx->pc = 0x390e38u;
    // NOP
    // 0x390e3c: 0x2010  mfhi        $a0
    ctx->pc = 0x390e3cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x390e40: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x390e40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x390e44: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x390E44u;
    {
        const bool branch_taken_0x390e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390E44u;
        // 0x390e48: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390e44) {
            ctx->pc = 0x390E78u;
            goto label_390e78;
        }
    }
    ctx->pc = 0x390E4Cu;
    // 0x390e4c: 0x0  nop
    ctx->pc = 0x390e4cu;
    // NOP
label_390e50:
    // 0x390e50: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x390e50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x390e54: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x390e54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x390e58: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x390E58u;
    {
        const bool branch_taken_0x390e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x390e58) {
            ctx->pc = 0x390E78u;
            goto label_390e78;
        }
    }
    ctx->pc = 0x390E60u;
    // 0x390e60: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x390e60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x390e64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x390e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x390e68: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x390e68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x390e6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x390E6Cu;
    {
        const bool branch_taken_0x390e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390E6Cu;
        // 0x390e70: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390e6c) {
            ctx->pc = 0x390E80u;
            goto label_390e80;
        }
    }
    ctx->pc = 0x390E74u;
    // 0x390e74: 0x0  nop
    ctx->pc = 0x390e74u;
    // NOP
label_390e78:
    // 0x390e78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x390e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x390e7c: 0x0  nop
    ctx->pc = 0x390e7cu;
    // NOP
label_390e80:
    // 0x390e80: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x390E80u;
    {
        const bool branch_taken_0x390e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x390E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390E80u;
        // 0x390e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390e80) {
            ctx->pc = 0x390E90u;
            goto label_390e90;
        }
    }
    ctx->pc = 0x390E88u;
    // 0x390e88: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x390E88u;
    SET_GPR_U32(ctx, 31, 0x390E90u);
    ctx->pc = 0x390E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390E88u;
    // 0x390e8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x390E88u, 0x390E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390E90u;
label_390e90:
    // 0x390e90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x390e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x390e94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x390e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x390e98: 0x3e00008  jr          $ra
    ctx->pc = 0x390E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390E98u;
        // 0x390e9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390EA0u;
}
