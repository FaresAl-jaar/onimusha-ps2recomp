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

// Function: sub_00305DC0
// Address: 0x305dc0 - 0x3065dc
void sub_00305DC0_0x305dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305DC0_0x305dc0");
#endif

    switch (ctx->pc) {
        case 0x305e18u: goto label_305e18;
        case 0x305e28u: goto label_305e28;
        case 0x305e68u: goto label_305e68;
        case 0x305e9cu: goto label_305e9c;
        case 0x305ef4u: goto label_305ef4;
        case 0x305f04u: goto label_305f04;
        case 0x305f14u: goto label_305f14;
        case 0x305f28u: goto label_305f28;
        case 0x305f38u: goto label_305f38;
        case 0x305f48u: goto label_305f48;
        case 0x305f9cu: goto label_305f9c;
        case 0x305facu: goto label_305fac;
        case 0x305fbcu: goto label_305fbc;
        case 0x305ff8u: goto label_305ff8;
        case 0x306004u: goto label_306004;
        case 0x306018u: goto label_306018;
        case 0x30603cu: goto label_30603c;
        case 0x306084u: goto label_306084;
        case 0x30609cu: goto label_30609c;
        case 0x3060acu: goto label_3060ac;
        case 0x3060bcu: goto label_3060bc;
        case 0x3060d4u: goto label_3060d4;
        case 0x3060e4u: goto label_3060e4;
        case 0x306128u: goto label_306128;
        case 0x30614cu: goto label_30614c;
        case 0x306164u: goto label_306164;
        case 0x306174u: goto label_306174;
        case 0x3061a4u: goto label_3061a4;
        case 0x3061d8u: goto label_3061d8;
        case 0x3061f0u: goto label_3061f0;
        case 0x306224u: goto label_306224;
        case 0x3062d8u: goto label_3062d8;
        case 0x306310u: goto label_306310;
        case 0x306324u: goto label_306324;
        case 0x306338u: goto label_306338;
        case 0x306348u: goto label_306348;
        case 0x30639cu: goto label_30639c;
        case 0x3063c8u: goto label_3063c8;
        case 0x3063e8u: goto label_3063e8;
        case 0x306400u: goto label_306400;
        case 0x30640cu: goto label_30640c;
        case 0x30641cu: goto label_30641c;
        case 0x30642cu: goto label_30642c;
        case 0x3064d8u: goto label_3064d8;
        case 0x306510u: goto label_306510;
        case 0x306520u: goto label_306520;
        case 0x3065c8u: goto label_3065c8;
        default: break;
    }

    ctx->pc = 0x305dc0u;

    // 0x305dc0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x305dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x305dc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x305dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x305dc8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x305dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x305dcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x305dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x305dd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x305dd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305dd4: 0x90830521  lbu         $v1, 0x521($a0)
    ctx->pc = 0x305dd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x305dd8: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x305dd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x305ddc: 0x102001fa  beqz        $at, . + 4 + (0x1FA << 2)
    ctx->pc = 0x305DDCu;
    {
        const bool branch_taken_0x305ddc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x305DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305DDCu;
        // 0x305de0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305ddc) {
            ctx->pc = 0x3065C8u;
            goto label_3065c8;
        }
    }
    ctx->pc = 0x305DE4u;
    // 0x305de4: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x305de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x305de8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x305de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x305dec: 0x24a5c7d0  addiu       $a1, $a1, -0x3830
    ctx->pc = 0x305decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952912));
    // 0x305df0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x305df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x305df4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x305df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x305df8: 0x600008  jr          $v1
    ctx->pc = 0x305DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x305E00u: goto label_305e00;
            case 0x305E38u: goto label_305e38;
            case 0x305E58u: goto label_305e58;
            case 0x305F68u: goto label_305f68;
            case 0x306060u: goto label_306060;
            case 0x3062E0u: goto label_3062e0;
            case 0x306300u: goto label_306300;
            case 0x3064E0u: goto label_3064e0;
            case 0x306500u: goto label_306500;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305DF8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x305E00u;
label_305e00:
    // 0x305e00: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x305E00u;
    {
        const bool branch_taken_0x305e00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x305e00) {
            ctx->pc = 0x305E20u;
            goto label_305e20;
        }
    }
    ctx->pc = 0x305E08u;
    // 0x305e08: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x305e08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x305e0c: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x305e0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x305e10: 0xc0a9bec  jal         func_2A6FB0
    ctx->pc = 0x305E10u;
    SET_GPR_U32(ctx, 31, 0x305E18u);
    ctx->pc = 0x305E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305E10u;
    // 0x305e14: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6FB0u, 0x305E10u, 0x305E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305E18u;
label_305e18:
    // 0x305e18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x305E18u;
    {
        const bool branch_taken_0x305e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E18u;
        // 0x305e1c: 0xae2205a0  sw          $v0, 0x5A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305e18) {
            ctx->pc = 0x305E28u;
            goto label_305e28;
        }
    }
    ctx->pc = 0x305E20u;
label_305e20:
    // 0x305e20: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x305E20u;
    SET_GPR_U32(ctx, 31, 0x305E28u);
    ctx->pc = 0x305E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305E20u;
    // 0x305e24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x305E20u, 0x305E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305E28u;
label_305e28:
    // 0x305e28: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x305e28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x305e2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x305e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x305e30: 0x100001e5  b           . + 4 + (0x1E5 << 2)
    ctx->pc = 0x305E30u;
    {
        const bool branch_taken_0x305e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E30u;
        // 0x305e34: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305e30) {
            ctx->pc = 0x3065C8u;
            goto label_3065c8;
        }
    }
    ctx->pc = 0x305E38u;
label_305e38:
    // 0x305e38: 0xa6200512  sh          $zero, 0x512($s1)
    ctx->pc = 0x305e38u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 0));
    // 0x305e3c: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x305e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x305e40: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x305e40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x305e44: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x305e44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x305e48: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x305e48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x305e4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x305e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x305e50: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x305e50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
    // 0x305e54: 0x0  nop
    ctx->pc = 0x305e54u;
    // NOP
