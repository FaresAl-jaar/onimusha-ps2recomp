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

// Function: sub_0028D200
// Address: 0x28d200 - 0x28d71c
void sub_0028D200_0x28d200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D200_0x28d200");
#endif

    switch (ctx->pc) {
        case 0x28d248u: goto label_28d248;
        case 0x28d280u: goto label_28d280;
        case 0x28d294u: goto label_28d294;
        case 0x28d2c8u: goto label_28d2c8;
        case 0x28d2f4u: goto label_28d2f4;
        case 0x28d308u: goto label_28d308;
        case 0x28d348u: goto label_28d348;
        case 0x28d3bcu: goto label_28d3bc;
        case 0x28d3dcu: goto label_28d3dc;
        case 0x28d3f0u: goto label_28d3f0;
        case 0x28d404u: goto label_28d404;
        case 0x28d478u: goto label_28d478;
        case 0x28d498u: goto label_28d498;
        case 0x28d4bcu: goto label_28d4bc;
        case 0x28d500u: goto label_28d500;
        case 0x28d520u: goto label_28d520;
        case 0x28d544u: goto label_28d544;
        case 0x28d580u: goto label_28d580;
        case 0x28d598u: goto label_28d598;
        case 0x28d5c8u: goto label_28d5c8;
        case 0x28d610u: goto label_28d610;
        case 0x28d6acu: goto label_28d6ac;
        case 0x28d6f0u: goto label_28d6f0;
        default: break;
    }

    ctx->pc = 0x28d200u;

    // 0x28d200: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x28d200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x28d204: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x28d204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x28d208: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28d208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x28d20c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28d20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x28d210: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28d210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28d214: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28d214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28d218: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28d218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28d21c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28d21cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d220: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28d220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28d224: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28d224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28d228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28d228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28d22c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28d22cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d230: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x28d230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x28d234: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x28d234u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x28d238: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x28d238u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28d23c: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x28D23Cu;
    {
        const bool branch_taken_0x28d23c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D23Cu;
        // 0x28d240: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d23c) {
            ctx->pc = 0x28D2B8u;
            goto label_28d2b8;
        }
    }
    ctx->pc = 0x28D244u;
    // 0x28d244: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28d244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d248:
    // 0x28d248: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x28d248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x28d24c: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x28d24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x28d250: 0x929821  addu        $s3, $a0, $s2
    ctx->pc = 0x28d250u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x28d254: 0x86640020  lh          $a0, 0x20($s3)
    ctx->pc = 0x28d254u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x28d258: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x28D258u;
    {
        const bool branch_taken_0x28d258 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x28d258) {
            ctx->pc = 0x28D2A0u;
            goto label_28d2a0;
        }
    }
    ctx->pc = 0x28D260u;
    // 0x28d260: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x28d260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x28d264: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x28d264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x28d268: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x28d268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x28d26c: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x28d26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x28d270: 0x24470006  addiu       $a3, $v0, 0x6
    ctx->pc = 0x28d270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x28d274: 0x24480008  addiu       $t0, $v0, 0x8
    ctx->pc = 0x28d274u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x28d278: 0xc096da0  jal         func_25B680
    ctx->pc = 0x28D278u;
    SET_GPR_U32(ctx, 31, 0x28D280u);
    ctx->pc = 0x28D27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D278u;
    // 0x28d27c: 0x2449000c  addiu       $t1, $v0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x28D278u, 0x28D280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D280u;
label_28d280:
    // 0x28d280: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x28d280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x28d284: 0xa6620022  sh          $v0, 0x22($s3)
    ctx->pc = 0x28d284u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x28d288: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x28d288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x28d28c: 0xc096d80  jal         func_25B600
    ctx->pc = 0x28D28Cu;
    SET_GPR_U32(ctx, 31, 0x28D294u);
    ctx->pc = 0x28D290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D28Cu;
    // 0x28d290: 0x8c440024  lw          $a0, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B600u, 0x28D28Cu, 0x28D294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D294u;
