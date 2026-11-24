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

// Function: sub_002201D8
// Address: 0x2201d8 - 0x220274
void sub_002201D8_0x2201d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002201D8_0x2201d8");
#endif

    ctx->pc = 0x2201d8u;

    // 0x2201d8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2201d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2201dc: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2201dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2201e0: 0x8d060294  lw          $a2, 0x294($t0)
    ctx->pc = 0x2201e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 660)));
    // 0x2201e4: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2201E4u;
    {
        const bool branch_taken_0x2201e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2201E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201E4u;
        // 0x2201e8: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2201e4) {
            ctx->pc = 0x2201F8u;
            goto label_2201f8;
        }
    }
    ctx->pc = 0x2201ECu;
    // 0x2201ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2201ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2201F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201ECu;
        // 0x2201f0: 0xad0a0294  sw          $t2, 0x294($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 660), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2201ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2201F4u;
    // 0x2201f4: 0x0  nop
    ctx->pc = 0x2201f4u;
    // NOP
label_2201f8:
    // 0x2201f8: 0x1463823  subu        $a3, $t2, $a2
    ctx->pc = 0x2201f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x2201fc: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x2201FCu;
    {
        const bool branch_taken_0x2201fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x220200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201FCu;
        // 0x220200: 0x3c057fff  lui         $a1, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2201fc) {
            ctx->pc = 0x22026Cu;
            goto label_22026c;
        }
    }
    ctx->pc = 0x220204u;
    // 0x220204: 0x8d03029c  lw          $v1, 0x29C($t0)
    ctx->pc = 0x220204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 668)));
    // 0x220208: 0x8d0202a0  lw          $v0, 0x2A0($t0)
    ctx->pc = 0x220208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 672)));
    // 0x22020c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x22020cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x220210: 0xe3302a  slt         $a2, $a3, $v1
    ctx->pc = 0x220210u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x220214: 0x8d090298  lw          $t1, 0x298($t0)
    ctx->pc = 0x220214u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 664)));
    // 0x220218: 0x47202a  slt         $a0, $v0, $a3
    ctx->pc = 0x220218u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x22021c: 0xe6180a  movz        $v1, $a3, $a2
    ctx->pc = 0x22021cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x220220: 0xe4100a  movz        $v0, $a3, $a0
    ctx->pc = 0x220220u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x220224: 0xad0a0294  sw          $t2, 0x294($t0)
    ctx->pc = 0x220224u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 660), GPR_U32(ctx, 10));
    // 0x220228: 0xad03029c  sw          $v1, 0x29C($t0)
    ctx->pc = 0x220228u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 668), GPR_U32(ctx, 3));
    // 0x22022c: 0x1125000e  beq         $t1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x22022Cu;
    {
        const bool branch_taken_0x22022c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        ctx->pc = 0x220230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22022Cu;
        // 0x220230: 0xad0202a0  sw          $v0, 0x2A0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22022c) {
            ctx->pc = 0x220268u;
            goto label_220268;
        }
    }
    ctx->pc = 0x220234u;
    // 0x220234: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x220234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x220238: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x220238u;
    {
        const bool branch_taken_0x220238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x220238) {
            ctx->pc = 0x22023Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220238u;
            // 0x22023c: 0xad070298  sw          $a3, 0x298($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 664), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22026Cu;
            goto label_22026c;
        }
    }
    ctx->pc = 0x220240u;
    // 0x220240: 0x1271023  subu        $v0, $t1, $a3
    ctx->pc = 0x220240u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x220244: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x220244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x220248: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x220248u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x22024c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x22024cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x220250: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x220250u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x220254: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x220254u;
    {
        const bool branch_taken_0x220254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220254u;
        // 0x220258: 0x1221023  subu        $v0, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220254) {
            ctx->pc = 0x220268u;
            goto label_220268;
        }
    }
    ctx->pc = 0x22025Cu;
    // 0x22025c: 0x3e00008  jr          $ra
    ctx->pc = 0x22025Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22025Cu;
        // 0x220260: 0xad020298  sw          $v0, 0x298($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22025Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220264u;
    // 0x220264: 0x0  nop
    ctx->pc = 0x220264u;
    // NOP
label_220268:
    // 0x220268: 0xad070298  sw          $a3, 0x298($t0)
    ctx->pc = 0x220268u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 664), GPR_U32(ctx, 7));
label_22026c:
    // 0x22026c: 0x3e00008  jr          $ra
    ctx->pc = 0x22026Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22026Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220274u;
}