label_305e58:
    // 0x305e58: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x305E58u;
    {
        const bool branch_taken_0x305e58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x305E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E58u;
        // 0x305e5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305e58) {
            ctx->pc = 0x305E70u;
            goto label_305e70;
        }
    }
    ctx->pc = 0x305E60u;
    // 0x305e60: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x305E60u;
    SET_GPR_U32(ctx, 31, 0x305E68u);
    ctx->pc = 0x305E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305E60u;
    // 0x305e64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x305E60u, 0x305E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305E68u;
label_305e68:
    // 0x305e68: 0x100001d7  b           . + 4 + (0x1D7 << 2)
    ctx->pc = 0x305E68u;
    {
        const bool branch_taken_0x305e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305e68) {
            ctx->pc = 0x3065C8u;
            goto label_3065c8;
        }
    }
    ctx->pc = 0x305E70u;
label_305e70:
    // 0x305e70: 0x922305ae  lbu         $v1, 0x5AE($s1)
    ctx->pc = 0x305e70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1454)));
    // 0x305e74: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x305e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x305e78: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x305e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x305e7c: 0x2442c7b2  addiu       $v0, $v0, -0x384E
    ctx->pc = 0x305e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952882));
    // 0x305e80: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x305e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x305e84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x305e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x305e88: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x305e88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x305e8c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x305e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x305e90: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x305e90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x305e94: 0xc04d594  jal         func_135650
    ctx->pc = 0x305E94u;
    SET_GPR_U32(ctx, 31, 0x305E9Cu);
    ctx->pc = 0x305E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305E94u;
    // 0x305e98: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135650u, 0x305E94u, 0x305E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305E9Cu;
label_305e9c:
    // 0x305e9c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x305e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x305ea0: 0x27aa00f0  addiu       $t2, $sp, 0xF0
    ctx->pc = 0x305ea0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x305ea4: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x305ea4u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x305ea8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x305ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x305eac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x305eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305eb0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x305eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x305eb4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x305eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x305eb8: 0x7fa900c0  sq          $t1, 0xC0($sp)
    ctx->pc = 0x305eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 9));
    // 0x305ebc: 0x78285c30  lq          $t0, 0x5C30($at)
    ctx->pc = 0x305ebcu;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x665C30u));
    // 0x305ec0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x305ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x305ec4: 0x7fa800d0  sq          $t0, 0xD0($sp)
    ctx->pc = 0x305ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 8));
    // 0x305ec8: 0x78275c40  lq          $a3, 0x5C40($at)
    ctx->pc = 0x305ec8u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x665C40u));
    // 0x305ecc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x305eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x305ed0: 0x7fa700e0  sq          $a3, 0xE0($sp)
    ctx->pc = 0x305ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 7));
    // 0x305ed4: 0x78235c50  lq          $v1, 0x5C50($at)
    ctx->pc = 0x305ed4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C50u));
    // 0x305ed8: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x305ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x305edc: 0x7a230590  lq          $v1, 0x590($s1)
    ctx->pc = 0x305edcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 1424)));
    // 0x305ee0: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x305ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x305ee4: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x305ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x305ee8: 0x922705af  lbu         $a3, 0x5AF($s1)
    ctx->pc = 0x305ee8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1455)));
    // 0x305eec: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x305EECu;
    SET_GPR_U32(ctx, 31, 0x305EF4u);
    ctx->pc = 0x305EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305EECu;
    // 0x305ef0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x305EECu, 0x305EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305EF4u;
label_305ef4:
    // 0x305ef4: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x305ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x305ef8: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x305ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x305efc: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x305EFCu;
    SET_GPR_U32(ctx, 31, 0x305F04u);
    ctx->pc = 0x305F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305EFCu;
    // 0x305f00: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x305EFCu, 0x305F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F04u;
label_305f04:
    // 0x305f04: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x305f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x305f08: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x305f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x305f0c: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x305F0Cu;
    SET_GPR_U32(ctx, 31, 0x305F14u);
    ctx->pc = 0x305F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F0Cu;
    // 0x305f10: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x305F0Cu, 0x305F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F14u;
label_305f14:
    // 0x305f14: 0x7a220580  lq          $v0, 0x580($s1)
    ctx->pc = 0x305f14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 1408)));
    // 0x305f18: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x305f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x305f1c: 0x26250550  addiu       $a1, $s1, 0x550
    ctx->pc = 0x305f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x305f20: 0xc0763bc  jal         func_1D8EF0
    ctx->pc = 0x305F20u;
    SET_GPR_U32(ctx, 31, 0x305F28u);
    ctx->pc = 0x305F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F20u;
    // 0x305f24: 0x7e220020  sq          $v0, 0x20($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x305F20u, 0x305F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F28u;
label_305f28:
    // 0x305f28: 0x8e2605a0  lw          $a2, 0x5A0($s1)
    ctx->pc = 0x305f28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
    // 0x305f2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x305f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305f30: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x305F30u;
    SET_GPR_U32(ctx, 31, 0x305F38u);
    ctx->pc = 0x305F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F30u;
    // 0x305f34: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x305F30u, 0x305F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F38u;
label_305f38:
    // 0x305f38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x305F38u;
    {
        const bool branch_taken_0x305f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F38u;
        // 0x305f3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305f38) {
            ctx->pc = 0x305F48u;
            goto label_305f48;
        }
    }
    ctx->pc = 0x305F40u;
    // 0x305f40: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x305F40u;
    SET_GPR_U32(ctx, 31, 0x305F48u);
    ctx->pc = 0x305F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F40u;
    // 0x305f44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x305F40u, 0x305F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F48u;