label_28d294:
    // 0x28d294: 0xa2620024  sb          $v0, 0x24($s3)
    ctx->pc = 0x28d294u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 36), (uint8_t)GPR_U32(ctx, 2));
    // 0x28d298: 0xa6600020  sh          $zero, 0x20($s3)
    ctx->pc = 0x28d298u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x28d29c: 0xa6600026  sh          $zero, 0x26($s3)
    ctx->pc = 0x28d29cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 38), (uint16_t)GPR_U32(ctx, 0));
label_28d2a0:
    // 0x28d2a0: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x28d2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x28d2a4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28d2a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x28d2a8: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x28d2a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x28d2ac: 0x283202a  slt         $a0, $s4, $v1
    ctx->pc = 0x28d2acu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28d2b0: 0x1480ffe5  bnez        $a0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x28D2B0u;
    {
        const bool branch_taken_0x28d2b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D2B0u;
        // 0x28d2b4: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d2b0) {
            ctx->pc = 0x28D248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d248;
        }
    }
    ctx->pc = 0x28D2B8u;
label_28d2b8:
    // 0x28d2b8: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x28d2b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28d2bc: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x28D2BCu;
    {
        const bool branch_taken_0x28d2bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D2BCu;
        // 0x28d2c0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d2bc) {
            ctx->pc = 0x28D338u;
            goto label_28d338;
        }
    }
    ctx->pc = 0x28D2C4u;
    // 0x28d2c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28d2c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d2c8:
    // 0x28d2c8: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x28d2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x28d2cc: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x28d2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x28d2d0: 0x929821  addu        $s3, $a0, $s2
    ctx->pc = 0x28d2d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x28d2d4: 0x86640020  lh          $a0, 0x20($s3)
    ctx->pc = 0x28d2d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x28d2d8: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x28D2D8u;
    {
        const bool branch_taken_0x28d2d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x28d2d8) {
            ctx->pc = 0x28D320u;
            goto label_28d320;
        }
    }
    ctx->pc = 0x28D2E0u;
    // 0x28d2e0: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x28d2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x28d2e4: 0x9045001c  lbu         $a1, 0x1C($v0)
    ctx->pc = 0x28d2e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x28d2e8: 0x9046001d  lbu         $a2, 0x1D($v0)
    ctx->pc = 0x28d2e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 29)));
    // 0x28d2ec: 0xc074350  jal         func_1D0D40
    ctx->pc = 0x28D2ECu;
    SET_GPR_U32(ctx, 31, 0x28D2F4u);
    ctx->pc = 0x28D2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D2ECu;
    // 0x28d2f0: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x28D2ECu, 0x28D2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D2F4u;
label_28d2f4:
    // 0x28d2f4: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x28d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x28d2f8: 0x9045001e  lbu         $a1, 0x1E($v0)
    ctx->pc = 0x28d2f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 30)));
    // 0x28d2fc: 0x9046001f  lbu         $a2, 0x1F($v0)
    ctx->pc = 0x28d2fcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 31)));
    // 0x28d300: 0xc074378  jal         func_1D0DE0
    ctx->pc = 0x28D300u;
    SET_GPR_U32(ctx, 31, 0x28D308u);
    ctx->pc = 0x28D304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D300u;
    // 0x28d304: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x28D300u, 0x28D308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D308u;
label_28d308:
    // 0x28d308: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x28d308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x28d30c: 0xa6630022  sh          $v1, 0x22($s3)
    ctx->pc = 0x28d30cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x28d310: 0xa2600024  sb          $zero, 0x24($s3)
    ctx->pc = 0x28d310u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x28d314: 0xa6600020  sh          $zero, 0x20($s3)
    ctx->pc = 0x28d314u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x28d318: 0xa6600026  sh          $zero, 0x26($s3)
    ctx->pc = 0x28d318u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x28d31c: 0x0  nop
    ctx->pc = 0x28d31cu;
    // NOP
