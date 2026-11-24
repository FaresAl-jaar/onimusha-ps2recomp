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

// Function: sub_002EAE60
// Address: 0x2eae60 - 0x2eb6b8
void sub_002EAE60_0x2eae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EAE60_0x2eae60");
#endif

    switch (ctx->pc) {
        case 0x2eae98u: goto label_2eae98;
        case 0x2eaeacu: goto label_2eaeac;
        case 0x2eaec4u: goto label_2eaec4;
        case 0x2eaedcu: goto label_2eaedc;
        case 0x2eaef4u: goto label_2eaef4;
        case 0x2eaf14u: goto label_2eaf14;
        case 0x2eaf54u: goto label_2eaf54;
        case 0x2eaf9cu: goto label_2eaf9c;
        case 0x2eafdcu: goto label_2eafdc;
        case 0x2eb024u: goto label_2eb024;
        case 0x2eb064u: goto label_2eb064;
        case 0x2eb0acu: goto label_2eb0ac;
        case 0x2eb0ecu: goto label_2eb0ec;
        case 0x2eb134u: goto label_2eb134;
        case 0x2eb174u: goto label_2eb174;
        case 0x2eb1bcu: goto label_2eb1bc;
        case 0x2eb1fcu: goto label_2eb1fc;
        case 0x2eb244u: goto label_2eb244;
        case 0x2eb284u: goto label_2eb284;
        case 0x2eb2bcu: goto label_2eb2bc;
        case 0x2eb2fcu: goto label_2eb2fc;
        case 0x2eb334u: goto label_2eb334;
        case 0x2eb374u: goto label_2eb374;
        case 0x2eb3b0u: goto label_2eb3b0;
        case 0x2eb3f0u: goto label_2eb3f0;
        case 0x2eb42cu: goto label_2eb42c;
        case 0x2eb46cu: goto label_2eb46c;
        case 0x2eb4a4u: goto label_2eb4a4;
        case 0x2eb4e4u: goto label_2eb4e4;
        case 0x2eb534u: goto label_2eb534;
        case 0x2eb574u: goto label_2eb574;
        case 0x2eb5c4u: goto label_2eb5c4;
        case 0x2eb604u: goto label_2eb604;
        case 0x2eb644u: goto label_2eb644;
        case 0x2eb684u: goto label_2eb684;
        default: break;
    }

    ctx->pc = 0x2eae60u;

    // 0x2eae60: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2eae60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2eae64: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2eae64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2eae68: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x2eae68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x2eae6c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x2eae6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x2eae70: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x2eae70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x2eae74: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2eae74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x2eae78: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2eae78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2eae7c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2eae7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae80: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2eae80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2eae84: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2eae84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2eae88: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2eae88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2eae8c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2eae8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2eae90: 0xc0e4990  jal         func_392640
    ctx->pc = 0x2EAE90u;
    SET_GPR_U32(ctx, 31, 0x2EAE98u);
    ctx->pc = 0x2EAE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAE90u;
    // 0x2eae94: 0x7fb00020  sq          $s0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392640u, 0x2EAE90u, 0x2EAE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE98u;
label_2eae98:
    // 0x2eae98: 0x8fb400f0  lw          $s4, 0xF0($sp)
    ctx->pc = 0x2eae98u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2eae9c: 0x8fb300f4  lw          $s3, 0xF4($sp)
    ctx->pc = 0x2eae9cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x2eaea0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2eaea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaea4: 0xc0bb0cc  jal         func_2EC330
    ctx->pc = 0x2EAEA4u;
    SET_GPR_U32(ctx, 31, 0x2EAEACu);
    ctx->pc = 0x2EAEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAEA4u;
    // 0x2eaea8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC330u, 0x2EAEA4u, 0x2EAEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAEACu;
label_2eaeac:
    // 0x2eaeac: 0x8fb200f8  lw          $s2, 0xF8($sp)
    ctx->pc = 0x2eaeacu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2eaeb0: 0x8fb100fc  lw          $s1, 0xFC($sp)
    ctx->pc = 0x2eaeb0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x2eaeb4: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x2eaeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x2eaeb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eaeb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaebc: 0xc0bb0cc  jal         func_2EC330
    ctx->pc = 0x2EAEBCu;
    SET_GPR_U32(ctx, 31, 0x2EAEC4u);
    ctx->pc = 0x2EAEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAEBCu;
    // 0x2eaec0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC330u, 0x2EAEBCu, 0x2EAEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAEC4u;