label_305f48:
    // 0x305f48: 0x9224053a  lbu         $a0, 0x53A($s1)
    ctx->pc = 0x305f48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1338)));
    // 0x305f4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305f50: 0x1483019d  bne         $a0, $v1, . + 4 + (0x19D << 2)
    ctx->pc = 0x305F50u;
    {
        const bool branch_taken_0x305f50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x305f50) {
            ctx->pc = 0x3065C8u;
            goto label_3065c8;
        }
    }
    ctx->pc = 0x305F58u;
    // 0x305f58: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x305f58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x305f5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x305f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x305f60: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x305F60u;
    {
        const bool branch_taken_0x305f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F60u;
        // 0x305f64: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305f60) {
            ctx->pc = 0x3065C8u;
            goto label_3065c8;
        }
    }
    ctx->pc = 0x305F68u;
label_305f68:
    // 0x305f68: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x305f68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x305f6c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x305f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x305f70: 0x3c022a00  lui         $v0, 0x2A00
    ctx->pc = 0x305f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10752 << 16));
    // 0x305f74: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x305f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x305f78: 0x34456002  ori         $a1, $v0, 0x6002
    ctx->pc = 0x305f78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24578);
    // 0x305f7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305f80: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x305f80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x305f84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x305f84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305f88: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x305f88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305f8c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x305f8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305f90: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x305f90u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305f94: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x305F94u;
    SET_GPR_U32(ctx, 31, 0x305F9Cu);
    ctx->pc = 0x305F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F94u;
    // 0x305f98: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x305F94u, 0x305F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F9Cu;
label_305f9c:
    // 0x305f9c: 0x8e250518  lw          $a1, 0x518($s1)
    ctx->pc = 0x305f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
    // 0x305fa0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x305fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x305fa4: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x305FA4u;
    SET_GPR_U32(ctx, 31, 0x305FACu);
    ctx->pc = 0x305FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305FA4u;
    // 0x305fa8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x305FA4u, 0x305FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305FACu;
label_305fac:
    // 0x305fac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x305facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305fb0: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x305fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x305fb4: 0xc0766e8  jal         func_1D9BA0
    ctx->pc = 0x305FB4u;
    SET_GPR_U32(ctx, 31, 0x305FBCu);
    ctx->pc = 0x305FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305FB4u;
    // 0x305fb8: 0x26250550  addiu       $a1, $s1, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BA0u, 0x305FB4u, 0x305FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305FBCu;
label_305fbc:
    // 0x305fbc: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x305FBCu;
    {
        const bool branch_taken_0x305fbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x305fbc) {
            ctx->pc = 0x306018u;
            goto label_306018;
        }
    }
    ctx->pc = 0x305FC4u;
    // 0x305fc4: 0x7a230090  lq          $v1, 0x90($s1)
    ctx->pc = 0x305fc4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x305fc8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x305fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x305fcc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x305fd0: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x305fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x305fd4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x305fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x305fd8: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x305fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x305fdc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x305fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x305fe0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x305fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x305fe4: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x305fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x305fe8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x305fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x305fec: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x305fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x305ff0: 0xc096f30  jal         func_25BCC0
    ctx->pc = 0x305FF0u;
    SET_GPR_U32(ctx, 31, 0x305FF8u);
    ctx->pc = 0x305FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305FF0u;
    // 0x305ff4: 0x24470030  addiu       $a3, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BCC0u, 0x305FF0u, 0x305FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305FF8u;
label_305ff8:
    // 0x305ff8: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x305ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x305ffc: 0xc0766e8  jal         func_1D9BA0
    ctx->pc = 0x305FFCu;
    SET_GPR_U32(ctx, 31, 0x306004u);
    ctx->pc = 0x306000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305FFCu;
    // 0x306000: 0x26250090  addiu       $a1, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BA0u, 0x305FFCu, 0x306004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306004u;
label_306004:
    // 0x306004: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x306004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x306008: 0x26260560  addiu       $a2, $s1, 0x560
    ctx->pc = 0x306008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x30600c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30600cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306010: 0xc0972fc  jal         func_25CBF0
    ctx->pc = 0x306010u;
    SET_GPR_U32(ctx, 31, 0x306018u);
    ctx->pc = 0x306014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306010u;
    // 0x306014: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBF0u, 0x306010u, 0x306018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306018u;
label_306018:
    // 0x306018: 0x922305ae  lbu         $v1, 0x5AE($s1)
    ctx->pc = 0x306018u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1454)));
    // 0x30601c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x30601cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x306020: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x306020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x306024: 0x2442c7b4  addiu       $v0, $v0, -0x384C
    ctx->pc = 0x306024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952884));
    // 0x306028: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x306028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x30602c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30602cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x306030: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x306030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x306034: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x306034u;
    SET_GPR_U32(ctx, 31, 0x30603Cu);
    ctx->pc = 0x306038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306034u;
    // 0x306038: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x306034u, 0x30603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30603Cu;
label_30603c:
    // 0x30603c: 0xae200518  sw          $zero, 0x518($s1)
    ctx->pc = 0x30603cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1304), GPR_U32(ctx, 0));
    // 0x306040: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x306040u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x306044: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x306044u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x306048: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x306048u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x30604c: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x30604cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x306050: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x306050u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x306054: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x306054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x306058: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30605c: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x30605cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_306060:
    // 0x306060: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x306060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x306064: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x306064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x306068: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x306068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x30606c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30606cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x306070: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x306070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x306074: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x306074u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x306078: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x306078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30607c: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x30607Cu;
    SET_GPR_U32(ctx, 31, 0x306084u);
    ctx->pc = 0x306080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30607Cu;
    // 0x306080: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x30607Cu, 0x306084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306084u;
label_306084:
    // 0x306084: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x306084u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x306088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x306088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30608c: 0x7e220580  sq          $v0, 0x580($s1)
    ctx->pc = 0x30608cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1408), GPR_VEC(ctx, 2));
    // 0x306090: 0x8e2605a0  lw          $a2, 0x5A0($s1)
    ctx->pc = 0x306090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
    // 0x306094: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x306094u;
    SET_GPR_U32(ctx, 31, 0x30609Cu);
    ctx->pc = 0x306098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306094u;
    // 0x306098: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x306094u, 0x30609Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30609Cu;