label_28d320:
    // 0x28d320: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x28d320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x28d324: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28d324u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x28d328: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x28d328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x28d32c: 0x283202a  slt         $a0, $s4, $v1
    ctx->pc = 0x28d32cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28d330: 0x1480ffe5  bnez        $a0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x28D330u;
    {
        const bool branch_taken_0x28d330 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D330u;
        // 0x28d334: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d330) {
            ctx->pc = 0x28D2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d2c8;
        }
    }
    ctx->pc = 0x28D338u;
label_28d338:
    // 0x28d338: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x28d338u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28d33c: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
    ctx->pc = 0x28D33Cu;
    {
        const bool branch_taken_0x28d33c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D33Cu;
        // 0x28d340: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d33c) {
            ctx->pc = 0x28D458u;
            goto label_28d458;
        }
    }
    ctx->pc = 0x28D344u;
    // 0x28d344: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28d344u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d348:
    // 0x28d348: 0x8e260070  lw          $a2, 0x70($s1)
    ctx->pc = 0x28d348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x28d34c: 0x86250054  lh          $a1, 0x54($s1)
    ctx->pc = 0x28d34cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x28d350: 0x90c4003c  lbu         $a0, 0x3C($a2)
    ctx->pc = 0x28d350u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x28d354: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x28d354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x28d358: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x28d358u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x28d35c: 0x0  nop
    ctx->pc = 0x28d35cu;
    // NOP
    // 0x28d360: 0x0  nop
    ctx->pc = 0x28d360u;
    // NOP
    // 0x28d364: 0x1810  mfhi        $v1
    ctx->pc = 0x28d364u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x28d368: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x28D368u;
    {
        const bool branch_taken_0x28d368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d368) {
            ctx->pc = 0x28D440u;
            goto label_28d440;
        }
    }
    ctx->pc = 0x28D370u;
    // 0x28d370: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x28d370u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x28d374: 0x90c70001  lbu         $a3, 0x1($a2)
    ctx->pc = 0x28d374u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x28d378: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x28d378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x28d37c: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x28d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x28d380: 0x523021  addu        $a2, $v0, $s2
    ctx->pc = 0x28d380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x28d384: 0x2012  mflo        $a0
    ctx->pc = 0x28d384u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x28d388: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28d388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d38c: 0x87001b  divu        $zero, $a0, $a3
    ctx->pc = 0x28d38cu;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x28d390: 0x0  nop
    ctx->pc = 0x28d390u;
    // NOP
    // 0x28d394: 0x0  nop
    ctx->pc = 0x28d394u;
    // NOP
    // 0x28d398: 0x2010  mfhi        $a0
    ctx->pc = 0x28d398u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x28d39c: 0x2871018  mult        $v0, $s4, $a3
    ctx->pc = 0x28d39cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28d3a0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x28d3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28d3a4: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x28d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x28d3a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x28d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28d3ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x28d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28d3b0: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x28d3b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28d3b4: 0xc0a2228  jal         func_2888A0
    ctx->pc = 0x28D3B4u;
    SET_GPR_U32(ctx, 31, 0x28D3BCu);
    ctx->pc = 0x28D3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D3B4u;
    // 0x28d3b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2888A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2888A0u, 0x28D3B4u, 0x28D3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D3BCu;
label_28d3bc:
    // 0x28d3bc: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x28d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x28d3c0: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x28d3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x28d3c4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x28d3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x28d3c8: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x28d3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x28d3cc: 0x24470012  addiu       $a3, $v0, 0x12
    ctx->pc = 0x28d3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 18));
    // 0x28d3d0: 0x24480014  addiu       $t0, $v0, 0x14
    ctx->pc = 0x28d3d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x28d3d4: 0xc096da0  jal         func_25B680
    ctx->pc = 0x28D3D4u;
    SET_GPR_U32(ctx, 31, 0x28D3DCu);
    ctx->pc = 0x28D3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D3D4u;
    // 0x28d3d8: 0x24490018  addiu       $t1, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x28D3D4u, 0x28D3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D3DCu;