label_2eaec4:
    // 0x2eaec4: 0x8fb00100  lw          $s0, 0x100($sp)
    ctx->pc = 0x2eaec4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2eaec8: 0x8fb60104  lw          $s6, 0x104($sp)
    ctx->pc = 0x2eaec8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2eaecc: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x2eaeccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x2eaed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eaed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaed4: 0xc0bb0cc  jal         func_2EC330
    ctx->pc = 0x2EAED4u;
    SET_GPR_U32(ctx, 31, 0x2EAEDCu);
    ctx->pc = 0x2EAED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAED4u;
    // 0x2eaed8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC330u, 0x2EAED4u, 0x2EAEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAEDCu;
label_2eaedc:
    // 0x2eaedc: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x2eaedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x2eaee0: 0x8eb70244  lw          $s7, 0x244($s5)
    ctx->pc = 0x2eaee0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 580)));
    // 0x2eaee4: 0x8ebe0264  lw          $fp, 0x264($s5)
    ctx->pc = 0x2eaee4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 612)));
    // 0x2eaee8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2eaee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaeec: 0xc0bb0cc  jal         func_2EC330
    ctx->pc = 0x2EAEECu;
    SET_GPR_U32(ctx, 31, 0x2EAEF4u);
    ctx->pc = 0x2EAEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAEECu;
    // 0x2eaef0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC330u, 0x2EAEECu, 0x2EAEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAEF4u;
label_2eaef4:
    // 0x2eaef4: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x2eaef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x2eaef8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2eaef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2eaefc: 0x8ea2023c  lw          $v0, 0x23C($s5)
    ctx->pc = 0x2eaefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 572)));
    // 0x2eaf00: 0x24843050  addiu       $a0, $a0, 0x3050
    ctx->pc = 0x2eaf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    // 0x2eaf04: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x2eaf04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x2eaf08: 0x8eb5024c  lw          $s5, 0x24C($s5)
    ctx->pc = 0x2eaf08u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 588)));
    // 0x2eaf0c: 0xc0ce284  jal         func_338A10
    ctx->pc = 0x2EAF0Cu;
    SET_GPR_U32(ctx, 31, 0x2EAF14u);
    ctx->pc = 0x2EAF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAF0Cu;
    // 0x2eaf10: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x2EAF0Cu, 0x2EAF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAF14u;
label_2eaf14:
    // 0x2eaf14: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x2eaf14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x2eaf18: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eaf18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eaf1c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2eaf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2eaf20: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eaf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eaf24: 0x24427bb0  addiu       $v0, $v0, 0x7BB0
    ctx->pc = 0x2eaf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31664));
    // 0x2eaf28: 0x2405009c  addiu       $a1, $zero, 0x9C
    ctx->pc = 0x2eaf28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x2eaf2c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2eaf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2eaf30: 0x24060058  addiu       $a2, $zero, 0x58
    ctx->pc = 0x2eaf30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2eaf34: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2eaf34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2eaf38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eaf38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaf3c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2eaf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2eaf40: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eaf40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eaf44: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eaf44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eaf48: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eaf48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eaf4c: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EAF4Cu;
    SET_GPR_U32(ctx, 31, 0x2EAF54u);
    ctx->pc = 0x2EAF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAF4Cu;
    // 0x2eaf50: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EAF4Cu, 0x2EAF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAF54u;
label_2eaf54:
    // 0x2eaf54: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2eaf54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2eaf58: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2eaf58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2eaf5c: 0x24637bf8  addiu       $v1, $v1, 0x7BF8
    ctx->pc = 0x2eaf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31736));
    // 0x2eaf60: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eaf60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eaf64: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2eaf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2eaf68: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x2eaf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
    // 0x2eaf6c: 0xffb40008  sd          $s4, 0x8($sp)
    ctx->pc = 0x2eaf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 20));
    // 0x2eaf70: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eaf70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eaf74: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x2eaf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x2eaf78: 0x240501dc  addiu       $a1, $zero, 0x1DC
    ctx->pc = 0x2eaf78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 476));
    // 0x2eaf7c: 0x24060058  addiu       $a2, $zero, 0x58
    ctx->pc = 0x2eaf7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2eaf80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eaf80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaf84: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eaf84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eaf88: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eaf88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eaf8c: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eaf8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eaf90: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x2eaf90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eaf94: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EAF94u;
    SET_GPR_U32(ctx, 31, 0x2EAF9Cu);
    ctx->pc = 0x2EAF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAF94u;
    // 0x2eaf98: 0xffb30018  sd          $s3, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EAF94u, 0x2EAF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAF9Cu;