label_30609c:
    // 0x30609c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30609Cu;
    {
        const bool branch_taken_0x30609c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3060A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30609Cu;
        // 0x3060a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30609c) {
            ctx->pc = 0x3060B0u;
            goto label_3060b0;
        }
    }
    ctx->pc = 0x3060A4u;
    // 0x3060a4: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3060A4u;
    SET_GPR_U32(ctx, 31, 0x3060ACu);
    ctx->pc = 0x3060A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3060A4u;
    // 0x3060a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3060A4u, 0x3060ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3060ACu;
label_3060ac:
    // 0x3060ac: 0x0  nop
    ctx->pc = 0x3060acu;
    // NOP
label_3060b0:
    // 0x3060b0: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x3060b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x3060b4: 0xc0763bc  jal         func_1D8EF0
    ctx->pc = 0x3060B4u;
    SET_GPR_U32(ctx, 31, 0x3060BCu);
    ctx->pc = 0x3060B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3060B4u;
    // 0x3060b8: 0x26250550  addiu       $a1, $s1, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x3060B4u, 0x3060BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3060BCu;
label_3060bc:
    // 0x3060bc: 0x922605ad  lbu         $a2, 0x5AD($s1)
    ctx->pc = 0x3060bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1453)));
    // 0x3060c0: 0xc62c05a8  lwc1        $f12, 0x5A8($s1)
    ctx->pc = 0x3060c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3060c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3060c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3060c8: 0x26250550  addiu       $a1, $s1, 0x550
    ctx->pc = 0x3060c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x3060cc: 0xc0c0960  jal         func_302580
    ctx->pc = 0x3060CCu;
    SET_GPR_U32(ctx, 31, 0x3060D4u);
    ctx->pc = 0x3060D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3060CCu;
    // 0x3060d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302580u, 0x3060CCu, 0x3060D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3060D4u;
label_3060d4:
    // 0x3060d4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3060D4u;
    {
        const bool branch_taken_0x3060d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3060D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060D4u;
        // 0x3060d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3060d4) {
            ctx->pc = 0x306130u;
            goto label_306130;
        }
    }
    ctx->pc = 0x3060DCu;
    // 0x3060dc: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3060DCu;
    SET_GPR_U32(ctx, 31, 0x3060E4u);
    ctx->pc = 0x3060E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3060DCu;
    // 0x3060e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3060DCu, 0x3060E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3060E4u;
label_3060e4:
    // 0x3060e4: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3060e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3060e8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3060e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3060ec: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3060ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3060f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3060f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3060f4: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3060f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3060f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3060f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3060fc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3060fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306100: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x306100u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x306104: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x306108: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x306108u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x30610c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x30610cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x306110: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x306110u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x306114: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x306114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x306118: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x306118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x30611c: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x30611cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x306120: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x306120u;
    SET_GPR_U32(ctx, 31, 0x306128u);
    ctx->pc = 0x306124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306120u;
    // 0x306124: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x306120u, 0x306128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306128u;
label_306128:
    // 0x306128: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x306128u;
    {
        const bool branch_taken_0x306128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306128) {
            ctx->pc = 0x3065C8u;
            goto label_3065c8;
        }
    }
    ctx->pc = 0x306130u;
label_306130:
    // 0x306130: 0x922605ac  lbu         $a2, 0x5AC($s1)
    ctx->pc = 0x306130u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1452)));
    // 0x306134: 0xc62c05a4  lwc1        $f12, 0x5A4($s1)
    ctx->pc = 0x306134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x306138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x306138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30613c: 0x26250550  addiu       $a1, $s1, 0x550
    ctx->pc = 0x30613cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x306140: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x306140u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306144: 0xc0c0900  jal         func_302400
    ctx->pc = 0x306144u;
    SET_GPR_U32(ctx, 31, 0x30614Cu);
    ctx->pc = 0x306148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306144u;
    // 0x306148: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x306144u, 0x30614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30614Cu;
label_30614c:
    // 0x30614c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x30614Cu;
    {
        const bool branch_taken_0x30614c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30614Cu;
        // 0x306150: 0x262401c0  addiu       $a0, $s1, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30614c) {
            ctx->pc = 0x3061B0u;
            goto label_3061b0;
        }
    }
    ctx->pc = 0x306154u;
    // 0x306154: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x306154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306158: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x306158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30615c: 0xc097184  jal         func_25C610
    ctx->pc = 0x30615Cu;
    SET_GPR_U32(ctx, 31, 0x306164u);
    ctx->pc = 0x306160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30615Cu;
    // 0x306160: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C610u, 0x30615Cu, 0x306164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306164u;
label_306164:
    // 0x306164: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x306164u;
    {
        const bool branch_taken_0x306164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306164u;
        // 0x306168: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306164) {
            ctx->pc = 0x306180u;
            goto label_306180;
        }
    }
    ctx->pc = 0x30616Cu;
    // 0x30616c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x30616Cu;
    SET_GPR_U32(ctx, 31, 0x306174u);
    ctx->pc = 0x306170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30616Cu;
    // 0x306170: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x30616Cu, 0x306174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306174u;
label_306174:
    // 0x306174: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x306174u;
    {
        const bool branch_taken_0x306174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306174) {
            ctx->pc = 0x3065C8u;
            goto label_3065c8;
        }
    }
    ctx->pc = 0x30617Cu;
    // 0x30617c: 0x0  nop
    ctx->pc = 0x30617cu;
    // NOP
