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

// Function: sub_001541A0
// Address: 0x1541a0 - 0x1542bc
void sub_001541A0_0x1541a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001541A0_0x1541a0");
#endif

    switch (ctx->pc) {
        case 0x1541f0u: goto label_1541f0;
        case 0x154238u: goto label_154238;
        case 0x15425cu: goto label_15425c;
        case 0x154274u: goto label_154274;
        default: break;
    }

    ctx->pc = 0x1541a0u;

    // 0x1541a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1541a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1541a4: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1541a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1541a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1541a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1541ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1541acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1541b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1541b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1541b4: 0x8c26ac74  lw          $a2, -0x538C($at)
    ctx->pc = 0x1541b4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x40AC74u));
    // 0x1541b8: 0xc5082b  sltu        $at, $a2, $a1
    ctx->pc = 0x1541b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1541bc: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x1541BCu;
    {
        const bool branch_taken_0x1541bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1541C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1541BCu;
        // 0x1541c0: 0x24a407ff  addiu       $a0, $a1, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1541bc) {
            ctx->pc = 0x1542A8u;
            goto label_1542a8;
        }
    }
    ctx->pc = 0x1541C4u;
    // 0x1541c4: 0x2403f800  addiu       $v1, $zero, -0x800
    ctx->pc = 0x1541c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x1541c8: 0x838824  and         $s1, $a0, $v1
    ctx->pc = 0x1541c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1541cc: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1541ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1541d0: 0x8c23ac78  lw          $v1, -0x5388($at)
    ctx->pc = 0x1541d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x40AC78u));
    // 0x1541d4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1541d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1541d8: 0xc34021  addu        $t0, $a2, $v1
    ctx->pc = 0x1541d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1541dc: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x1541dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1541e0: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1541e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1541e4: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x1541e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1541e8: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x1541e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1541ec: 0x0  nop
    ctx->pc = 0x1541ecu;
    // NOP
label_1541f0:
    // 0x1541f0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1541f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1541f4: 0x1467000a  bne         $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x1541F4u;
    {
        const bool branch_taken_0x1541f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1541f4) {
            ctx->pc = 0x154220u;
            goto label_154220;
        }
    }
    ctx->pc = 0x1541FCu;
    // 0x1541fc: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1541fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x154200: 0x14660007  bne         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x154200u;
    {
        const bool branch_taken_0x154200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x154200) {
            ctx->pc = 0x154220u;
            goto label_154220;
        }
    }
    ctx->pc = 0x154208u;
    // 0x154208: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x154208u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x15420c: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15420Cu;
    {
        const bool branch_taken_0x15420c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x15420c) {
            ctx->pc = 0x154220u;
            goto label_154220;
        }
    }
    ctx->pc = 0x154214u;
    // 0x154214: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x154214u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x154218: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x154218u;
    {
        const bool branch_taken_0x154218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x154218) {
            ctx->pc = 0x154240u;
            goto label_154240;
        }
    }
    ctx->pc = 0x154220u;
label_154220:
    // 0x154220: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x154220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x154224: 0x208182b  sltu        $v1, $s0, $t0
    ctx->pc = 0x154224u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x154228: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x154228u;
    {
        const bool branch_taken_0x154228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x154228) {
            ctx->pc = 0x1541F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1541f0;
        }
    }
    ctx->pc = 0x154230u;
    // 0x154230: 0xc054c24  jal         func_153090
    ctx->pc = 0x154230u;
    SET_GPR_U32(ctx, 31, 0x154238u);
    ctx->pc = 0x153090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153090u, 0x154230u, 0x154238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154238u;
label_154238:
    // 0x154238: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x154238u;
    {
        const bool branch_taken_0x154238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154238) {
            ctx->pc = 0x1542A8u;
            goto label_1542a8;
        }
    }
    ctx->pc = 0x154240u;
label_154240:
    // 0x154240: 0x2111823  subu        $v1, $s0, $s1
    ctx->pc = 0x154240u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x154244: 0x28610841  slti        $at, $v1, 0x841
    ctx->pc = 0x154244u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2113) ? 1 : 0);
    // 0x154248: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x154248u;
    {
        const bool branch_taken_0x154248 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154248u;
        // 0x15424c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154248) {
            ctx->pc = 0x154280u;
            goto label_154280;
        }
    }
    ctx->pc = 0x154250u;
    // 0x154250: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x154250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154254: 0xc049590  jal         func_125640
    ctx->pc = 0x154254u;
    SET_GPR_U32(ctx, 31, 0x15425Cu);
    ctx->pc = 0x154258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154254u;
    // 0x154258: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x154254u, 0x15425Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15425Cu;
label_15425c:
    // 0x15425c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x15425cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x154260: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x154260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x154264: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x154264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x154268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x154268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15426c: 0xc054c10  jal         func_153040
    ctx->pc = 0x15426Cu;
    SET_GPR_U32(ctx, 31, 0x154274u);
    ctx->pc = 0x154270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15426Cu;
    // 0x154270: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153040u, 0x15426Cu, 0x154274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154274u;
label_154274:
    // 0x154274: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x154274u;
    {
        const bool branch_taken_0x154274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154274u;
        // 0x154278: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154274) {
            ctx->pc = 0x154288u;
            goto label_154288;
        }
    }
    ctx->pc = 0x15427Cu;
    // 0x15427c: 0x0  nop
    ctx->pc = 0x15427cu;
    // NOP
label_154280:
    // 0x154280: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x154280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x154284: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x154284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_154288:
    // 0x154288: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x154288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x15428c: 0xac31ac74  sw          $s1, -0x538C($at)
    ctx->pc = 0x15428cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x40AC74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40AC74u, _value); } while (0);
    // 0x154290: 0x3c0401b2  lui         $a0, 0x1B2
    ctx->pc = 0x154290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)434 << 16));
    // 0x154294: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x154294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x154298: 0x8c23ac74  lw          $v1, -0x538C($at)
    ctx->pc = 0x154298u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x40AC74u));
    // 0x15429c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x15429cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1542a0: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1542a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x1542a4: 0xac23ac78  sw          $v1, -0x5388($at)
    ctx->pc = 0x1542a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x40AC78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40AC78u, _value); } while (0);
label_1542a8:
    // 0x1542a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1542a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1542ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1542acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1542b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1542b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1542b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1542B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1542B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542B4u;
        // 0x1542b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1542B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1542BCu;
}