label_28d3dc:
    // 0x28d3dc: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x28d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x28d3e0: 0xa6620022  sh          $v0, 0x22($s3)
    ctx->pc = 0x28d3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x28d3e4: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x28d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x28d3e8: 0xc096d80  jal         func_25B600
    ctx->pc = 0x28D3E8u;
    SET_GPR_U32(ctx, 31, 0x28D3F0u);
    ctx->pc = 0x28D3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D3E8u;
    // 0x28d3ec: 0x8c440024  lw          $a0, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B600u, 0x28D3E8u, 0x28D3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D3F0u;
label_28d3f0:
    // 0x28d3f0: 0xa2620024  sb          $v0, 0x24($s3)
    ctx->pc = 0x28d3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 36), (uint8_t)GPR_U32(ctx, 2));
    // 0x28d3f4: 0xa6600020  sh          $zero, 0x20($s3)
    ctx->pc = 0x28d3f4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x28d3f8: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x28d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x28d3fc: 0xc078e9c  jal         func_1E3A70
    ctx->pc = 0x28D3FCu;
    SET_GPR_U32(ctx, 31, 0x28D404u);
    ctx->pc = 0x28D400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D3FCu;
    // 0x28d400: 0x8444003a  lh          $a0, 0x3A($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 58)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A70u, 0x28D3FCu, 0x28D404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D404u;
label_28d404:
    // 0x28d404: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x28d404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x28d408: 0x84630038  lh          $v1, 0x38($v1)
    ctx->pc = 0x28d408u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x28d40c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28d40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28d410: 0xa6630026  sh          $v1, 0x26($s3)
    ctx->pc = 0x28d410u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x28d414: 0x86630026  lh          $v1, 0x26($s3)
    ctx->pc = 0x28d414u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 38)));
    // 0x28d418: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D418u;
    {
        const bool branch_taken_0x28d418 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x28D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D418u;
        // 0x28d41c: 0x28617ff1  slti        $at, $v1, 0x7FF1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32753) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d418) {
            ctx->pc = 0x28D428u;
            goto label_28d428;
        }
    }
    ctx->pc = 0x28D420u;
    // 0x28d420: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28D420u;
    {
        const bool branch_taken_0x28d420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D420u;
        // 0x28d424: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d420) {
            ctx->pc = 0x28D438u;
            goto label_28d438;
        }
    }
    ctx->pc = 0x28D428u;
label_28d428:
    // 0x28d428: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D428u;
    {
        const bool branch_taken_0x28d428 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d428) {
            ctx->pc = 0x28D438u;
            goto label_28d438;
        }
    }
    ctx->pc = 0x28D430u;
    // 0x28d430: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x28D430u;
    {
        const bool branch_taken_0x28d430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D430u;
        // 0x28d434: 0x24037ff0  addiu       $v1, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d430) {
            ctx->pc = 0x28D438u;
            goto label_28d438;
        }
    }
    ctx->pc = 0x28D438u;
label_28d438:
    // 0x28d438: 0xa6630026  sh          $v1, 0x26($s3)
    ctx->pc = 0x28d438u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x28d43c: 0x0  nop
    ctx->pc = 0x28d43cu;
    // NOP
label_28d440:
    // 0x28d440: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x28d440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x28d444: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28d444u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x28d448: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x28d448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x28d44c: 0x283202a  slt         $a0, $s4, $v1
    ctx->pc = 0x28d44cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28d450: 0x1480ffbd  bnez        $a0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x28D450u;
    {
        const bool branch_taken_0x28d450 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D450u;
        // 0x28d454: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d450) {
            ctx->pc = 0x28D348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d348;
        }
    }
    ctx->pc = 0x28D458u;
label_28d458:
    // 0x28d458: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x28d458u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28d45c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x28d45cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d460: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28d460u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d464: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x28D464u;
    {
        const bool branch_taken_0x28d464 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D464u;
        // 0x28d468: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d464) {
            ctx->pc = 0x28D4E0u;
            goto label_28d4e0;
        }
    }
    ctx->pc = 0x28D46Cu;
    // 0x28d46c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x28d46cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d470: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28d470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d474: 0x0  nop
    ctx->pc = 0x28d474u;
    // NOP