label_2eaf9c:
    // 0x2eaf9c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2eaf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2eafa0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2eafa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2eafa4: 0x24637bb0  addiu       $v1, $v1, 0x7BB0
    ctx->pc = 0x2eafa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31664));
    // 0x2eafa8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eafa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eafac: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2eafacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2eafb0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2eafb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2eafb4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2eafb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2eafb8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eafb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eafbc: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x2eafbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x2eafc0: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x2eafc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x2eafc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eafc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eafc8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eafc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eafcc: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eafccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eafd0: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eafd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eafd4: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EAFD4u;
    SET_GPR_U32(ctx, 31, 0x2EAFDCu);
    ctx->pc = 0x2EAFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAFD4u;
    // 0x2eafd8: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EAFD4u, 0x2EAFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAFDCu;
label_2eafdc:
    // 0x2eafdc: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2eafdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2eafe0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eafe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eafe4: 0x24637c08  addiu       $v1, $v1, 0x7C08
    ctx->pc = 0x2eafe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31752));
    // 0x2eafe8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2eafe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2eafec: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2eafecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2eaff0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eaff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eaff4: 0x3443001c  ori         $v1, $v0, 0x1C
    ctx->pc = 0x2eaff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28);
    // 0x2eaff8: 0x240501b4  addiu       $a1, $zero, 0x1B4
    ctx->pc = 0x2eaff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
    // 0x2eaffc: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x2eaffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2eb000: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x2eb000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x2eb004: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb008: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eb008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb00c: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eb00cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eb010: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eb010u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eb014: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x2eb014u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eb018: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2eb018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2eb01c: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EB01Cu;
    SET_GPR_U32(ctx, 31, 0x2EB024u);
    ctx->pc = 0x2EB020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB01Cu;
    // 0x2eb020: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EB01Cu, 0x2EB024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB024u;
label_2eb024:
    // 0x2eb024: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2eb024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2eb028: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2eb028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2eb02c: 0x24637bb0  addiu       $v1, $v1, 0x7BB0
    ctx->pc = 0x2eb02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31664));
    // 0x2eb030: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eb030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eb034: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2eb034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2eb038: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2eb038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2eb03c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2eb03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2eb040: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eb040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eb044: 0x2405009c  addiu       $a1, $zero, 0x9C
    ctx->pc = 0x2eb044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x2eb048: 0x24060092  addiu       $a2, $zero, 0x92
    ctx->pc = 0x2eb048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
    // 0x2eb04c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb04cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb050: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eb050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb054: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eb054u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eb058: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eb058u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eb05c: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EB05Cu;
    SET_GPR_U32(ctx, 31, 0x2EB064u);
    ctx->pc = 0x2EB060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB05Cu;
    // 0x2eb060: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EB05Cu, 0x2EB064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB064u;
label_2eb064:
    // 0x2eb064: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2eb064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2eb068: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2eb068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2eb06c: 0x24637bf8  addiu       $v1, $v1, 0x7BF8
    ctx->pc = 0x2eb06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31736));
    // 0x2eb070: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eb070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eb074: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2eb074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2eb078: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x2eb078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
    // 0x2eb07c: 0xffb20008  sd          $s2, 0x8($sp)
    ctx->pc = 0x2eb07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    // 0x2eb080: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eb080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eb084: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x2eb084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x2eb088: 0x240501dc  addiu       $a1, $zero, 0x1DC
    ctx->pc = 0x2eb088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 476));
    // 0x2eb08c: 0x24060092  addiu       $a2, $zero, 0x92
    ctx->pc = 0x2eb08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
    // 0x2eb090: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb094: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eb094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb098: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eb098u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eb09c: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eb09cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eb0a0: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x2eb0a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eb0a4: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EB0A4u;
    SET_GPR_U32(ctx, 31, 0x2EB0ACu);
    ctx->pc = 0x2EB0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB0A4u;
    // 0x2eb0a8: 0xffb10018  sd          $s1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EB0A4u, 0x2EB0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB0ACu;
label_2eb0ac:
    // 0x2eb0ac: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2eb0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2eb0b0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2eb0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2eb0b4: 0x24637bb0  addiu       $v1, $v1, 0x7BB0
    ctx->pc = 0x2eb0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31664));
    // 0x2eb0b8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eb0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eb0bc: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2eb0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2eb0c0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2eb0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2eb0c4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2eb0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2eb0c8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eb0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eb0cc: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x2eb0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x2eb0d0: 0x240600ac  addiu       $a2, $zero, 0xAC
    ctx->pc = 0x2eb0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x2eb0d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb0d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb0d8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eb0d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb0dc: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eb0dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eb0e0: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eb0e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eb0e4: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EB0E4u;
    SET_GPR_U32(ctx, 31, 0x2EB0ECu);
    ctx->pc = 0x2EB0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB0E4u;
    // 0x2eb0e8: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EB0E4u, 0x2EB0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB0ECu;
