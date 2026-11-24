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

// Function: sub_00118D00
// Address: 0x118d00 - 0x118e90
void sub_00118D00_0x118d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118D00_0x118d00");
#endif

    switch (ctx->pc) {
        case 0x118d48u: goto label_118d48;
        case 0x118db0u: goto label_118db0;
        case 0x118e1cu: goto label_118e1c;
        case 0x118e50u: goto label_118e50;
        default: break;
    }

    ctx->pc = 0x118d00u;

    // 0x118d00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x118d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x118d04: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x118d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x118d08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x118d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x118d0c: 0x24424148  addiu       $v0, $v0, 0x4148
    ctx->pc = 0x118d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16712));
    // 0x118d10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x118d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x118d14: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x118d14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d18: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x118d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118d1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118d20: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x118d20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x404164u));
    // 0x118d24: 0x4610054  bgez        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x118D24u;
    {
        const bool branch_taken_0x118d24 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x118D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D24u;
        // 0x118d28: 0x8c460018  lw          $a2, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d24) {
            ctx->pc = 0x118E78u;
            goto label_118e78;
        }
    }
    ctx->pc = 0x118D2Cu;
    // 0x118d2c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x118d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x118d30: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x118d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x118d34: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x118d34u;
    SET_GPR_S32(ctx, 18, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10001010
    // 0x118d38: 0x54c0000c  bnel        $a2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x118D38u;
    {
        const bool branch_taken_0x118d38 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x118d38) {
            ctx->pc = 0x118D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118D38u;
            // 0x118d3c: 0xdcc20020  ld          $v0, 0x20($a2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118D6Cu;
            goto label_118d6c;
        }
    }
    ctx->pc = 0x118D40u;
    // 0x118d40: 0xc046268  jal         func_1189A0
    ctx->pc = 0x118D40u;
    SET_GPR_U32(ctx, 31, 0x118D48u);
    ctx->pc = 0x118D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118D40u;
    // 0x118d44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A0u, 0x118D40u, 0x118D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118D48u;
label_118d48:
    // 0x118d48: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x118d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x118d4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x118d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118d50: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x118d50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x118d54: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118d54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118d58: 0x2442024  and         $a0, $s2, $a0
    ctx->pc = 0x118d58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x118d5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118d5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118d60: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118d60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118d64: 0x8046264  j           func_118990
    ctx->pc = 0x118D64u;
    ctx->pc = 0x118D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118D64u;
    // 0x118d68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118990u;
    sub_00118990_0x118990(rdram, ctx, runtime); return;
    ctx->pc = 0x118D6Cu;
label_118d6c:
    // 0x118d6c: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x118d6cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x118d70: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x118d70u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x118d74: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x118d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x118d78: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x118d78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x118d7c: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x118D7Cu;
    {
        const bool branch_taken_0x118d7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D7Cu;
        // 0x118d80: 0x44802f  dsubu       $s0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d7c) {
            ctx->pc = 0x118DE4u;
            goto label_118de4;
        }
    }
    ctx->pc = 0x118D84u;
    // 0x118d84: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x118d84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x118d88: 0x66037333  daddiu      $v1, $s0, 0x7333
    ctx->pc = 0x118d88u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)29491);
    // 0x118d8c: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x118d8cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x118d90: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x118d90u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x118d94: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x118d94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x118d98: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x118d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x118d9c: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x118d9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x118da0: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x118DA0u;
    {
        const bool branch_taken_0x118da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x118DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118DA0u;
        // 0x118da4: 0x32510003  andi        $s1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118da0) {
            ctx->pc = 0x118DE4u;
            goto label_118de4;
        }
    }
    ctx->pc = 0x118DA8u;
    // 0x118da8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x118da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118dac: 0x0  nop
    ctx->pc = 0x118dacu;
    // NOP
