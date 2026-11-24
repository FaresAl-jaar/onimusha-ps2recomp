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

// Function: sub_003D21F0
// Address: 0x3d21f0 - 0x3d22a4
void sub_003D21F0_0x3d21f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D21F0_0x3d21f0");
#endif

    switch (ctx->pc) {
        case 0x3d21f0u: goto label_3d21f0;
        case 0x3d21f4u: goto label_3d21f4;
        case 0x3d21f8u: goto label_3d21f8;
        case 0x3d21fcu: goto label_3d21fc;
        case 0x3d2200u: goto label_3d2200;
        case 0x3d2204u: goto label_3d2204;
        case 0x3d2208u: goto label_3d2208;
        case 0x3d220cu: goto label_3d220c;
        case 0x3d2210u: goto label_3d2210;
        case 0x3d2214u: goto label_3d2214;
        case 0x3d2218u: goto label_3d2218;
        case 0x3d221cu: goto label_3d221c;
        case 0x3d2220u: goto label_3d2220;
        case 0x3d2224u: goto label_3d2224;
        case 0x3d2228u: goto label_3d2228;
        case 0x3d222cu: goto label_3d222c;
        case 0x3d2230u: goto label_3d2230;
        case 0x3d2234u: goto label_3d2234;
        case 0x3d2238u: goto label_3d2238;
        case 0x3d223cu: goto label_3d223c;
        case 0x3d2240u: goto label_3d2240;
        case 0x3d2244u: goto label_3d2244;
        case 0x3d2248u: goto label_3d2248;
        case 0x3d224cu: goto label_3d224c;
        case 0x3d2250u: goto label_3d2250;
        case 0x3d2254u: goto label_3d2254;
        case 0x3d2258u: goto label_3d2258;
        case 0x3d225cu: goto label_3d225c;
        case 0x3d2260u: goto label_3d2260;
        case 0x3d2264u: goto label_3d2264;
        case 0x3d2268u: goto label_3d2268;
        case 0x3d226cu: goto label_3d226c;
        case 0x3d2270u: goto label_3d2270;
        case 0x3d2274u: goto label_3d2274;
        case 0x3d2278u: goto label_3d2278;
        case 0x3d227cu: goto label_3d227c;
        case 0x3d2280u: goto label_3d2280;
        case 0x3d2284u: goto label_3d2284;
        case 0x3d2288u: goto label_3d2288;
        case 0x3d228cu: goto label_3d228c;
        case 0x3d2290u: goto label_3d2290;
        case 0x3d2294u: goto label_3d2294;
        case 0x3d2298u: goto label_3d2298;
        case 0x3d229cu: goto label_3d229c;
        case 0x3d22a0u: goto label_3d22a0;
        default: break;
    }

    ctx->pc = 0x3d21f0u;

label_3d21f0:
    // 0x3d21f0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3d21f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3d21f4:
    // 0x3d21f4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x3d21f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3d21f8:
    // 0x3d21f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3d21f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3d21fc:
    // 0x3d21fc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3d21fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3d2200:
    // 0x3d2200: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d2200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d2204:
    // 0x3d2204: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3d2204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d2208:
    // 0x3d2208: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d2208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d220c:
    // 0x3d220c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3d220cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d2210:
    // 0x3d2210: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d2210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d2214:
    // 0x3d2214: 0xc097080  jal         func_25C200
label_3d2218:
    if (ctx->pc == 0x3D2218u) {
        ctx->pc = 0x3D2218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2214u;
        // 0x3d2218: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D221Cu;
        goto label_3d221c;
    }
    ctx->pc = 0x3D2214u;
    SET_GPR_U32(ctx, 31, 0x3D221Cu);
    ctx->pc = 0x3D2218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2214u;
    // 0x3d2218: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C200u, 0x3D2214u, 0x3D221Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D221Cu;
