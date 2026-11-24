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

// Function: sub_0035D1D0
// Address: 0x35d1d0 - 0x35d2d0
void sub_0035D1D0_0x35d1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D1D0_0x35d1d0");
#endif

    switch (ctx->pc) {
        case 0x35d228u: goto label_35d228;
        case 0x35d250u: goto label_35d250;
        case 0x35d278u: goto label_35d278;
        default: break;
    }

    ctx->pc = 0x35d1d0u;

    // 0x35d1d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x35d1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x35d1d4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x35d1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x35d1d8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x35d1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x35d1dc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x35d1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x35d1e0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x35d1e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d1e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35d1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x35d1e8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x35d1e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d1ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35d1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x35d1f0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x35d1f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d1f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35d1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35d1f8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x35d1f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d1fc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x35d1fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d200: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35d200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35d204: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x35d204u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x35d208: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x35d208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d20c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35d20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d210: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35d210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d214: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35d214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d218: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x35d218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x35d21c: 0x2508d160  addiu       $t0, $t0, -0x2EA0
    ctx->pc = 0x35d21cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955360));
    // 0x35d220: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x35D220u;
    SET_GPR_U32(ctx, 31, 0x35D228u);
    ctx->pc = 0x35D224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D220u;
    // 0x35d224: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x35D220u, 0x35D228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D228u;
label_35d228:
    // 0x35d228: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35d228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d22c: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x35D22Cu;
    {
        const bool branch_taken_0x35d22c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D22Cu;
        // 0x35d230: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d22c) {
            ctx->pc = 0x35D2A0u;
            goto label_35d2a0;
        }
    }
    ctx->pc = 0x35D234u;
    // 0x35d234: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x35d234u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d238: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x35d238u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d23c: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x35d23cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d244: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x35d244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35d248: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x35D248u;
    SET_GPR_U32(ctx, 31, 0x35D250u);
    ctx->pc = 0x35D24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D248u;
    // 0x35d24c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x35D248u, 0x35D250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D250u;
label_35d250:
    // 0x35d250: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x35d250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x35d254: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x35d254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x35d258: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x35d258u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d25c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d260: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x35d260u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x35d264: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35d264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d268: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x35d268u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x35d26c: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x35d26cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x35d270: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x35D270u;
    SET_GPR_U32(ctx, 31, 0x35D278u);
    ctx->pc = 0x35D274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D270u;
    // 0x35d274: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x35D270u, 0x35D278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D278u;
label_35d278:
    // 0x35d278: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x35d278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x35d27c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x35d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x35d280: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x35d280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x35d284: 0xa2110558  sb          $s1, 0x558($s0)
    ctx->pc = 0x35d284u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 17));
    // 0x35d288: 0xa2000559  sb          $zero, 0x559($s0)
    ctx->pc = 0x35d288u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 0));
    // 0x35d28c: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x35d28cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x35d290: 0x7e020090  sq          $v0, 0x90($s0)
    ctx->pc = 0x35d290u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 2));
    // 0x35d294: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35D294u;
    {
        const bool branch_taken_0x35d294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D294u;
        // 0x35d298: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d294) {
            ctx->pc = 0x35D2A8u;
            goto label_35d2a8;
        }
    }
    ctx->pc = 0x35D29Cu;
    // 0x35d29c: 0x0  nop
    ctx->pc = 0x35d29cu;
    // NOP
label_35d2a0:
    // 0x35d2a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35d2a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d2a4: 0x0  nop
    ctx->pc = 0x35d2a4u;
    // NOP
label_35d2a8:
    // 0x35d2a8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x35d2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35d2ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x35d2acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35d2b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x35d2b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35d2b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35d2b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35d2b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35d2b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35d2bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35d2bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d2c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35d2c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d2c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35d2c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x35D2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D2C8u;
        // 0x35d2cc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D2D0u;
}