label_118db0:
    // 0x118db0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x118db0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x118db4: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x118DB4u;
    {
        const bool branch_taken_0x118db4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x118DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118DB4u;
        // 0x118db8: 0x66037333  daddiu      $v1, $s0, 0x7333 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)29491);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118db4) {
            ctx->pc = 0x118DE8u;
            goto label_118de8;
        }
    }
    ctx->pc = 0x118DBCu;
    // 0x118dbc: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x118dbcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x118dc0: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x118dc0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x118dc4: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x118dc4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x118dc8: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x118dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x118dcc: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x118dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x118dd0: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x118dd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x118dd4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x118DD4u;
    {
        const bool branch_taken_0x118dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x118dd4) {
            ctx->pc = 0x118DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118DD4u;
            // 0x118dd8: 0x207102f  dsubu       $v0, $s0, $a3 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) - GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118DECu;
            goto label_118dec;
        }
    }
    ctx->pc = 0x118DDCu;
    // 0x118ddc: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x118DDCu;
    {
        const bool branch_taken_0x118ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118DDCu;
        // 0x118de0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ddc) {
            ctx->pc = 0x118DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118db0;
        }
    }
    ctx->pc = 0x118DE4u;
label_118de4:
    // 0x118de4: 0x32510003  andi        $s1, $s2, 0x3
    ctx->pc = 0x118de4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
label_118de8:
    // 0x118de8: 0x207102f  dsubu       $v0, $s0, $a3
    ctx->pc = 0x118de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) - GPR_U64(ctx, 7));
label_118dec:
    // 0x118dec: 0x28427333  slti        $v0, $v0, 0x7333
    ctx->pc = 0x118decu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29491) ? 1 : 0);
    // 0x118df0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x118DF0u;
    {
        const bool branch_taken_0x118df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118DF0u;
        // 0x118df4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118df0) {
            ctx->pc = 0x118E40u;
            goto label_118e40;
        }
    }
    ctx->pc = 0x118DF8u;
    // 0x118df8: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x118df8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x118dfc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x118dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x118e00: 0x24047333  addiu       $a0, $zero, 0x7333
    ctx->pc = 0x118e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29491));
    // 0x118e04: 0xa42016  dsrlv       $a0, $a0, $a1
    ctx->pc = 0x118e04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x118e08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x118e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x118e0c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x118e0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x118e10: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x118e10u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x118e14: 0xc046268  jal         func_1189A0
    ctx->pc = 0x118E14u;
    SET_GPR_U32(ctx, 31, 0x118E1Cu);
    ctx->pc = 0x118E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118E14u;
    // 0x118e18: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A0u, 0x118E14u, 0x118E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118E1Cu;
label_118e1c:
    // 0x118e1c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x118e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x118e20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x118e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118e24: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x118e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x118e28: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118e28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118e2c: 0x2442024  and         $a0, $s2, $a0
    ctx->pc = 0x118e2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x118e30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118e30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118e34: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118e34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118e38: 0x8046264  j           func_118990
    ctx->pc = 0x118E38u;
    ctx->pc = 0x118E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118E38u;
    // 0x118e3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118990u;
    sub_00118990_0x118990(rdram, ctx, runtime); return;
    ctx->pc = 0x118E40u;
label_118e40:
    // 0x118e40: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x118e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x118e44: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x118e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x118e48: 0xc046264  jal         func_118990
    ctx->pc = 0x118E48u;
    SET_GPR_U32(ctx, 31, 0x118E50u);
    ctx->pc = 0x118E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118E48u;
    // 0x118e4c: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118990u, 0x118E48u, 0x118E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118E50u;
label_118e50:
    // 0x118e50: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x118e50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x118e54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x118e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118e58: 0x902016  dsrlv       $a0, $s0, $a0
    ctx->pc = 0x118e58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x118e5c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118e5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118e60: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118e60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118e64: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x118e64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x118e68: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x118e68u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x118e6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118e70: 0x8046268  j           func_1189A0
    ctx->pc = 0x118E70u;
    ctx->pc = 0x118E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118E70u;
    // 0x118e74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A0u;
    sub_001189A0_0x1189a0(rdram, ctx, runtime); return;
    ctx->pc = 0x118E78u;
label_118e78:
    // 0x118e78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x118e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118e7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118e7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118e80: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118e80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118e84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118e84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118e88: 0x3e00008  jr          $ra
    ctx->pc = 0x118E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E88u;
        // 0x118e8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118E90u;
}
