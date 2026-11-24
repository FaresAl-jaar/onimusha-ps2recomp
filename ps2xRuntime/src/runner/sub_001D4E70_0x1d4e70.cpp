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

// Function: sub_001D4E70
// Address: 0x1d4e70 - 0x1d507c
void sub_001D4E70_0x1d4e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4E70_0x1d4e70");
#endif

    switch (ctx->pc) {
        case 0x1d4ec0u: goto label_1d4ec0;
        case 0x1d4f00u: goto label_1d4f00;
        case 0x1d4f14u: goto label_1d4f14;
        case 0x1d4f1cu: goto label_1d4f1c;
        case 0x1d4f98u: goto label_1d4f98;
        case 0x1d4fb0u: goto label_1d4fb0;
        default: break;
    }

    ctx->pc = 0x1d4e70u;

    // 0x1d4e70: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1d4e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1d4e74: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1d4e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1d4e78: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1d4e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1d4e7c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d4e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1d4e80: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1d4e80u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e84: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d4e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d4e88: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d4e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e8c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d4e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d4e90: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1d4e90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e94: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d4e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d4e98: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1d4e98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d4e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d4ea0: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x1d4ea0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4ea4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d4ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d4ea8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d4ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d4eac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d4eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d4eb0: 0xafa800c4  sw          $t0, 0xC4($sp)
    ctx->pc = 0x1d4eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 8));
    // 0x1d4eb4: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x1d4eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x1d4eb8: 0xc0768d8  jal         func_1DA360
    ctx->pc = 0x1D4EB8u;
    SET_GPR_U32(ctx, 31, 0x1D4EC0u);
    ctx->pc = 0x1D4EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4EB8u;
    // 0x1d4ebc: 0xafaa00bc  sw          $t2, 0xBC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA360u, 0x1D4EB8u, 0x1D4EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4EC0u;
label_1d4ec0:
    // 0x1d4ec0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1d4ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d4ec4: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1d4ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1d4ec8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1d4ec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d4ecc: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1d4eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1d4ed0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1d4ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d4ed4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d4ed4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4ed8: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D4ED8u;
    {
        const bool branch_taken_0x1d4ed8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4ED8u;
        // 0x1d4edc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ed8) {
            ctx->pc = 0x1D4F58u;
            goto label_1d4f58;
        }
    }
    ctx->pc = 0x1D4EE0u;
    // 0x1d4ee0: 0x3c120087  lui         $s2, 0x87
    ctx->pc = 0x1d4ee0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)135 << 16));
    // 0x1d4ee4: 0x3c170087  lui         $s7, 0x87
    ctx->pc = 0x1d4ee4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)135 << 16));
    // 0x1d4ee8: 0x2652d190  addiu       $s2, $s2, -0x2E70
    ctx->pc = 0x1d4ee8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294955408));
    // 0x1d4eec: 0x3c100087  lui         $s0, 0x87
    ctx->pc = 0x1d4eecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)135 << 16));
    // 0x1d4ef0: 0x26f7f190  addiu       $s7, $s7, -0xE70
    ctx->pc = 0x1d4ef0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963600));
    // 0x1d4ef4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1d4ef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4ef8: 0x26101190  addiu       $s0, $s0, 0x1190
    ctx->pc = 0x1d4ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4496));
    // 0x1d4efc: 0x0  nop
    ctx->pc = 0x1d4efcu;
    // NOP
label_1d4f00:
    // 0x1d4f00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d4f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4f04: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1d4f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4f08: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1d4f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4f0c: 0xc076918  jal         func_1DA460
    ctx->pc = 0x1D4F0Cu;
    SET_GPR_U32(ctx, 31, 0x1D4F14u);
    ctx->pc = 0x1D4F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4F0Cu;
    // 0x1d4f10: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA460u, 0x1D4F0Cu, 0x1D4F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F14u;
