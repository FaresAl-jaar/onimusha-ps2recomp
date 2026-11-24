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

// Function: sub_00362160
// Address: 0x362160 - 0x36224c
void sub_00362160_0x362160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362160_0x362160");
#endif

    switch (ctx->pc) {
        case 0x3621b0u: goto label_3621b0;
        case 0x3621d8u: goto label_3621d8;
        case 0x362200u: goto label_362200;
        default: break;
    }

    ctx->pc = 0x362160u;

    // 0x362160: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x362160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x362164: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x362164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x362168: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x362168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x36216c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x36216cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x362170: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x362170u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362174: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x362174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x362178: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x362178u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36217c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36217cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x362180: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x362180u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362184: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x362184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x362188: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x362188u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36218c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x36218cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362190: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x362190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362194: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x362194u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x362198: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x362198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36219c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36219cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3621a0: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x3621a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x3621a4: 0x250820f0  addiu       $t0, $t0, 0x20F0
    ctx->pc = 0x3621a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8432));
    // 0x3621a8: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3621A8u;
    SET_GPR_U32(ctx, 31, 0x3621B0u);
    ctx->pc = 0x3621ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3621A8u;
    // 0x3621ac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3621A8u, 0x3621B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3621B0u;
label_3621b0:
    // 0x3621b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3621b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3621b4: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3621B4u;
    {
        const bool branch_taken_0x3621b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3621B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3621B4u;
        // 0x3621b8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3621b4) {
            ctx->pc = 0x362220u;
            goto label_362220;
        }
    }
    ctx->pc = 0x3621BCu;
    // 0x3621bc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3621bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3621c0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3621c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3621c4: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x3621c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3621c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3621c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3621cc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3621ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3621d0: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3621D0u;
    SET_GPR_U32(ctx, 31, 0x3621D8u);
    ctx->pc = 0x3621D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3621D0u;
    // 0x3621d4: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3621D0u, 0x3621D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3621D8u;
label_3621d8:
    // 0x3621d8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x3621d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3621dc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3621dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3621e0: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x3621e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x3621e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3621e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3621e8: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x3621e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3621ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3621ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3621f0: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3621f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3621f4: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3621f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3621f8: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3621F8u;
    SET_GPR_U32(ctx, 31, 0x362200u);
    ctx->pc = 0x3621FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3621F8u;
    // 0x3621fc: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3621F8u, 0x362200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362200u;
label_362200:
    // 0x362200: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x362200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x362204: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x362204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x362208: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x362208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x36220c: 0xa2110558  sb          $s1, 0x558($s0)
    ctx->pc = 0x36220cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 17));
    // 0x362210: 0xa2000559  sb          $zero, 0x559($s0)
    ctx->pc = 0x362210u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 0));
    // 0x362214: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x362214u;
    {
        const bool branch_taken_0x362214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362214u;
        // 0x362218: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362214) {
            ctx->pc = 0x362228u;
            goto label_362228;
        }
    }
    ctx->pc = 0x36221Cu;
    // 0x36221c: 0x0  nop
    ctx->pc = 0x36221cu;
    // NOP
label_362220:
    // 0x362220: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x362220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362224: 0x0  nop
    ctx->pc = 0x362224u;
    // NOP
label_362228:
    // 0x362228: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x362228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36222c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x36222cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x362230: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x362230u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x362234: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x362234u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x362238: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x362238u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36223c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36223cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x362240: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x362240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362244: 0x3e00008  jr          $ra
    ctx->pc = 0x362244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362244u;
        // 0x362248: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36224Cu;
}