label_2eb0ec:
    // 0x2eb0ec: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2eb0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2eb0f0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eb0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eb0f4: 0x24637c08  addiu       $v1, $v1, 0x7C08
    ctx->pc = 0x2eb0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31752));
    // 0x2eb0f8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2eb0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2eb0fc: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2eb0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2eb100: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eb100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eb104: 0x3443001c  ori         $v1, $v0, 0x1C
    ctx->pc = 0x2eb104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28);
    // 0x2eb108: 0x240501b4  addiu       $a1, $zero, 0x1B4
    ctx->pc = 0x2eb108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
    // 0x2eb10c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2eb10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2eb110: 0x240600ac  addiu       $a2, $zero, 0xAC
    ctx->pc = 0x2eb110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x2eb114: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb118: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eb118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb11c: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eb11cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eb120: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eb120u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eb124: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x2eb124u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eb128: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2eb128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2eb12c: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EB12Cu;
    SET_GPR_U32(ctx, 31, 0x2EB134u);
    ctx->pc = 0x2EB130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB12Cu;
    // 0x2eb130: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EB12Cu, 0x2EB134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB134u;
label_2eb134:
    // 0x2eb134: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2eb134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2eb138: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2eb138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2eb13c: 0x24637bb0  addiu       $v1, $v1, 0x7BB0
    ctx->pc = 0x2eb13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31664));
    // 0x2eb140: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eb140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eb144: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2eb144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2eb148: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2eb148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2eb14c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2eb14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2eb150: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eb150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eb154: 0x2405009c  addiu       $a1, $zero, 0x9C
    ctx->pc = 0x2eb154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x2eb158: 0x240600cc  addiu       $a2, $zero, 0xCC
    ctx->pc = 0x2eb158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x2eb15c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb15cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb160: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eb160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb164: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eb164u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eb168: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eb168u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eb16c: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EB16Cu;
    SET_GPR_U32(ctx, 31, 0x2EB174u);
    ctx->pc = 0x2EB170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB16Cu;
    // 0x2eb170: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EB16Cu, 0x2EB174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB174u;
label_2eb174:
    // 0x2eb174: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2eb174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2eb178: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2eb178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2eb17c: 0x24637bf8  addiu       $v1, $v1, 0x7BF8
    ctx->pc = 0x2eb17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31736));
    // 0x2eb180: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eb180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eb184: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2eb184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2eb188: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x2eb188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
    // 0x2eb18c: 0xffb00008  sd          $s0, 0x8($sp)
    ctx->pc = 0x2eb18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    // 0x2eb190: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eb190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eb194: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x2eb194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x2eb198: 0x240501dc  addiu       $a1, $zero, 0x1DC
    ctx->pc = 0x2eb198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 476));
    // 0x2eb19c: 0x240600cc  addiu       $a2, $zero, 0xCC
    ctx->pc = 0x2eb19cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x2eb1a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb1a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1a4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eb1a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb1a8: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eb1a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eb1ac: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eb1acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eb1b0: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x2eb1b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eb1b4: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EB1B4u;
    SET_GPR_U32(ctx, 31, 0x2EB1BCu);
    ctx->pc = 0x2EB1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB1B4u;
    // 0x2eb1b8: 0xffb60018  sd          $s6, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EB1B4u, 0x2EB1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB1BCu;
label_2eb1bc:
    // 0x2eb1bc: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2eb1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2eb1c0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2eb1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2eb1c4: 0x24637bb0  addiu       $v1, $v1, 0x7BB0
    ctx->pc = 0x2eb1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31664));
    // 0x2eb1c8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eb1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eb1cc: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2eb1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2eb1d0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2eb1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2eb1d4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2eb1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2eb1d8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eb1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eb1dc: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x2eb1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x2eb1e0: 0x240600e6  addiu       $a2, $zero, 0xE6
    ctx->pc = 0x2eb1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x2eb1e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb1e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1e8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eb1e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb1ec: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eb1ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eb1f0: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eb1f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eb1f4: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EB1F4u;
    SET_GPR_U32(ctx, 31, 0x2EB1FCu);
    ctx->pc = 0x2EB1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB1F4u;
    // 0x2eb1f8: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EB1F4u, 0x2EB1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB1FCu;
