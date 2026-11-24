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

// Function: sub_002AEE20
// Address: 0x2aee20 - 0x2aefc0
void sub_002AEE20_0x2aee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AEE20_0x2aee20");
#endif

    switch (ctx->pc) {
        case 0x2aee6cu: goto label_2aee6c;
        case 0x2aee78u: goto label_2aee78;
        case 0x2aee8cu: goto label_2aee8c;
        case 0x2aee9cu: goto label_2aee9c;
        case 0x2aef08u: goto label_2aef08;
        case 0x2aef20u: goto label_2aef20;
        case 0x2aef48u: goto label_2aef48;
        case 0x2aef60u: goto label_2aef60;
        default: break;
    }

    ctx->pc = 0x2aee20u;

    // 0x2aee20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2aee20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2aee24: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2aee24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2aee28: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2aee28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2aee2c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2aee2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2aee30: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x2aee30u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee34: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2aee34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2aee38: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2aee38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2aee3c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2aee3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2aee40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2aee44: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2aee44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2aee48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2aee48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2aee4c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2aee4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2aee50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2aee54: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2aee54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aee58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2aee5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aee5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2aee60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2aee60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee64: 0xc0410a6  jal         func_104298
    ctx->pc = 0x2AEE64u;
    SET_GPR_U32(ctx, 31, 0x2AEE6Cu);
    ctx->pc = 0x2AEE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEE64u;
    // 0x2aee68: 0xafa800bc  sw          $t0, 0xBC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104298u, 0x2AEE64u, 0x2AEE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEE6Cu;
label_2aee6c:
    // 0x2aee6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aee6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee70: 0xc0410a6  jal         func_104298
    ctx->pc = 0x2AEE70u;
    SET_GPR_U32(ctx, 31, 0x2AEE78u);
    ctx->pc = 0x2AEE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEE70u;
    // 0x2aee74: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104298u, 0x2AEE70u, 0x2AEE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEE78u;
label_2aee78:
    // 0x2aee78: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x2aee78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x2aee7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aee7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee80: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2aee80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2aee84: 0xc04121a  jal         func_104868
    ctx->pc = 0x2AEE84u;
    SET_GPR_U32(ctx, 31, 0x2AEE8Cu);
    ctx->pc = 0x2AEE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEE84u;
    // 0x2aee88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104868u, 0x2AEE84u, 0x2AEE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEE8Cu;
label_2aee8c:
    // 0x2aee8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aee8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aee90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee94: 0xc04121a  jal         func_104868
    ctx->pc = 0x2AEE94u;
    SET_GPR_U32(ctx, 31, 0x2AEE9Cu);
    ctx->pc = 0x2AEE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEE94u;
    // 0x2aee98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104868u, 0x2AEE94u, 0x2AEE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEE9Cu;
label_2aee9c:
    // 0x2aee9c: 0x2623fff0  addiu       $v1, $s1, -0x10
    ctx->pc = 0x2aee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x2aeea0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2aeea0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2aeea4: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AEEA4u;
    {
        const bool branch_taken_0x2aeea4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2AEEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEEA4u;
        // 0x2aeea8: 0x3083000f  andi        $v1, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeea4) {
            ctx->pc = 0x2AEEB8u;
            goto label_2aeeb8;
        }
    }
    ctx->pc = 0x2AEEACu;
    // 0x2aeeac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AEEACu;
    {
        const bool branch_taken_0x2aeeac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEEACu;
        // 0x2aeeb0: 0x3282b  sltu        $a1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeeac) {
            ctx->pc = 0x2AEEBCu;
            goto label_2aeebc;
        }
    }
    ctx->pc = 0x2AEEB4u;
    // 0x2aeeb4: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x2aeeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_2aeeb8:
    // 0x2aeeb8: 0x3282b  sltu        $a1, $zero, $v1
    ctx->pc = 0x2aeeb8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2aeebc:
    // 0x2aeebc: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AEEBCu;
    {
        const bool branch_taken_0x2aeebc = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2AEEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEEBCu;
        // 0x2aeec0: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeebc) {
            ctx->pc = 0x2AEECCu;
            goto label_2aeecc;
        }
    }
    ctx->pc = 0x2AEEC4u;
    // 0x2aeec4: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x2aeec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2aeec8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2aeec8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_2aeecc:
    // 0x2aeecc: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x2aeeccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2aeed0: 0x16b13c  dsll32      $s6, $s6, 4
    ctx->pc = 0x2aeed0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 4));
    // 0x2aeed4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2aeed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2aeed8: 0x14a13c  dsll32      $s4, $s4, 4
    ctx->pc = 0x2aeed8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 4));
    // 0x2aeedc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2aeedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2aeee0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x2aeee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x2aeee4: 0xac23e030  sw          $v1, -0x1FD0($at)
    ctx->pc = 0x2aeee4u;
    runtime->Store32(rdram, ctx, 0x1000E030u, GPR_U32(ctx, 3)); // MMIO: 0x1000e030
    // 0x2aeee8: 0x16b13e  dsrl32      $s6, $s6, 4
    ctx->pc = 0x2aeee8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 4));
    // 0x2aeeec: 0x1e082a  slt         $at, $zero, $fp
    ctx->pc = 0x2aeeecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x2aeef0: 0x14a13e  dsrl32      $s4, $s4, 4
    ctx->pc = 0x2aeef0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (32 + 4));
    // 0x2aeef4: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x2AEEF4u;
    {
        const bool branch_taken_0x2aeef4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEEF4u;
        // 0x2aeef8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeef4) {
            ctx->pc = 0x2AEF90u;
            goto label_2aef90;
        }
    }
    ctx->pc = 0x2AEEFCu;
    // 0x2aeefc: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x2aeefcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x2aef00: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x2aef00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x2aef04: 0x0  nop
    ctx->pc = 0x2aef04u;
    // NOP