label_306180:
    // 0x306180: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x306180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x306184: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x306184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x306188: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x306188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30618c: 0x26270590  addiu       $a3, $s1, 0x590
    ctx->pc = 0x30618cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x306190: 0x26280090  addiu       $t0, $s1, 0x90
    ctx->pc = 0x306190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x306194: 0xae220518  sw          $v0, 0x518($s1)
    ctx->pc = 0x306194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1304), GPR_U32(ctx, 2));
    // 0x306198: 0x8e240518  lw          $a0, 0x518($s1)
    ctx->pc = 0x306198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
    // 0x30619c: 0xc0971e4  jal         func_25C790
    ctx->pc = 0x30619Cu;
    SET_GPR_U32(ctx, 31, 0x3061A4u);
    ctx->pc = 0x3061A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30619Cu;
    // 0x3061a0: 0x262905af  addiu       $t1, $s1, 0x5AF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 1455));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C790u, 0x30619Cu, 0x3061A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3061A4u;
label_3061a4:
    // 0x3061a4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3061a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3061a8: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x3061A8u;
    {
        const bool branch_taken_0x3061a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3061ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061A8u;
        // 0x3061ac: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3061a8) {
            ctx->pc = 0x3065C8u;
            goto label_3065c8;
        }
    }
    ctx->pc = 0x3061B0u;
label_3061b0:
    // 0x3061b0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3061b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3061b4: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x3061b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x3061b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3061b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3061bc: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3061bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3061c0: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x3061c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x3061c4: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x3061c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3061c8: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x3061c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3061cc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3061ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3061d0: 0xc0c0980  jal         func_302600
    ctx->pc = 0x3061D0u;
    SET_GPR_U32(ctx, 31, 0x3061D8u);
    ctx->pc = 0x3061D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3061D0u;
    // 0x3061d4: 0x27aa014c  addiu       $t2, $sp, 0x14C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x3061D0u, 0x3061D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3061D8u;
label_3061d8:
    // 0x3061d8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3061D8u;
    {
        const bool branch_taken_0x3061d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3061d8) {
            ctx->pc = 0x306230u;
            goto label_306230;
        }
    }
    ctx->pc = 0x3061E0u;
    // 0x3061e0: 0x8e2605a0  lw          $a2, 0x5A0($s1)
    ctx->pc = 0x3061e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
    // 0x3061e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3061e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3061e8: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3061E8u;
    SET_GPR_U32(ctx, 31, 0x3061F0u);
    ctx->pc = 0x3061ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3061E8u;
    // 0x3061ec: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3061E8u, 0x3061F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3061F0u;
label_3061f0:
    // 0x3061f0: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3061f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3061f4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3061f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3061f8: 0x3c022b00  lui         $v0, 0x2B00
    ctx->pc = 0x3061f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11008 << 16));
    // 0x3061fc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3061fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x306200: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x306200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306204: 0x34456002  ori         $a1, $v0, 0x6002
    ctx->pc = 0x306204u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24578);
    // 0x306208: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x306208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x30620c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30620cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306210: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x306210u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306214: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x306214u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306218: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x306218u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30621c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x30621Cu;
    SET_GPR_U32(ctx, 31, 0x306224u);
    ctx->pc = 0x306220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30621Cu;
    // 0x306220: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x30621Cu, 0x306224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306224u;
label_306224:
    // 0x306224: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x306224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x306228: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x306228u;
    {
        const bool branch_taken_0x306228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306228u;
        // 0x30622c: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306228) {
            ctx->pc = 0x3065C8u;
            goto label_3065c8;
        }
    }
    ctx->pc = 0x306230u;
label_306230:
    // 0x306230: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x306230u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x306234: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x306234u;
    {
        const bool branch_taken_0x306234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x306238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306234u;
        // 0x306238: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306234) {
            ctx->pc = 0x306248u;
            goto label_306248;
        }
    }
    ctx->pc = 0x30623Cu;
    // 0x30623c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x30623Cu;
    {
        const bool branch_taken_0x30623c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30623c) {
            ctx->pc = 0x3062C8u;
            goto label_3062c8;
        }
    }
    ctx->pc = 0x306244u;
    // 0x306244: 0x0  nop
    ctx->pc = 0x306244u;
    // NOP
label_306248:
    // 0x306248: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x306248u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x30624c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x30624cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x306250: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x306250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x306254: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x306254u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x306258: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x306258u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x30625c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x30625Cu;
    {
        const bool branch_taken_0x30625c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x30625c) {
            ctx->pc = 0x306298u;
            goto label_306298;
        }
    }
    ctx->pc = 0x306264u;
    // 0x306264: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x306264u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x306268: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x306268u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x30626c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x30626Cu;
    {
        const bool branch_taken_0x30626c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x306270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30626Cu;
        // 0x306270: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30626c) {
            ctx->pc = 0x3062C0u;
            goto label_3062c0;
        }
    }
    ctx->pc = 0x306274u;
    // 0x306274: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x306274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306278: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x306278u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30627c: 0x0  nop
    ctx->pc = 0x30627cu;
    // NOP
    // 0x306280: 0x0  nop
    ctx->pc = 0x306280u;
    // NOP
    // 0x306284: 0x2010  mfhi        $a0
    ctx->pc = 0x306284u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x306288: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x306288u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x30628c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30628Cu;
    {
        const bool branch_taken_0x30628c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30628Cu;
        // 0x306290: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30628c) {
            ctx->pc = 0x3062C0u;
            goto label_3062c0;
        }
    }
    ctx->pc = 0x306294u;
    // 0x306294: 0x0  nop
    ctx->pc = 0x306294u;
    // NOP
label_306298:
    // 0x306298: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x306298u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x30629c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x30629cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3062a0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3062A0u;
    {
        const bool branch_taken_0x3062a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3062a0) {
            ctx->pc = 0x3062C0u;
            goto label_3062c0;
        }
    }
    ctx->pc = 0x3062A8u;
    // 0x3062a8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3062a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3062ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3062acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3062b0: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3062b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3062b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3062B4u;
    {
        const bool branch_taken_0x3062b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3062B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062B4u;
        // 0x3062b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3062b4) {
            ctx->pc = 0x3062C8u;
            goto label_3062c8;
        }
    }
    ctx->pc = 0x3062BCu;
    // 0x3062bc: 0x0  nop
    ctx->pc = 0x3062bcu;
    // NOP
