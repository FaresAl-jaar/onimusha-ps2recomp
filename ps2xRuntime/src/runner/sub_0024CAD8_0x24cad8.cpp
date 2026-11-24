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

// Function: sub_0024CAD8
// Address: 0x24cad8 - 0x24cc60
void sub_0024CAD8_0x24cad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CAD8_0x24cad8");
#endif

    switch (ctx->pc) {
        case 0x24cb34u: goto label_24cb34;
        case 0x24cb6cu: goto label_24cb6c;
        case 0x24cba4u: goto label_24cba4;
        case 0x24cbc8u: goto label_24cbc8;
        case 0x24cbe8u: goto label_24cbe8;
        case 0x24cbfcu: goto label_24cbfc;
        case 0x24cc10u: goto label_24cc10;
        case 0x24cc18u: goto label_24cc18;
        case 0x24cc40u: goto label_24cc40;
        default: break;
    }

    ctx->pc = 0x24cad8u;

    // 0x24cad8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24cad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24cadc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24cadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24cae0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24cae0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cae4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24cae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24cae8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24cae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24caec: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x24caecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x24caf0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x24caf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24caf4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x24caf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x24caf8: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x24CAF8u;
    {
        const bool branch_taken_0x24caf8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CAF8u;
        // 0x24cafc: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24caf8) {
            ctx->pc = 0x24CB10u;
            goto label_24cb10;
        }
    }
    ctx->pc = 0x24CB00u;
    // 0x24cb00: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x24cb00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x24cb04: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24CB04u;
    {
        const bool branch_taken_0x24cb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB04u;
        // 0x24cb08: 0x24a5dcd0  addiu       $a1, $a1, -0x2330 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cb04) {
            ctx->pc = 0x24CB2Cu;
            goto label_24cb2c;
        }
    }
    ctx->pc = 0x24CB0Cu;
    // 0x24cb0c: 0x0  nop
    ctx->pc = 0x24cb0cu;
    // NOP
label_24cb10:
    // 0x24cb10: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24CB10u;
    {
        const bool branch_taken_0x24cb10 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x24CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB10u;
        // 0x24cb14: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cb10) {
            ctx->pc = 0x24CB20u;
            goto label_24cb20;
        }
    }
    ctx->pc = 0x24CB18u;
    // 0x24cb18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24CB18u;
    {
        const bool branch_taken_0x24cb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB18u;
        // 0x24cb1c: 0x24a5dcf0  addiu       $a1, $a1, -0x2310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cb18) {
            ctx->pc = 0x24CB2Cu;
            goto label_24cb2c;
        }
    }
    ctx->pc = 0x24CB20u;
label_24cb20:
    // 0x24cb20: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x24CB20u;
    {
        const bool branch_taken_0x24cb20 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB20u;
        // 0x24cb24: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cb20) {
            ctx->pc = 0x24CB40u;
            goto label_24cb40;
        }
    }
    ctx->pc = 0x24CB28u;
    // 0x24cb28: 0x24a5dd10  addiu       $a1, $a1, -0x22F0
    ctx->pc = 0x24cb28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958352));
label_24cb2c:
    // 0x24cb2c: 0xc093184  jal         func_24C610
    ctx->pc = 0x24CB2Cu;
    SET_GPR_U32(ctx, 31, 0x24CB34u);
    ctx->pc = 0x24C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C610u, 0x24CB2Cu, 0x24CB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CB34u;
label_24cb34:
    // 0x24cb34: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x24CB34u;
    {
        const bool branch_taken_0x24cb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB34u;
        // 0x24cb38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cb34) {
            ctx->pc = 0x24CC44u;
            goto label_24cc44;
        }
    }
    ctx->pc = 0x24CB3Cu;
    // 0x24cb3c: 0x0  nop
    ctx->pc = 0x24cb3cu;
    // NOP
label_24cb40:
    // 0x24cb40: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x24CB40u;
    {
        const bool branch_taken_0x24cb40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24cb40) {
            ctx->pc = 0x24CB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CB40u;
            // 0x24cb44: 0x82430001  lb          $v1, 0x1($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CB58u;
            goto label_24cb58;
        }
    }
    ctx->pc = 0x24CB48u;
    // 0x24cb48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24cb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24cb4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24cb4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cb50: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x24CB50u;
    {
        const bool branch_taken_0x24cb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB50u;
        // 0x24cb54: 0xa2430001  sb          $v1, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cb50) {
            ctx->pc = 0x24CC44u;
            goto label_24cc44;
        }
    }
    ctx->pc = 0x24CB58u;
label_24cb58:
    // 0x24cb58: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x24cb58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24cb5c: 0x10710039  beq         $v1, $s1, . + 4 + (0x39 << 2)
    ctx->pc = 0x24CB5Cu;
    {
        const bool branch_taken_0x24cb5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x24CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB5Cu;
        // 0x24cb60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cb5c) {
            ctx->pc = 0x24CC44u;
            goto label_24cc44;
        }
    }
    ctx->pc = 0x24CB64u;
    // 0x24cb64: 0xc093172  jal         func_24C5C8
    ctx->pc = 0x24CB64u;
    SET_GPR_U32(ctx, 31, 0x24CB6Cu);
    ctx->pc = 0x24C5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C5C8u, 0x24CB64u, 0x24CB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CB6Cu;