label_2eb1fc:
    // 0x2eb1fc: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2eb1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2eb200: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eb200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eb204: 0x24637c08  addiu       $v1, $v1, 0x7C08
    ctx->pc = 0x2eb204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31752));
    // 0x2eb208: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2eb208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2eb20c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2eb20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2eb210: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eb210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eb214: 0x3443001c  ori         $v1, $v0, 0x1C
    ctx->pc = 0x2eb214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28);
    // 0x2eb218: 0x240501b4  addiu       $a1, $zero, 0x1B4
    ctx->pc = 0x2eb218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
    // 0x2eb21c: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x2eb21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2eb220: 0x240600e6  addiu       $a2, $zero, 0xE6
    ctx->pc = 0x2eb220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x2eb224: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb228: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eb228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb22c: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eb22cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eb230: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eb230u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eb234: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x2eb234u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eb238: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2eb238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2eb23c: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EB23Cu;
    SET_GPR_U32(ctx, 31, 0x2EB244u);
    ctx->pc = 0x2EB240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB23Cu;
    // 0x2eb240: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EB23Cu, 0x2EB244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB244u;
label_2eb244:
    // 0x2eb244: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2eb244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2eb248: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2eb248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2eb24c: 0x24637bb0  addiu       $v1, $v1, 0x7BB0
    ctx->pc = 0x2eb24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31664));
    // 0x2eb250: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eb250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eb254: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2eb254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2eb258: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x2eb258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x2eb25c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2eb25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2eb260: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eb260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eb264: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x2eb264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2eb268: 0x2406010e  addiu       $a2, $zero, 0x10E
    ctx->pc = 0x2eb268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    // 0x2eb26c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb26cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb270: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eb270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb274: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eb274u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eb278: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eb278u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eb27c: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EB27Cu;
    SET_GPR_U32(ctx, 31, 0x2EB284u);
    ctx->pc = 0x2EB280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB27Cu;
    // 0x2eb280: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EB27Cu, 0x2EB284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB284u;
label_2eb284:
    // 0x2eb284: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2eb284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2eb288: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eb288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eb28c: 0x24427bf0  addiu       $v0, $v0, 0x7BF0
    ctx->pc = 0x2eb28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31728));
    // 0x2eb290: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eb290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eb294: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2eb294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2eb298: 0x240501b4  addiu       $a1, $zero, 0x1B4
    ctx->pc = 0x2eb298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
    // 0x2eb29c: 0x2406010e  addiu       $a2, $zero, 0x10E
    ctx->pc = 0x2eb29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    // 0x2eb2a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb2a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb2a4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eb2a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb2a8: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eb2a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eb2ac: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eb2acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eb2b0: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x2eb2b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eb2b4: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EB2B4u;
    SET_GPR_U32(ctx, 31, 0x2EB2BCu);
    ctx->pc = 0x2EB2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB2B4u;
    // 0x2eb2b8: 0xffb70008  sd          $s7, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EB2B4u, 0x2EB2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB2BCu;
label_2eb2bc:
    // 0x2eb2bc: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2eb2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2eb2c0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2eb2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2eb2c4: 0x24637bb0  addiu       $v1, $v1, 0x7BB0
    ctx->pc = 0x2eb2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31664));
    // 0x2eb2c8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eb2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eb2cc: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2eb2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2eb2d0: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2eb2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2eb2d4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2eb2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2eb2d8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eb2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eb2dc: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x2eb2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2eb2e0: 0x24060128  addiu       $a2, $zero, 0x128
    ctx->pc = 0x2eb2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
    // 0x2eb2e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb2e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb2e8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eb2e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb2ec: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eb2ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eb2f0: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eb2f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eb2f4: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EB2F4u;
    SET_GPR_U32(ctx, 31, 0x2EB2FCu);
    ctx->pc = 0x2EB2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB2F4u;
    // 0x2eb2f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EB2F4u, 0x2EB2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB2FCu;
label_2eb2fc:
    // 0x2eb2fc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2eb2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2eb300: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eb300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eb304: 0x24427bf0  addiu       $v0, $v0, 0x7BF0
    ctx->pc = 0x2eb304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31728));
    // 0x2eb308: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eb308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eb30c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2eb30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2eb310: 0x240501b4  addiu       $a1, $zero, 0x1B4
    ctx->pc = 0x2eb310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
    // 0x2eb314: 0x24060128  addiu       $a2, $zero, 0x128
    ctx->pc = 0x2eb314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
    // 0x2eb318: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb31c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eb31cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb320: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eb320u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eb324: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eb324u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eb328: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x2eb328u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eb32c: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EB32Cu;
    SET_GPR_U32(ctx, 31, 0x2EB334u);
    ctx->pc = 0x2EB330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB32Cu;
    // 0x2eb330: 0xffbe0008  sd          $fp, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EB32Cu, 0x2EB334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB334u;