label_28d478:
    // 0x28d478: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x28d478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x28d47c: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x28d47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x28d480: 0x979821  addu        $s3, $a0, $s7
    ctx->pc = 0x28d480u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x28d484: 0x86640020  lh          $a0, 0x20($s3)
    ctx->pc = 0x28d484u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x28d488: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x28D488u;
    {
        const bool branch_taken_0x28d488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D488u;
        // 0x28d48c: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d488) {
            ctx->pc = 0x28D4C0u;
            goto label_28d4c0;
        }
    }
    ctx->pc = 0x28D490u;
    // 0x28d490: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x28D490u;
    SET_GPR_U32(ctx, 31, 0x28D498u);
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x28D490u, 0x28D498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D498u;
label_28d498:
    // 0x28d498: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D498u;
    {
        const bool branch_taken_0x28d498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D498u;
        // 0x28d49c: 0x24037ffe  addiu       $v1, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d498) {
            ctx->pc = 0x28D4A8u;
            goto label_28d4a8;
        }
    }
    ctx->pc = 0x28D4A0u;
    // 0x28d4a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28D4A0u;
    {
        const bool branch_taken_0x28d4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D4A0u;
        // 0x28d4a4: 0xa6630020  sh          $v1, 0x20($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d4a0) {
            ctx->pc = 0x28D4C0u;
            goto label_28d4c0;
        }
    }
    ctx->pc = 0x28D4A8u;
label_28d4a8:
    // 0x28d4a8: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x28d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x28d4ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28d4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d4b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28d4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d4b4: 0xc0a2228  jal         func_2888A0
    ctx->pc = 0x28D4B4u;
    SET_GPR_U32(ctx, 31, 0x28D4BCu);
    ctx->pc = 0x28D4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D4B4u;
    // 0x28d4b8: 0x523021  addu        $a2, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2888A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2888A0u, 0x28D4B4u, 0x28D4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D4BCu;
label_28d4bc:
    // 0x28d4bc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28d4bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_28d4c0:
    // 0x28d4c0: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x28d4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x28d4c4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x28d4c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x28d4c8: 0x26f70030  addiu       $s7, $s7, 0x30
    ctx->pc = 0x28d4c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x28d4cc: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x28d4ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x28d4d0: 0x2a3202a  slt         $a0, $s5, $v1
    ctx->pc = 0x28d4d0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28d4d4: 0x1480ffe8  bnez        $a0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x28D4D4u;
    {
        const bool branch_taken_0x28d4d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D4D4u;
        // 0x28d4d8: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d4d4) {
            ctx->pc = 0x28D478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d478;
        }
    }
    ctx->pc = 0x28D4DCu;
    // 0x28d4dc: 0x0  nop
    ctx->pc = 0x28d4dcu;
    // NOP
label_28d4e0:
    // 0x28d4e0: 0x2d4b021  addu        $s6, $s6, $s4
    ctx->pc = 0x28d4e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x28d4e4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x28d4e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28d4e8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28d4e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d4ec: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x28D4ECu;
    {
        const bool branch_taken_0x28d4ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D4ECu;
        // 0x28d4f0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d4ec) {
            ctx->pc = 0x28D568u;
            goto label_28d568;
        }
    }
    ctx->pc = 0x28D4F4u;
    // 0x28d4f4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x28d4f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d4f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28d4f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d4fc: 0x0  nop
    ctx->pc = 0x28d4fcu;
    // NOP