label_24cb6c:
    // 0x24cb6c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x24cb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x24cb70: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x24cb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x24cb74: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x24cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x24cb78: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x24cb78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x24cb7c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x24cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24cb80: 0x202182a  slt         $v1, $s0, $v0
    ctx->pc = 0x24cb80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24cb84: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x24cb84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x24cb88: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x24cb88u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x24cb8c: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x24cb8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x24cb90: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24CB90u;
    {
        const bool branch_taken_0x24cb90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB90u;
        // 0x24cb94: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cb90) {
            ctx->pc = 0x24CBB0u;
            goto label_24cbb0;
        }
    }
    ctx->pc = 0x24CB98u;
    // 0x24cb98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24cb9c: 0xc093178  jal         func_24C5E0
    ctx->pc = 0x24CB9Cu;
    SET_GPR_U32(ctx, 31, 0x24CBA4u);
    ctx->pc = 0x24CBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CB9Cu;
    // 0x24cba0: 0xa2420001  sb          $v0, 0x1($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C5E0u, 0x24CB9Cu, 0x24CBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CBA4u;
label_24cba4:
    // 0x24cba4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x24CBA4u;
    {
        const bool branch_taken_0x24cba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBA4u;
        // 0x24cba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cba4) {
            ctx->pc = 0x24CC44u;
            goto label_24cc44;
        }
    }
    ctx->pc = 0x24CBACu;
    // 0x24cbac: 0x0  nop
    ctx->pc = 0x24cbacu;
    // NOP
label_24cbb0:
    // 0x24cbb0: 0xae440030  sw          $a0, 0x30($s2)
    ctx->pc = 0x24cbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 4));
    // 0x24cbb4: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x24cbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x24cbb8: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x24cbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x24cbbc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24cbbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cbc0: 0xc0931b6  jal         func_24C6D8
    ctx->pc = 0x24CBC0u;
    SET_GPR_U32(ctx, 31, 0x24CBC8u);
    ctx->pc = 0x24CBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CBC0u;
    // 0x24cbc4: 0xa2510001  sb          $s1, 0x1($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C6D8u, 0x24CBC0u, 0x24CBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CBC8u;
label_24cbc8:
    // 0x24cbc8: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x24cbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x24cbcc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24cbccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cbd0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24cbd4: 0x8e500034  lw          $s0, 0x34($s2)
    ctx->pc = 0x24cbd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x24cbd8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x24cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24cbdc: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x24cbdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x24cbe0: 0xc093178  jal         func_24C5E0
    ctx->pc = 0x24CBE0u;
    SET_GPR_U32(ctx, 31, 0x24CBE8u);
    ctx->pc = 0x24CBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CBE0u;
    // 0x24cbe4: 0x43800b  movn        $s0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C5E0u, 0x24CBE0u, 0x24CBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CBE8u;
label_24cbe8:
    // 0x24cbe8: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x24cbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x24cbec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24cbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cbf0: 0x8e460034  lw          $a2, 0x34($s2)
    ctx->pc = 0x24cbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x24cbf4: 0xc049522  jal         func_125488
    ctx->pc = 0x24CBF4u;
    SET_GPR_U32(ctx, 31, 0x24CBFCu);
    ctx->pc = 0x24CBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CBF4u;
    // 0x24cbf8: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x24CBF4u, 0x24CBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CBFCu;
label_24cbfc:
    // 0x24cbfc: 0x8e460034  lw          $a2, 0x34($s2)
    ctx->pc = 0x24cbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x24cc00: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x24cc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x24cc04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24cc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cc08: 0xc049590  jal         func_125640
    ctx->pc = 0x24CC08u;
    SET_GPR_U32(ctx, 31, 0x24CC10u);
    ctx->pc = 0x24CC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CC08u;
    // 0x24cc0c: 0xd03023  subu        $a2, $a2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x24CC08u, 0x24CC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CC10u;
label_24cc10:
    // 0x24cc10: 0xc093172  jal         func_24C5C8
    ctx->pc = 0x24CC10u;
    SET_GPR_U32(ctx, 31, 0x24CC18u);
    ctx->pc = 0x24C5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C5C8u, 0x24CC10u, 0x24CC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CC18u;
label_24cc18:
    // 0x24cc18: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x24cc18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x24cc1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24cc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24cc20: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x24cc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x24cc24: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x24cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x24cc28: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x24cc28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x24cc2c: 0xa2450001  sb          $a1, 0x1($s2)
    ctx->pc = 0x24cc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x24cc30: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24cc34: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x24cc34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x24cc38: 0xc093178  jal         func_24C5E0
    ctx->pc = 0x24CC38u;
    SET_GPR_U32(ctx, 31, 0x24CC40u);
    ctx->pc = 0x24CC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CC38u;
    // 0x24cc3c: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C5E0u, 0x24CC38u, 0x24CC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CC40u;
label_24cc40:
    // 0x24cc40: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x24cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_24cc44:
    // 0x24cc44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24cc44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24cc48: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x24cc48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24cc4c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24cc4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24cc50: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x24cc50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24cc54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24cc54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24cc58: 0x3e00008  jr          $ra
    ctx->pc = 0x24CC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC58u;
        // 0x24cc5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CC60u;
}