label_2eb334:
    // 0x2eb334: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2eb334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2eb338: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2eb338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2eb33c: 0x24637bb0  addiu       $v1, $v1, 0x7BB0
    ctx->pc = 0x2eb33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31664));
    // 0x2eb340: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eb340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eb344: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2eb344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2eb348: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x2eb348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x2eb34c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2eb34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2eb350: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eb350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eb354: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x2eb354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2eb358: 0x24060142  addiu       $a2, $zero, 0x142
    ctx->pc = 0x2eb358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 322));
    // 0x2eb35c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb35cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb360: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eb360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb364: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eb364u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eb368: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eb368u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eb36c: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EB36Cu;
    SET_GPR_U32(ctx, 31, 0x2EB374u);
    ctx->pc = 0x2EB370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB36Cu;
    // 0x2eb370: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EB36Cu, 0x2EB374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB374u;
label_2eb374:
    // 0x2eb374: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2eb374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2eb378: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eb378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eb37c: 0x24427bf0  addiu       $v0, $v0, 0x7BF0
    ctx->pc = 0x2eb37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31728));
    // 0x2eb380: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eb380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eb384: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2eb384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2eb388: 0x240501b4  addiu       $a1, $zero, 0x1B4
    ctx->pc = 0x2eb388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
    // 0x2eb38c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2eb38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2eb390: 0x24060142  addiu       $a2, $zero, 0x142
    ctx->pc = 0x2eb390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 322));
    // 0x2eb394: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb394u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb398: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eb398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb39c: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eb39cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eb3a0: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eb3a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eb3a4: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x2eb3a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eb3a8: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EB3A8u;
    SET_GPR_U32(ctx, 31, 0x2EB3B0u);
    ctx->pc = 0x2EB3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB3A8u;
    // 0x2eb3ac: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EB3A8u, 0x2EB3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB3B0u;
label_2eb3b0:
    // 0x2eb3b0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2eb3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2eb3b4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2eb3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2eb3b8: 0x24637bb0  addiu       $v1, $v1, 0x7BB0
    ctx->pc = 0x2eb3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31664));
    // 0x2eb3bc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eb3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eb3c0: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2eb3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2eb3c4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2eb3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2eb3c8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2eb3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2eb3cc: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eb3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eb3d0: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x2eb3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2eb3d4: 0x2406015c  addiu       $a2, $zero, 0x15C
    ctx->pc = 0x2eb3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x2eb3d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb3d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb3dc: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eb3dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb3e0: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eb3e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eb3e4: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eb3e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eb3e8: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EB3E8u;
    SET_GPR_U32(ctx, 31, 0x2EB3F0u);
    ctx->pc = 0x2EB3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB3E8u;
    // 0x2eb3ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EB3E8u, 0x2EB3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB3F0u;
label_2eb3f0:
    // 0x2eb3f0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2eb3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2eb3f4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eb3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eb3f8: 0x24427bf0  addiu       $v0, $v0, 0x7BF0
    ctx->pc = 0x2eb3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31728));
    // 0x2eb3fc: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eb3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eb400: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2eb400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2eb404: 0x240501b4  addiu       $a1, $zero, 0x1B4
    ctx->pc = 0x2eb404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
    // 0x2eb408: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2eb408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2eb40c: 0x2406015c  addiu       $a2, $zero, 0x15C
    ctx->pc = 0x2eb40cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x2eb410: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb414: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eb414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb418: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eb418u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eb41c: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eb41cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eb420: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x2eb420u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eb424: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EB424u;
    SET_GPR_U32(ctx, 31, 0x2EB42Cu);
    ctx->pc = 0x2EB428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB424u;
    // 0x2eb428: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EB424u, 0x2EB42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB42Cu;
label_2eb42c:
    // 0x2eb42c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2eb42cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2eb430: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2eb430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2eb434: 0x24637bb0  addiu       $v1, $v1, 0x7BB0
    ctx->pc = 0x2eb434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31664));
    // 0x2eb438: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eb438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eb43c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2eb43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2eb440: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x2eb440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x2eb444: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2eb444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2eb448: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eb448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eb44c: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x2eb44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2eb450: 0x24060176  addiu       $a2, $zero, 0x176
    ctx->pc = 0x2eb450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 374));
    // 0x2eb454: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb454u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb458: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eb458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb45c: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eb45cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eb460: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eb460u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eb464: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EB464u;
    SET_GPR_U32(ctx, 31, 0x2EB46Cu);
    ctx->pc = 0x2EB468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB464u;
    // 0x2eb468: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EB464u, 0x2EB46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB46Cu;