label_28d500:
    // 0x28d500: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x28d500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x28d504: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x28d504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x28d508: 0x979821  addu        $s3, $a0, $s7
    ctx->pc = 0x28d508u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x28d50c: 0x86640020  lh          $a0, 0x20($s3)
    ctx->pc = 0x28d50cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x28d510: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x28D510u;
    {
        const bool branch_taken_0x28d510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D510u;
        // 0x28d514: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d510) {
            ctx->pc = 0x28D548u;
            goto label_28d548;
        }
    }
    ctx->pc = 0x28D518u;
    // 0x28d518: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x28D518u;
    SET_GPR_U32(ctx, 31, 0x28D520u);
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x28D518u, 0x28D520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D520u;
label_28d520:
    // 0x28d520: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D520u;
    {
        const bool branch_taken_0x28d520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D520u;
        // 0x28d524: 0x24037ffe  addiu       $v1, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d520) {
            ctx->pc = 0x28D530u;
            goto label_28d530;
        }
    }
    ctx->pc = 0x28D528u;
    // 0x28d528: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28D528u;
    {
        const bool branch_taken_0x28d528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D528u;
        // 0x28d52c: 0xa6630020  sh          $v1, 0x20($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d528) {
            ctx->pc = 0x28D548u;
            goto label_28d548;
        }
    }
    ctx->pc = 0x28D530u;
label_28d530:
    // 0x28d530: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x28d530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x28d534: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28d534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d538: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28d538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d53c: 0xc0a2228  jal         func_2888A0
    ctx->pc = 0x28D53Cu;
    SET_GPR_U32(ctx, 31, 0x28D544u);
    ctx->pc = 0x28D540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D53Cu;
    // 0x28d540: 0x523021  addu        $a2, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2888A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2888A0u, 0x28D53Cu, 0x28D544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D544u;
label_28d544:
    // 0x28d544: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28d544u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_28d548:
    // 0x28d548: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x28d548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x28d54c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x28d54cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x28d550: 0x26f70030  addiu       $s7, $s7, 0x30
    ctx->pc = 0x28d550u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x28d554: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x28d554u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x28d558: 0x2a3202a  slt         $a0, $s5, $v1
    ctx->pc = 0x28d558u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28d55c: 0x1480ffe8  bnez        $a0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x28D55Cu;
    {
        const bool branch_taken_0x28d55c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D55Cu;
        // 0x28d560: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d55c) {
            ctx->pc = 0x28D500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d500;
        }
    }
    ctx->pc = 0x28D564u;
    // 0x28d564: 0x0  nop
    ctx->pc = 0x28d564u;
    // NOP
label_28d568:
    // 0x28d568: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x28d568u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28d56c: 0x2d4b021  addu        $s6, $s6, $s4
    ctx->pc = 0x28d56cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x28d570: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28d570u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d574: 0x10200048  beqz        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x28D574u;
    {
        const bool branch_taken_0x28d574 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D574u;
        // 0x28d578: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d574) {
            ctx->pc = 0x28D698u;
            goto label_28d698;
        }
    }
    ctx->pc = 0x28D57Cu;
    // 0x28d57c: 0x0  nop
    ctx->pc = 0x28d57cu;
    // NOP
label_28d580:
    // 0x28d580: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x28d580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x28d584: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28d584u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d588: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x28d588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x28d58c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x28d58cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28d590: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x28D590u;
    {
        const bool branch_taken_0x28d590 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D590u;
        // 0x28d594: 0x2a3b818  mult        $s7, $s5, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d590) {
            ctx->pc = 0x28D680u;
            goto label_28d680;
        }
    }
    ctx->pc = 0x28D598u;
label_28d598:
    // 0x28d598: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x28d598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x28d59c: 0x2f42821  addu        $a1, $s7, $s4
    ctx->pc = 0x28d59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x28d5a0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x28d5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x28d5a4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x28d5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x28d5a8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x28d5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x28d5ac: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x28d5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x28d5b0: 0x859021  addu        $s2, $a0, $a1
    ctx->pc = 0x28d5b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x28d5b4: 0x86440020  lh          $a0, 0x20($s2)
    ctx->pc = 0x28d5b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x28d5b8: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x28D5B8u;
    {
        const bool branch_taken_0x28d5b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5B8u;
        // 0x28d5bc: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d5b8) {
            ctx->pc = 0x28D668u;
            goto label_28d668;
        }
    }
    ctx->pc = 0x28D5C0u;
    // 0x28d5c0: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x28D5C0u;
    SET_GPR_U32(ctx, 31, 0x28D5C8u);
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x28D5C0u, 0x28D5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D5C8u;
label_28d5c8:
    // 0x28d5c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D5C8u;
    {
        const bool branch_taken_0x28d5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5C8u;
        // 0x28d5cc: 0x24037ffe  addiu       $v1, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d5c8) {
            ctx->pc = 0x28D5D8u;
            goto label_28d5d8;
        }
    }
    ctx->pc = 0x28D5D0u;
    // 0x28d5d0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x28D5D0u;
    {
        const bool branch_taken_0x28d5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5D0u;
        // 0x28d5d4: 0xa6430020  sh          $v1, 0x20($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d5d0) {
            ctx->pc = 0x28D668u;
            goto label_28d668;
        }
    }
    ctx->pc = 0x28D5D8u;