label_3062c0:
    // 0x3062c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3062c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3062c4: 0x0  nop
    ctx->pc = 0x3062c4u;
    // NOP
label_3062c8:
    // 0x3062c8: 0x146000bf  bnez        $v1, . + 4 + (0xBF << 2)
    ctx->pc = 0x3062C8u;
    {
        const bool branch_taken_0x3062c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3062CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062C8u;
        // 0x3062cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3062c8) {
            ctx->pc = 0x3065C8u;
            goto label_3065c8;
        }
    }
    ctx->pc = 0x3062D0u;
    // 0x3062d0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3062D0u;
    SET_GPR_U32(ctx, 31, 0x3062D8u);
    ctx->pc = 0x3062D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3062D0u;
    // 0x3062d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3062D0u, 0x3062D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3062D8u;
label_3062d8:
    // 0x3062d8: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x3062D8u;
    {
        const bool branch_taken_0x3062d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3062d8) {
            ctx->pc = 0x3065C8u;
            goto label_3065c8;
        }
    }
    ctx->pc = 0x3062E0u;
label_3062e0:
    // 0x3062e0: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x3062e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
    // 0x3062e4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3062e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3062e8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3062e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3062ec: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3062ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3062f0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3062f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3062f4: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3062f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3062f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3062f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3062fc: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3062fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_306300:
    // 0x306300: 0x8e250518  lw          $a1, 0x518($s1)
    ctx->pc = 0x306300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
    // 0x306304: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x306304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x306308: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x306308u;
    SET_GPR_U32(ctx, 31, 0x306310u);
    ctx->pc = 0x30630Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306308u;
    // 0x30630c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x306308u, 0x306310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306310u;
label_306310:
    // 0x306310: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x306310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306314: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x306314u;
    {
        const bool branch_taken_0x306314 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x306318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306314u;
        // 0x306318: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306314) {
            ctx->pc = 0x306330u;
            goto label_306330;
        }
    }
    ctx->pc = 0x30631Cu;
    // 0x30631c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x30631Cu;
    SET_GPR_U32(ctx, 31, 0x306324u);
    ctx->pc = 0x306320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30631Cu;
    // 0x306320: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x30631Cu, 0x306324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306324u;
label_306324:
    // 0x306324: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x306324u;
    {
        const bool branch_taken_0x306324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306324) {
            ctx->pc = 0x3065C8u;
            goto label_3065c8;
        }
    }
    ctx->pc = 0x30632Cu;
    // 0x30632c: 0x0  nop
    ctx->pc = 0x30632cu;
    // NOP
label_306330:
    // 0x306330: 0xc097864  jal         func_25E190
    ctx->pc = 0x306330u;
    SET_GPR_U32(ctx, 31, 0x306338u);
    ctx->pc = 0x306334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306330u;
    // 0x306334: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E190u, 0x306330u, 0x306338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306338u;
label_306338:
    // 0x306338: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x306338u;
    {
        const bool branch_taken_0x306338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306338u;
        // 0x30633c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306338) {
            ctx->pc = 0x306350u;
            goto label_306350;
        }
    }
    ctx->pc = 0x306340u;
    // 0x306340: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x306340u;
    SET_GPR_U32(ctx, 31, 0x306348u);
    ctx->pc = 0x306344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306340u;
    // 0x306344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x306340u, 0x306348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306348u;
label_306348:
    // 0x306348: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x306348u;
    {
        const bool branch_taken_0x306348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306348) {
            ctx->pc = 0x3065C8u;
            goto label_3065c8;
        }
    }
    ctx->pc = 0x306350u;
label_306350:
    // 0x306350: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x306350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x306354: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x306354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x306358: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x306358u;
    {
        const bool branch_taken_0x306358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306358u;
        // 0x30635c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306358) {
            ctx->pc = 0x306370u;
            goto label_306370;
        }
    }
    ctx->pc = 0x306360u;
    // 0x306360: 0x8c22cec0  lw          $v0, -0x3140($at)
    ctx->pc = 0x306360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
    // 0x306364: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x306364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x306368: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x306368u;
    {
        const bool branch_taken_0x306368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306368) {
            ctx->pc = 0x306390u;
            goto label_306390;
        }
    }
    ctx->pc = 0x306370u;
label_306370:
    // 0x306370: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x306370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x306374: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x306374u;
    {
        const bool branch_taken_0x306374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x306378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306374u;
        // 0x306378: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306374) {
            ctx->pc = 0x3063A8u;
            goto label_3063a8;
        }
    }
    ctx->pc = 0x30637Cu;
    // 0x30637c: 0x8c22cec0  lw          $v0, -0x3140($at)
    ctx->pc = 0x30637cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
    // 0x306380: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x306380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x306384: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x306384u;
    {
        const bool branch_taken_0x306384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306384) {
            ctx->pc = 0x3063A8u;
            goto label_3063a8;
        }
    }
    ctx->pc = 0x30638Cu;
    // 0x30638c: 0x0  nop
    ctx->pc = 0x30638cu;
    // NOP
label_306390:
    // 0x306390: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x306390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306394: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x306394u;
    SET_GPR_U32(ctx, 31, 0x30639Cu);
    ctx->pc = 0x306398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306394u;
    // 0x306398: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x306394u, 0x30639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30639Cu;
label_30639c:
    // 0x30639c: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x30639Cu;
    {
        const bool branch_taken_0x30639c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30639c) {
            ctx->pc = 0x3065C8u;
            goto label_3065c8;
        }
    }
    ctx->pc = 0x3063A4u;
    // 0x3063a4: 0x0  nop
    ctx->pc = 0x3063a4u;
    // NOP