label_3d221c:
    // 0x3d221c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d221cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d2220:
    // 0x3d2220: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x3d2220u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_3d2224:
    // 0x3d2224: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_3d2228:
    if (ctx->pc == 0x3D2228u) {
        ctx->pc = 0x3D2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2224u;
        // 0x3d2228: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D222Cu;
        goto label_3d222c;
    }
    ctx->pc = 0x3D2224u;
    {
        const bool branch_taken_0x3d2224 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2224u;
        // 0x3d2228: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2224) {
            ctx->pc = 0x3D2288u;
            goto label_3d2288;
        }
    }
    ctx->pc = 0x3D222Cu;
label_3d222c:
    // 0x3d222c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x3d222cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3d2230:
    // 0x3d2230: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x3d2230u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d2234:
    // 0x3d2234: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d2234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d2238:
    // 0x3d2238: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x3d2238u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3d223c:
    // 0x3d223c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_3d2240:
    if (ctx->pc == 0x3D2240u) {
        ctx->pc = 0x3D2244u;
        goto label_3d2244;
    }
    ctx->pc = 0x3D223Cu;
    {
        const bool branch_taken_0x3d223c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d223c) {
            ctx->pc = 0x3D2278u;
            goto label_3d2278;
        }
    }
    ctx->pc = 0x3D2244u;
label_3d2244:
    // 0x3d2244: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x3d2244u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_3d2248:
    // 0x3d2248: 0x2403004b  addiu       $v1, $zero, 0x4B
    ctx->pc = 0x3d2248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_3d224c:
    // 0x3d224c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_3d2250:
    if (ctx->pc == 0x3D2250u) {
        ctx->pc = 0x3D2254u;
        goto label_3d2254;
    }
    ctx->pc = 0x3D224Cu;
    {
        const bool branch_taken_0x3d224c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d224c) {
            ctx->pc = 0x3D2278u;
            goto label_3d2278;
        }
    }
    ctx->pc = 0x3D2254u;
label_3d2254:
    // 0x3d2254: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x3d2254u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_3d2258:
    // 0x3d2258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d2258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d225c:
    // 0x3d225c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d225cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d2260:
    // 0x3d2260: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x3d2260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_3d2264:
    // 0x3d2264: 0x320f809  jalr        $t9
label_3d2268:
    if (ctx->pc == 0x3D2268u) {
        ctx->pc = 0x3D2268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2264u;
        // 0x3d2268: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D226Cu;
        goto label_3d226c;
    }
    ctx->pc = 0x3D2264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D226Cu);
        ctx->pc = 0x3D2268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2264u;
        // 0x3d2268: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2264u, 0x3D226Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D226Cu;
label_3d226c:
    // 0x3d226c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d226cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d2270:
    // 0x3d2270: 0xa6230786  sh          $v1, 0x786($s1)
    ctx->pc = 0x3d2270u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1926), (uint16_t)GPR_U32(ctx, 3));
label_3d2274:
    // 0x3d2274: 0x0  nop
    ctx->pc = 0x3d2274u;
    // NOP
label_3d2278:
    // 0x3d2278: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3d2278u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3d227c:
    // 0x3d227c: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x3d227cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_3d2280:
    // 0x3d2280: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_3d2284:
    if (ctx->pc == 0x3D2284u) {
        ctx->pc = 0x3D2284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2280u;
        // 0x3d2284: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2288u;
        goto label_3d2288;
    }
    ctx->pc = 0x3D2280u;
    {
        const bool branch_taken_0x3d2280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2280u;
        // 0x3d2284: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2280) {
            ctx->pc = 0x3D2230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d2230;
        }
    }
    ctx->pc = 0x3D2288u;
label_3d2288:
    // 0x3d2288: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3d2288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3d228c:
    // 0x3d228c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d228cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d2290:
    // 0x3d2290: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d2290u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d2294:
    // 0x3d2294: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d2294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d2298:
    // 0x3d2298: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d2298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d229c:
    // 0x3d229c: 0x3e00008  jr          $ra
label_3d22a0:
    if (ctx->pc == 0x3D22A0u) {
        ctx->pc = 0x3D22A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D229Cu;
        // 0x3d22a0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D22A4u;
        goto label_fallthrough_0x3d229c;
    }
    ctx->pc = 0x3D229Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D22A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D229Cu;
        // 0x3d22a0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D229Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d229c:
    ctx->pc = 0x3D22A4u;
}