label_1d4f14:
    // 0x1d4f14: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D4F14u;
    SET_GPR_U32(ctx, 31, 0x1D4F1Cu);
    ctx->pc = 0x1D4F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4F14u;
    // 0x1d4f18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D4F14u, 0x1D4F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F1Cu;
label_1d4f1c:
    // 0x1d4f1c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d4f1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d4f20: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d4f20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d4f24: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1d4f24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d4f28: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1d4f28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1d4f2c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1d4f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1d4f30: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1d4f30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1d4f34: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1d4f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d4f38: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x1d4f38u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x1d4f3c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1d4f3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1d4f40: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d4f40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d4f44: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1d4f44u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1d4f48: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1d4f48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x1d4f4c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1d4f4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4f50: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1D4F50u;
    {
        const bool branch_taken_0x1d4f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F50u;
        // 0x1d4f54: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f50) {
            ctx->pc = 0x1D4F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4f00;
        }
    }
    ctx->pc = 0x1D4F58u;
label_1d4f58:
    // 0x1d4f58: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d4f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d4f5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d4f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4f60: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x1d4f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d4f64: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1d4f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1d4f68: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x1d4f68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1d4f6c: 0xafa700cc  sw          $a3, 0xCC($sp)
    ctx->pc = 0x1d4f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 7));
    // 0x1d4f70: 0x24840  sll         $t1, $v0, 1
    ctx->pc = 0x1d4f70u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d4f74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d4f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4f78: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x1D4F78u;
    {
        const bool branch_taken_0x1d4f78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F78u;
        // 0x1d4f7c: 0xafa200c8  sw          $v0, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f78) {
            ctx->pc = 0x1D5038u;
            goto label_1d5038;
        }
    }
    ctx->pc = 0x1D4F80u;
    // 0x1d4f80: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x1d4f80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x1d4f84: 0x3c030087  lui         $v1, 0x87
    ctx->pc = 0x1d4f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)135 << 16));
    // 0x1d4f88: 0x3c020087  lui         $v0, 0x87
    ctx->pc = 0x1d4f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)135 << 16));
    // 0x1d4f8c: 0x24841190  addiu       $a0, $a0, 0x1190
    ctx->pc = 0x1d4f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4496));
    // 0x1d4f90: 0x2463f190  addiu       $v1, $v1, -0xE70
    ctx->pc = 0x1d4f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963600));
    // 0x1d4f94: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x1d4f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
label_1d4f98:
    // 0x1d4f98: 0x9082a  slt         $at, $zero, $t1
    ctx->pc = 0x1d4f98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1d4f9c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d4f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4fa0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d4fa0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4fa4: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x1D4FA4u;
    {
        const bool branch_taken_0x1d4fa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FA4u;
        // 0x1d4fa8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4fa4) {
            ctx->pc = 0x1D5028u;
            goto label_1d5028;
        }
    }
    ctx->pc = 0x1D4FACu;
    // 0x1d4fac: 0x0  nop
    ctx->pc = 0x1d4facu;
    // NOP