label_3063a8:
    // 0x3063a8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3063a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3063ac: 0x922305af  lbu         $v1, 0x5AF($s1)
    ctx->pc = 0x3063acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1455)));
    // 0x3063b0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3063b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3063b4: 0x26260590  addiu       $a2, $s1, 0x590
    ctx->pc = 0x3063b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x3063b8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3063b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3063bc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3063bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3063c0: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x3063C0u;
    SET_GPR_U32(ctx, 31, 0x3063C8u);
    ctx->pc = 0x3063C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3063C0u;
    // 0x3063c4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3063C0u, 0x3063C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3063C8u;
label_3063c8:
    // 0x3063c8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3063c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3063cc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3063ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3063d0: 0x922305af  lbu         $v1, 0x5AF($s1)
    ctx->pc = 0x3063d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1455)));
    // 0x3063d4: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x3063d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3063d8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3063d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3063dc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3063dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3063e0: 0xc0767a8  jal         func_1D9EA0
    ctx->pc = 0x3063E0u;
    SET_GPR_U32(ctx, 31, 0x3063E8u);
    ctx->pc = 0x3063E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3063E0u;
    // 0x3063e4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9EA0u, 0x3063E0u, 0x3063E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3063E8u;
label_3063e8:
    // 0x3063e8: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3063e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3063ec: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x3063ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x3063f0: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x3063f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3063f4: 0x24c65c70  addiu       $a2, $a2, 0x5C70
    ctx->pc = 0x3063f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23664));
    // 0x3063f8: 0xc0972fc  jal         func_25CBF0
    ctx->pc = 0x3063F8u;
    SET_GPR_U32(ctx, 31, 0x306400u);
    ctx->pc = 0x3063FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3063F8u;
    // 0x3063fc: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBF0u, 0x3063F8u, 0x306400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306400u;
label_306400:
    // 0x306400: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x306400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x306404: 0xc0763bc  jal         func_1D8EF0
    ctx->pc = 0x306404u;
    SET_GPR_U32(ctx, 31, 0x30640Cu);
    ctx->pc = 0x306408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306404u;
    // 0x306408: 0x26250550  addiu       $a1, $s1, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x306404u, 0x30640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30640Cu;
label_30640c:
    // 0x30640c: 0x8e2605a0  lw          $a2, 0x5A0($s1)
    ctx->pc = 0x30640cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
    // 0x306410: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x306410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306414: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x306414u;
    SET_GPR_U32(ctx, 31, 0x30641Cu);
    ctx->pc = 0x306418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306414u;
    // 0x306418: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x306414u, 0x30641Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30641Cu;
label_30641c:
    // 0x30641c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30641Cu;
    {
        const bool branch_taken_0x30641c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30641Cu;
        // 0x306420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30641c) {
            ctx->pc = 0x306430u;
            goto label_306430;
        }
    }
    ctx->pc = 0x306424u;
    // 0x306424: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x306424u;
    SET_GPR_U32(ctx, 31, 0x30642Cu);
    ctx->pc = 0x306428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306424u;
    // 0x306428: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x306424u, 0x30642Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30642Cu;
label_30642c:
    // 0x30642c: 0x0  nop
    ctx->pc = 0x30642cu;
    // NOP
label_306430:
    // 0x306430: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x306430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x306434: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x306434u;
    {
        const bool branch_taken_0x306434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x306438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306434u;
        // 0x306438: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306434) {
            ctx->pc = 0x306448u;
            goto label_306448;
        }
    }
    ctx->pc = 0x30643Cu;
    // 0x30643c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x30643Cu;
    {
        const bool branch_taken_0x30643c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30643c) {
            ctx->pc = 0x3064C8u;
            goto label_3064c8;
        }
    }
    ctx->pc = 0x306444u;
    // 0x306444: 0x0  nop
    ctx->pc = 0x306444u;
    // NOP
label_306448:
    // 0x306448: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x306448u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x30644c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x30644cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x306450: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x306450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x306454: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x306454u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x306458: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x306458u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x30645c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x30645Cu;
    {
        const bool branch_taken_0x30645c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x30645c) {
            ctx->pc = 0x306498u;
            goto label_306498;
        }
    }
    ctx->pc = 0x306464u;
    // 0x306464: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x306464u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x306468: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x306468u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x30646c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x30646Cu;
    {
        const bool branch_taken_0x30646c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x306470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30646Cu;
        // 0x306470: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30646c) {
            ctx->pc = 0x3064C0u;
            goto label_3064c0;
        }
    }
    ctx->pc = 0x306474u;
    // 0x306474: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x306474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306478: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x306478u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30647c: 0x0  nop
    ctx->pc = 0x30647cu;
    // NOP
    // 0x306480: 0x0  nop
    ctx->pc = 0x306480u;
    // NOP
    // 0x306484: 0x2010  mfhi        $a0
    ctx->pc = 0x306484u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x306488: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x306488u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x30648c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30648Cu;
    {
        const bool branch_taken_0x30648c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30648Cu;
        // 0x306490: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30648c) {
            ctx->pc = 0x3064C0u;
            goto label_3064c0;
        }
    }
    ctx->pc = 0x306494u;
    // 0x306494: 0x0  nop
    ctx->pc = 0x306494u;
    // NOP
label_306498:
    // 0x306498: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x306498u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x30649c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x30649cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3064a0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3064A0u;
    {
        const bool branch_taken_0x3064a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3064a0) {
            ctx->pc = 0x3064C0u;
            goto label_3064c0;
        }
    }
    ctx->pc = 0x3064A8u;
    // 0x3064a8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3064a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3064ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3064acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3064b0: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3064b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3064b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3064B4u;
    {
        const bool branch_taken_0x3064b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3064B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064B4u;
        // 0x3064b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3064b4) {
            ctx->pc = 0x3064C8u;
            goto label_3064c8;
        }
    }
    ctx->pc = 0x3064BCu;
    // 0x3064bc: 0x0  nop
    ctx->pc = 0x3064bcu;
    // NOP