label_2eb46c:
    // 0x2eb46c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2eb46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2eb470: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eb470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eb474: 0x24427bf0  addiu       $v0, $v0, 0x7BF0
    ctx->pc = 0x2eb474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31728));
    // 0x2eb478: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eb478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eb47c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2eb47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2eb480: 0x240501b4  addiu       $a1, $zero, 0x1B4
    ctx->pc = 0x2eb480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
    // 0x2eb484: 0x24060176  addiu       $a2, $zero, 0x176
    ctx->pc = 0x2eb484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 374));
    // 0x2eb488: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb488u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb48c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eb48cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb490: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eb490u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eb494: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eb494u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eb498: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x2eb498u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eb49c: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EB49Cu;
    SET_GPR_U32(ctx, 31, 0x2EB4A4u);
    ctx->pc = 0x2EB4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB49Cu;
    // 0x2eb4a0: 0xffb50008  sd          $s5, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EB49Cu, 0x2EB4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB4A4u;
label_2eb4a4:
    // 0x2eb4a4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2eb4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2eb4a8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2eb4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2eb4ac: 0x24637bb0  addiu       $v1, $v1, 0x7BB0
    ctx->pc = 0x2eb4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31664));
    // 0x2eb4b0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eb4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eb4b4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2eb4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2eb4b8: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x2eb4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x2eb4bc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2eb4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2eb4c0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eb4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eb4c4: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x2eb4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2eb4c8: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x2eb4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2eb4cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb4ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb4d0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eb4d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb4d4: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eb4d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eb4d8: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eb4d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eb4dc: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EB4DCu;
    SET_GPR_U32(ctx, 31, 0x2EB4E4u);
    ctx->pc = 0x2EB4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB4DCu;
    // 0x2eb4e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EB4DCu, 0x2EB4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB4E4u;
label_2eb4e4:
    // 0x2eb4e4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2eb4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2eb4e8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eb4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eb4ec: 0x24637c10  addiu       $v1, $v1, 0x7C10
    ctx->pc = 0x2eb4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31760));
    // 0x2eb4f0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2eb4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2eb4f4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2eb4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2eb4f8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eb4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eb4fc: 0x34430014  ori         $v1, $v0, 0x14
    ctx->pc = 0x2eb4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
    // 0x2eb500: 0x240501b4  addiu       $a1, $zero, 0x1B4
    ctx->pc = 0x2eb500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
    // 0x2eb504: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x2eb504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2eb508: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x2eb508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2eb50c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb50cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb510: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eb510u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb514: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eb514u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eb518: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eb518u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eb51c: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x2eb51cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eb520: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2eb520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2eb524: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2eb524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2eb528: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x2eb528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x2eb52c: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EB52Cu;
    SET_GPR_U32(ctx, 31, 0x2EB534u);
    ctx->pc = 0x2EB530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB52Cu;
    // 0x2eb530: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EB52Cu, 0x2EB534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB534u;
label_2eb534:
    // 0x2eb534: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2eb534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2eb538: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2eb538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2eb53c: 0x24637bb0  addiu       $v1, $v1, 0x7BB0
    ctx->pc = 0x2eb53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31664));
    // 0x2eb540: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eb540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eb544: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2eb544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2eb548: 0x3442001c  ori         $v0, $v0, 0x1C
    ctx->pc = 0x2eb548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28);
    // 0x2eb54c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2eb54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2eb550: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eb550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eb554: 0x240501b4  addiu       $a1, $zero, 0x1B4
    ctx->pc = 0x2eb554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
    // 0x2eb558: 0x24060142  addiu       $a2, $zero, 0x142
    ctx->pc = 0x2eb558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 322));
    // 0x2eb55c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb55cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb560: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eb560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb564: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eb564u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eb568: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eb568u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eb56c: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EB56Cu;
    SET_GPR_U32(ctx, 31, 0x2EB574u);
    ctx->pc = 0x2EB570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB56Cu;
    // 0x2eb570: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EB56Cu, 0x2EB574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB574u;