label_28d5d8:
    // 0x28d5d8: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x28d5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x28d5dc: 0x90630022  lbu         $v1, 0x22($v1)
    ctx->pc = 0x28d5dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 34)));
    // 0x28d5e0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x28d5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x28d5e4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x28D5E4u;
    {
        const bool branch_taken_0x28d5e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d5e4) {
            ctx->pc = 0x28D638u;
            goto label_28d638;
        }
    }
    ctx->pc = 0x28D5ECu;
    // 0x28d5ec: 0x86460026  lh          $a2, 0x26($s2)
    ctx->pc = 0x28d5ecu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
    // 0x28d5f0: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D5F0u;
    {
        const bool branch_taken_0x28d5f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5F0u;
        // 0x28d5f4: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d5f0) {
            ctx->pc = 0x28D604u;
            goto label_28d604;
        }
    }
    ctx->pc = 0x28D5F8u;
    // 0x28d5f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28d5f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d5fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28D5FCu;
    {
        const bool branch_taken_0x28d5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5FCu;
        // 0x28d600: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d5fc) {
            ctx->pc = 0x28D614u;
            goto label_28d614;
        }
    }
    ctx->pc = 0x28D604u;
label_28d604:
    // 0x28d604: 0x86440020  lh          $a0, 0x20($s2)
    ctx->pc = 0x28d604u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x28d608: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x28D608u;
    SET_GPR_U32(ctx, 31, 0x28D610u);
    ctx->pc = 0x28D60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D608u;
    // 0x28d60c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x28D608u, 0x28D610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D610u;
label_28d610:
    // 0x28d610: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28d610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_28d614:
    // 0x28d614: 0x3c044380  lui         $a0, 0x4380
    ctx->pc = 0x28d614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17280 << 16));
    // 0x28d618: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28d618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28d61c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x28d61cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28d620: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28d620u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28d624: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x28d624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x28d628: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28d628u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28d62c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x28d62cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x28d630: 0x0  nop
    ctx->pc = 0x28d630u;
    // NOP
    // 0x28d634: 0xa6430022  sh          $v1, 0x22($s2)
    ctx->pc = 0x28d634u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 34), (uint16_t)GPR_U32(ctx, 3));
label_28d638:
    // 0x28d638: 0x86430020  lh          $v1, 0x20($s2)
    ctx->pc = 0x28d638u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x28d63c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28d63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28d640: 0xa6430020  sh          $v1, 0x20($s2)
    ctx->pc = 0x28d640u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x28d644: 0x86440020  lh          $a0, 0x20($s2)
    ctx->pc = 0x28d644u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x28d648: 0x86430026  lh          $v1, 0x26($s2)
    ctx->pc = 0x28d648u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
    // 0x28d64c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x28d64cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x28d650: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D650u;
    {
        const bool branch_taken_0x28d650 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D650u;
        // 0x28d654: 0x24037ffe  addiu       $v1, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d650) {
            ctx->pc = 0x28D660u;
            goto label_28d660;
        }
    }
    ctx->pc = 0x28D658u;
    // 0x28d658: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28D658u;
    {
        const bool branch_taken_0x28d658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D658u;
        // 0x28d65c: 0xa6430020  sh          $v1, 0x20($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d658) {
            ctx->pc = 0x28D668u;
            goto label_28d668;
        }
    }
    ctx->pc = 0x28D660u;
