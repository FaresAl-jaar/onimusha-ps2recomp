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

// Function: sub_0030D190
// Address: 0x30d190 - 0x30d28c
void sub_0030D190_0x30d190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D190_0x30d190");
#endif

    switch (ctx->pc) {
        case 0x30d1e0u: goto label_30d1e0;
        case 0x30d208u: goto label_30d208;
        case 0x30d230u: goto label_30d230;
        default: break;
    }

    ctx->pc = 0x30d190u;

    // 0x30d190: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x30d190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x30d194: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x30d194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x30d198: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x30d198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x30d19c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30d19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30d1a0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x30d1a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d1a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30d1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30d1a8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x30d1a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d1ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30d1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30d1b0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x30d1b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d1b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30d1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30d1b8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x30d1b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d1bc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x30d1bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d1c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30d1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d1c4: 0x3c080031  lui         $t0, 0x31
    ctx->pc = 0x30d1c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49 << 16));
    // 0x30d1c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30d1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d1cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30d1ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d1d0: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x30d1d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x30d1d4: 0x2508d120  addiu       $t0, $t0, -0x2EE0
    ctx->pc = 0x30d1d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955296));
    // 0x30d1d8: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x30D1D8u;
    SET_GPR_U32(ctx, 31, 0x30D1E0u);
    ctx->pc = 0x30D1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D1D8u;
    // 0x30d1dc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x30D1D8u, 0x30D1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D1E0u;
label_30d1e0:
    // 0x30d1e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30d1e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d1e4: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x30D1E4u;
    {
        const bool branch_taken_0x30d1e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D1E4u;
        // 0x30d1e8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d1e4) {
            ctx->pc = 0x30D260u;
            goto label_30d260;
        }
    }
    ctx->pc = 0x30D1ECu;
    // 0x30d1ec: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x30d1ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d1f0: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x30d1f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d1f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30d1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d1f8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x30d1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30d1fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30d1fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d200: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x30D200u;
    SET_GPR_U32(ctx, 31, 0x30D208u);
    ctx->pc = 0x30D204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D200u;
    // 0x30d204: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x30D200u, 0x30D208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D208u;
label_30d208:
    // 0x30d208: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x30d208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x30d20c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x30d20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x30d210: 0xa6040526  sh          $a0, 0x526($s0)
    ctx->pc = 0x30d210u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 4));
    // 0x30d214: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30d214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d218: 0xa6040528  sh          $a0, 0x528($s0)
    ctx->pc = 0x30d218u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 4));
    // 0x30d21c: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x30d21cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x30d220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30d220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d224: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x30d224u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d228: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x30D228u;
    SET_GPR_U32(ctx, 31, 0x30D230u);
    ctx->pc = 0x30D22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D228u;
    // 0x30d22c: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x30D228u, 0x30D230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D230u;
label_30d230:
    // 0x30d230: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x30d230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x30d234: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30d234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30d238: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x30d238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x30d23c: 0xa2110558  sb          $s1, 0x558($s0)
    ctx->pc = 0x30d23cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 17));
    // 0x30d240: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30d240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d244: 0xa2000559  sb          $zero, 0x559($s0)
    ctx->pc = 0x30d244u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d248: 0xa200055a  sb          $zero, 0x55A($s0)
    ctx->pc = 0x30d248u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1370), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d24c: 0xae000518  sw          $zero, 0x518($s0)
    ctx->pc = 0x30d24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 0));
    // 0x30d250: 0xa642056e  sh          $v0, 0x56E($s2)
    ctx->pc = 0x30d250u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x30d254: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30D254u;
    {
        const bool branch_taken_0x30d254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D254u;
        // 0x30d258: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d254) {
            ctx->pc = 0x30D268u;
            goto label_30d268;
        }
    }
    ctx->pc = 0x30D25Cu;
    // 0x30d25c: 0x0  nop
    ctx->pc = 0x30d25cu;
    // NOP
label_30d260:
    // 0x30d260: 0xa640056e  sh          $zero, 0x56E($s2)
    ctx->pc = 0x30d260u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1390), (uint16_t)GPR_U32(ctx, 0));
    // 0x30d264: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30d264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30d268:
    // 0x30d268: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x30d268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30d26c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30d26cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30d270: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30d270u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30d274: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30d274u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30d278: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30d278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d27c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30d27cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d280: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30d280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d284: 0x3e00008  jr          $ra
    ctx->pc = 0x30D284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D284u;
        // 0x30d288: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D28Cu;
}