label_2eb574:
    // 0x2eb574: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2eb574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2eb578: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eb578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb57c: 0x9024fc8d  lbu         $a0, -0x373($at)
    ctx->pc = 0x2eb57cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x2eb580: 0x14830041  bne         $a0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x2EB580u;
    {
        const bool branch_taken_0x2eb580 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EB584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB580u;
        // 0x2eb584: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb580) {
            ctx->pc = 0x2EB688u;
            goto label_2eb688;
        }
    }
    ctx->pc = 0x2EB588u;
    // 0x2eb588: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2eb588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2eb58c: 0x24637bb0  addiu       $v1, $v1, 0x7BB0
    ctx->pc = 0x2eb58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31664));
    // 0x2eb590: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eb590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eb594: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2eb594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2eb598: 0x34420019  ori         $v0, $v0, 0x19
    ctx->pc = 0x2eb598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25);
    // 0x2eb59c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2eb59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2eb5a0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eb5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eb5a4: 0x240501b4  addiu       $a1, $zero, 0x1B4
    ctx->pc = 0x2eb5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
    // 0x2eb5a8: 0x2406010e  addiu       $a2, $zero, 0x10E
    ctx->pc = 0x2eb5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    // 0x2eb5ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb5acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb5b0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eb5b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb5b4: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eb5b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eb5b8: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eb5b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eb5bc: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EB5BCu;
    SET_GPR_U32(ctx, 31, 0x2EB5C4u);
    ctx->pc = 0x2EB5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB5BCu;
    // 0x2eb5c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EB5BCu, 0x2EB5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB5C4u;
label_2eb5c4:
    // 0x2eb5c4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2eb5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2eb5c8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2eb5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2eb5cc: 0x24637bb0  addiu       $v1, $v1, 0x7BB0
    ctx->pc = 0x2eb5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31664));
    // 0x2eb5d0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eb5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eb5d4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2eb5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2eb5d8: 0x34420019  ori         $v0, $v0, 0x19
    ctx->pc = 0x2eb5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25);
    // 0x2eb5dc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2eb5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2eb5e0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eb5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eb5e4: 0x240501b4  addiu       $a1, $zero, 0x1B4
    ctx->pc = 0x2eb5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
    // 0x2eb5e8: 0x24060128  addiu       $a2, $zero, 0x128
    ctx->pc = 0x2eb5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
    // 0x2eb5ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb5ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb5f0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eb5f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb5f4: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eb5f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eb5f8: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eb5f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eb5fc: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EB5FCu;
    SET_GPR_U32(ctx, 31, 0x2EB604u);
    ctx->pc = 0x2EB600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB5FCu;
    // 0x2eb600: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EB5FCu, 0x2EB604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB604u;
label_2eb604:
    // 0x2eb604: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2eb604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2eb608: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2eb608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2eb60c: 0x24637bb0  addiu       $v1, $v1, 0x7BB0
    ctx->pc = 0x2eb60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31664));
    // 0x2eb610: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eb610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eb614: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2eb614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2eb618: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x2eb618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x2eb61c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2eb61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2eb620: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eb620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eb624: 0x240501b4  addiu       $a1, $zero, 0x1B4
    ctx->pc = 0x2eb624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
    // 0x2eb628: 0x2406015c  addiu       $a2, $zero, 0x15C
    ctx->pc = 0x2eb628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x2eb62c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb62cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb630: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eb630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb634: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eb634u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eb638: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eb638u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eb63c: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EB63Cu;
    SET_GPR_U32(ctx, 31, 0x2EB644u);
    ctx->pc = 0x2EB640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB63Cu;
    // 0x2eb640: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EB63Cu, 0x2EB644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB644u;
label_2eb644:
    // 0x2eb644: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2eb644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2eb648: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2eb648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2eb64c: 0x24637bb0  addiu       $v1, $v1, 0x7BB0
    ctx->pc = 0x2eb64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31664));
    // 0x2eb650: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2eb650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2eb654: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2eb654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2eb658: 0x3442001a  ori         $v0, $v0, 0x1A
    ctx->pc = 0x2eb658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
    // 0x2eb65c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2eb65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2eb660: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2eb660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2eb664: 0x240501b4  addiu       $a1, $zero, 0x1B4
    ctx->pc = 0x2eb664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
    // 0x2eb668: 0x24060176  addiu       $a2, $zero, 0x176
    ctx->pc = 0x2eb668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 374));
    // 0x2eb66c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb66cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb670: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2eb670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eb674: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2eb674u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eb678: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2eb678u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2eb67c: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EB67Cu;
    SET_GPR_U32(ctx, 31, 0x2EB684u);
    ctx->pc = 0x2EB680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB67Cu;
    // 0x2eb680: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EB67Cu, 0x2EB684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB684u;
label_2eb684:
    // 0x2eb684: 0x0  nop
    ctx->pc = 0x2eb684u;
    // NOP
label_2eb688:
    // 0x2eb688: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2eb688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2eb68c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x2eb68cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2eb690: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2eb690u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2eb694: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2eb694u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2eb698: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2eb698u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2eb69c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2eb69cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2eb6a0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2eb6a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eb6a4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2eb6a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eb6a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2eb6a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eb6ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2eb6acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eb6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6B0u;
        // 0x2eb6b4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB6B8u;
}