label_3064c0:
    // 0x3064c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3064c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3064c4: 0x0  nop
    ctx->pc = 0x3064c4u;
    // NOP
label_3064c8:
    // 0x3064c8: 0x1460003f  bnez        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x3064C8u;
    {
        const bool branch_taken_0x3064c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3064CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064C8u;
        // 0x3064cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3064c8) {
            ctx->pc = 0x3065C8u;
            goto label_3065c8;
        }
    }
    ctx->pc = 0x3064D0u;
    // 0x3064d0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3064D0u;
    SET_GPR_U32(ctx, 31, 0x3064D8u);
    ctx->pc = 0x3064D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3064D0u;
    // 0x3064d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3064D0u, 0x3064D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3064D8u;
label_3064d8:
    // 0x3064d8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3064D8u;
    {
        const bool branch_taken_0x3064d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3064d8) {
            ctx->pc = 0x3065C8u;
            goto label_3065c8;
        }
    }
    ctx->pc = 0x3064E0u;
label_3064e0:
    // 0x3064e0: 0x8622052a  lh          $v0, 0x52A($s1)
    ctx->pc = 0x3064e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1322)));
    // 0x3064e4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3064e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3064e8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3064e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3064ec: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3064ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3064f0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3064f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3064f4: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3064f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3064f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3064f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3064fc: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3064fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_306500:
    // 0x306500: 0x8e2605a0  lw          $a2, 0x5A0($s1)
    ctx->pc = 0x306500u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
    // 0x306504: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x306504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306508: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x306508u;
    SET_GPR_U32(ctx, 31, 0x306510u);
    ctx->pc = 0x30650Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306508u;
    // 0x30650c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x306508u, 0x306510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306510u;
label_306510:
    // 0x306510: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x306510u;
    {
        const bool branch_taken_0x306510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306510u;
        // 0x306514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306510) {
            ctx->pc = 0x306520u;
            goto label_306520;
        }
    }
    ctx->pc = 0x306518u;
    // 0x306518: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x306518u;
    SET_GPR_U32(ctx, 31, 0x306520u);
    ctx->pc = 0x30651Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306518u;
    // 0x30651c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x306518u, 0x306520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306520u;
label_306520:
    // 0x306520: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x306520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x306524: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x306524u;
    {
        const bool branch_taken_0x306524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x306528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306524u;
        // 0x306528: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306524) {
            ctx->pc = 0x306538u;
            goto label_306538;
        }
    }
    ctx->pc = 0x30652Cu;
    // 0x30652c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x30652Cu;
    {
        const bool branch_taken_0x30652c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30652c) {
            ctx->pc = 0x3065B8u;
            goto label_3065b8;
        }
    }
    ctx->pc = 0x306534u;
    // 0x306534: 0x0  nop
    ctx->pc = 0x306534u;
    // NOP
label_306538:
    // 0x306538: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x306538u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x30653c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x30653cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x306540: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x306540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x306544: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x306544u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x306548: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x306548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x30654c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x30654Cu;
    {
        const bool branch_taken_0x30654c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x30654c) {
            ctx->pc = 0x306588u;
            goto label_306588;
        }
    }
    ctx->pc = 0x306554u;
    // 0x306554: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x306554u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x306558: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x306558u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x30655c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x30655Cu;
    {
        const bool branch_taken_0x30655c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x306560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30655Cu;
        // 0x306560: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30655c) {
            ctx->pc = 0x3065B0u;
            goto label_3065b0;
        }
    }
    ctx->pc = 0x306564u;
    // 0x306564: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x306564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306568: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x306568u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30656c: 0x0  nop
    ctx->pc = 0x30656cu;
    // NOP
    // 0x306570: 0x0  nop
    ctx->pc = 0x306570u;
    // NOP
    // 0x306574: 0x2010  mfhi        $a0
    ctx->pc = 0x306574u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x306578: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x306578u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x30657c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30657Cu;
    {
        const bool branch_taken_0x30657c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30657Cu;
        // 0x306580: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30657c) {
            ctx->pc = 0x3065B0u;
            goto label_3065b0;
        }
    }
    ctx->pc = 0x306584u;
    // 0x306584: 0x0  nop
    ctx->pc = 0x306584u;
    // NOP
label_306588:
    // 0x306588: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x306588u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x30658c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x30658cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x306590: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x306590u;
    {
        const bool branch_taken_0x306590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x306590) {
            ctx->pc = 0x3065B0u;
            goto label_3065b0;
        }
    }
    ctx->pc = 0x306598u;
    // 0x306598: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x306598u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x30659c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30659cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3065a0: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3065a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3065a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3065A4u;
    {
        const bool branch_taken_0x3065a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3065A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065A4u;
        // 0x3065a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3065a4) {
            ctx->pc = 0x3065B8u;
            goto label_3065b8;
        }
    }
    ctx->pc = 0x3065ACu;
    // 0x3065ac: 0x0  nop
    ctx->pc = 0x3065acu;
    // NOP
label_3065b0:
    // 0x3065b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3065b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3065b4: 0x0  nop
    ctx->pc = 0x3065b4u;
    // NOP
label_3065b8:
    // 0x3065b8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3065B8u;
    {
        const bool branch_taken_0x3065b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3065BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065B8u;
        // 0x3065bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3065b8) {
            ctx->pc = 0x3065C8u;
            goto label_3065c8;
        }
    }
    ctx->pc = 0x3065C0u;
    // 0x3065c0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3065C0u;
    SET_GPR_U32(ctx, 31, 0x3065C8u);
    ctx->pc = 0x3065C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3065C0u;
    // 0x3065c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3065C0u, 0x3065C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3065C8u;
label_3065c8:
    // 0x3065c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3065c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3065cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3065ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3065d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3065d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3065d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3065D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3065D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065D4u;
        // 0x3065d8: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3065D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3065DCu;
}