label_28d660:
    // 0x28d660: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x28d660u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x28d664: 0x0  nop
    ctx->pc = 0x28d664u;
    // NOP
label_28d668:
    // 0x28d668: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x28d668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x28d66c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28d66cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x28d670: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x28d670u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x28d674: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x28d674u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28d678: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x28D678u;
    {
        const bool branch_taken_0x28d678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d678) {
            ctx->pc = 0x28D598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d598;
        }
    }
    ctx->pc = 0x28D680u;
label_28d680:
    // 0x28d680: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x28d680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x28d684: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x28d684u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x28d688: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x28d688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x28d68c: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x28d68cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28d690: 0x1460ffbb  bnez        $v1, . + 4 + (-0x45 << 2)
    ctx->pc = 0x28D690u;
    {
        const bool branch_taken_0x28d690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d690) {
            ctx->pc = 0x28D580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d580;
        }
    }
    ctx->pc = 0x28D698u;
label_28d698:
    // 0x28d698: 0x2d3b021  addu        $s6, $s6, $s3
    ctx->pc = 0x28d698u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x28d69c: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D69Cu;
    {
        const bool branch_taken_0x28d69c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D69Cu;
        // 0x28d6a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d69c) {
            ctx->pc = 0x28D6B0u;
            goto label_28d6b0;
        }
    }
    ctx->pc = 0x28D6A4u;
    // 0x28d6a4: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x28D6A4u;
    SET_GPR_U32(ctx, 31, 0x28D6ACu);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x28D6A4u, 0x28D6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D6ACu;
label_28d6ac:
    // 0x28d6ac: 0x0  nop
    ctx->pc = 0x28d6acu;
    // NOP
label_28d6b0:
    // 0x28d6b0: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x28d6b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x28d6b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28d6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28d6b8: 0xa6230054  sh          $v1, 0x54($s1)
    ctx->pc = 0x28d6b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x28d6bc: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x28d6bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x28d6c0: 0x28637ff0  slti        $v1, $v1, 0x7FF0
    ctx->pc = 0x28d6c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x28d6c4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x28D6C4u;
    {
        const bool branch_taken_0x28d6c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D6C4u;
        // 0x28d6c8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d6c4) {
            ctx->pc = 0x28D6D0u;
            goto label_28d6d0;
        }
    }
    ctx->pc = 0x28D6CCu;
    // 0x28d6cc: 0xa6230054  sh          $v1, 0x54($s1)
    ctx->pc = 0x28d6ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 84), (uint16_t)GPR_U32(ctx, 3));
label_28d6d0:
    // 0x28d6d0: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x28d6d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x28d6d4: 0x7e230040  sq          $v1, 0x40($s1)
    ctx->pc = 0x28d6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 3));
    // 0x28d6d8: 0x92230050  lbu         $v1, 0x50($s1)
    ctx->pc = 0x28d6d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x28d6dc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x28d6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x28d6e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D6E0u;
    {
        const bool branch_taken_0x28d6e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D6E0u;
        // 0x28d6e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d6e0) {
            ctx->pc = 0x28D6F0u;
            goto label_28d6f0;
        }
    }
    ctx->pc = 0x28D6E8u;
    // 0x28d6e8: 0xc096b58  jal         func_25AD60
    ctx->pc = 0x28D6E8u;
    SET_GPR_U32(ctx, 31, 0x28D6F0u);
    ctx->pc = 0x28D6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D6E8u;
    // 0x28d6ec: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD60u, 0x28D6E8u, 0x28D6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D6F0u;
label_28d6f0:
    // 0x28d6f0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x28d6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28d6f4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28d6f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28d6f8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28d6f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28d6fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28d6fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28d700: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28d700u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28d704: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28d704u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d708: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28d708u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d70c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28d70cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d710: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28d710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d714: 0x3e00008  jr          $ra
    ctx->pc = 0x28D714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D714u;
        // 0x28d718: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D71Cu;
}