label_2aef08:
    // 0x2aef08: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x2aef08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2aef0c: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x2aef0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef10: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2aef10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2aef14: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x2AEF14u;
    {
        const bool branch_taken_0x2aef14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEF14u;
        // 0x2aef18: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aef14) {
            ctx->pc = 0x2AEF80u;
            goto label_2aef80;
        }
    }
    ctx->pc = 0x2AEF1Cu;
    // 0x2aef1c: 0x0  nop
    ctx->pc = 0x2aef1cu;
    // NOP
label_2aef20:
    // 0x2aef20: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x2aef20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2aef24: 0x27828210  addiu       $v0, $gp, -0x7DF0
    ctx->pc = 0x2aef24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935056));
    // 0x2aef28: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2aef28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2aef2c: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x2aef2cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aef30: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2aef30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef34: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2aef34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2aef38: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2aef38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2aef3c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2aef3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef40: 0xc04118c  jal         func_104630
    ctx->pc = 0x2AEF40u;
    SET_GPR_U32(ctx, 31, 0x2AEF48u);
    ctx->pc = 0x2AEF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEF40u;
    // 0x2aef44: 0xac430080  sw          $v1, 0x80($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104630u, 0x2AEF40u, 0x2AEF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEF48u;
label_2aef48:
    // 0x2aef48: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x2aef48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2aef4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aef4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2aef50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef54: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2aef54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2aef58: 0xc0411fa  jal         func_1047E8
    ctx->pc = 0x2AEF58u;
    SET_GPR_U32(ctx, 31, 0x2AEF60u);
    ctx->pc = 0x2AEF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEF58u;
    // 0x2aef5c: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1047E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047E8u, 0x2AEF58u, 0x2AEF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEF60u;
label_2aef60:
    // 0x2aef60: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2aef60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2aef64: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2aef64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2aef68: 0x26940400  addiu       $s4, $s4, 0x400
    ctx->pc = 0x2aef68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1024));
    // 0x2aef6c: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x2aef6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2aef70: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x2aef70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2aef74: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x2aef74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2aef78: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2AEF78u;
    {
        const bool branch_taken_0x2aef78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AEF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEF78u;
        // 0x2aef7c: 0x3ab50001  xori        $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aef78) {
            ctx->pc = 0x2AEF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aef20;
        }
    }
    ctx->pc = 0x2AEF80u;
label_2aef80:
    // 0x2aef80: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2aef80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2aef84: 0x25e182a  slt         $v1, $s2, $fp
    ctx->pc = 0x2aef84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x2aef88: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2AEF88u;
    {
        const bool branch_taken_0x2aef88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AEF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEF88u;
        // 0x2aef8c: 0x26d60040  addiu       $s6, $s6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aef88) {
            ctx->pc = 0x2AEF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aef08;
        }
    }
    ctx->pc = 0x2AEF90u;
label_2aef90:
    // 0x2aef90: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2aef90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aef94: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2aef94u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2aef98: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2aef98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2aef9c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2aef9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2aefa0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2aefa0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2aefa4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2aefa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aefa8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2aefa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aefac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2aefacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aefb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aefb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aefb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aefb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aefb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEFB8u;
        // 0x2aefbc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEFC0u;
}