label_1d4fb0:
    // 0x1d4fb0: 0x865821  addu        $t3, $a0, $a2
    ctx->pc = 0x1d4fb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1d4fb4: 0x91710000  lbu         $s1, 0x0($t3)
    ctx->pc = 0x1d4fb4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d4fb8: 0x66100  sll         $t4, $a2, 4
    ctx->pc = 0x1d4fb8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1d4fbc: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x1d4fbcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1d4fc0: 0x290d0002  slti        $t5, $t0, 0x2
    ctx->pc = 0x1d4fc0u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d4fc4: 0x4c7821  addu        $t7, $v0, $t4
    ctx->pc = 0x1d4fc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1d4fc8: 0x6c5821  addu        $t3, $v1, $t4
    ctx->pc = 0x1d4fc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1d4fcc: 0x1515025  or          $t2, $t2, $s1
    ctx->pc = 0x1d4fccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 17));
    // 0x1d4fd0: 0x796e0000  lq          $t6, 0x0($t3)
    ctx->pc = 0x1d4fd0u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d4fd4: 0x8fab00c4  lw          $t3, 0xC4($sp)
    ctx->pc = 0x1d4fd4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1d4fd8: 0x16c8021  addu        $s0, $t3, $t4
    ctx->pc = 0x1d4fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x1d4fdc: 0x7e8e0000  sq          $t6, 0x0($s4)
    ctx->pc = 0x1d4fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 14));
    // 0x1d4fe0: 0x7a100000  lq          $s0, 0x0($s0)
    ctx->pc = 0x1d4fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d4fe4: 0x310b0001  andi        $t3, $t0, 0x1
    ctx->pc = 0x1d4fe4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x1d4fe8: 0x314e0007  andi        $t6, $t2, 0x7
    ctx->pc = 0x1d4fe8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)7);
    // 0x1d4fec: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x1d4fecu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1d4ff0: 0xe702b  sltu        $t6, $zero, $t6
    ctx->pc = 0x1d4ff0u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x1d4ff4: 0x17d6021  addu        $t4, $t3, $sp
    ctx->pc = 0x1d4ff4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 29)));
    // 0x1d4ff8: 0x1cd6825  or          $t5, $t6, $t5
    ctx->pc = 0x1d4ff8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x1d4ffc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d4ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d5000: 0xd6bc0  sll         $t5, $t5, 15
    ctx->pc = 0x1d5000u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 15));
    // 0x1d5004: 0x109582a  slt         $t3, $t0, $t1
    ctx->pc = 0x1d5004u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1d5008: 0x7e900010  sq          $s0, 0x10($s4)
    ctx->pc = 0x1d5008u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 16));
    // 0x1d500c: 0x79ee0000  lq          $t6, 0x0($t7)
    ctx->pc = 0x1d500cu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d5010: 0x7e8e0020  sq          $t6, 0x20($s4)
    ctx->pc = 0x1d5010u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 14));
    // 0x1d5014: 0xae8d002c  sw          $t5, 0x2C($s4)
    ctx->pc = 0x1d5014u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 13));
    // 0x1d5018: 0x8d8c00c8  lw          $t4, 0xC8($t4)
    ctx->pc = 0x1d5018u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 200)));
    // 0x1d501c: 0x26940030  addiu       $s4, $s4, 0x30
    ctx->pc = 0x1d501cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x1d5020: 0x1560ffe3  bnez        $t3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1D5020u;
    {
        const bool branch_taken_0x1d5020 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5020u;
        // 0x1d5024: 0xcc3021  addu        $a2, $a2, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5020) {
            ctx->pc = 0x1D4FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4fb0;
        }
    }
    ctx->pc = 0x1D5028u;
label_1d5028:
    // 0x1d5028: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d5028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d502c: 0xa7302a  slt         $a2, $a1, $a3
    ctx->pc = 0x1d502cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1d5030: 0x14c0ffd9  bnez        $a2, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1D5030u;
    {
        const bool branch_taken_0x1d5030 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5030) {
            ctx->pc = 0x1D4F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4f98;
        }
    }
    ctx->pc = 0x1D5038u;
label_1d5038:
    // 0x1d5038: 0x29e1823  subu        $v1, $s4, $fp
    ctx->pc = 0x1d5038u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 30)));
    // 0x1d503c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D503Cu;
    {
        const bool branch_taken_0x1d503c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1D5040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D503Cu;
        // 0x1d5040: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d503c) {
            ctx->pc = 0x1D504Cu;
            goto label_1d504c;
        }
    }
    ctx->pc = 0x1D5044u;
    // 0x1d5044: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1d5044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1d5048: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1d5048u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1d504c:
    // 0x1d504c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1d504cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d5050: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d5050u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d5054: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d5054u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d5058: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d5058u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d505c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d505cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d5060: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d5060u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d5064: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d5064u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5068: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d5068u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d506c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d506cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5070: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d5070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5074: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5074u;
        // 0x1d5078: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D507Cu;
}
