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

// Function: sub_00151300
// Address: 0x151300 - 0x15140c
void sub_00151300_0x151300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151300_0x151300");
#endif

    switch (ctx->pc) {
        case 0x151328u: goto label_151328;
        case 0x1513fcu: goto label_1513fc;
        default: break;
    }

    ctx->pc = 0x151300u;

    // 0x151300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x151300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x151304: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x151304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x151308: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x151308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15130c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15130cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151310: 0x80256ac8  lb          $a1, 0x6AC8($at)
    ctx->pc = 0x151310u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x7E6AC8u));
    // 0x151314: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x151314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151318: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x151318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x15131c: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x15131cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x151320: 0xc0d8ed8  jal         func_363B60
    ctx->pc = 0x151320u;
    SET_GPR_U32(ctx, 31, 0x151328u);
    ctx->pc = 0x151324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151320u;
    // 0x151324: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363B60u, 0x151320u, 0x151328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151328u;
label_151328:
    // 0x151328: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x151328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x15132c: 0x2402070c  addiu       $v0, $zero, 0x70C
    ctx->pc = 0x15132cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1804));
    // 0x151330: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x151330u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x151334: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x151334u;
    {
        const bool branch_taken_0x151334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x151338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151334u;
        // 0x151338: 0x24020404  addiu       $v0, $zero, 0x404 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151334) {
            ctx->pc = 0x1513A0u;
            goto label_1513a0;
        }
    }
    ctx->pc = 0x15133Cu;
    // 0x15133c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15133Cu;
    {
        const bool branch_taken_0x15133c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15133c) {
            ctx->pc = 0x151350u;
            goto label_151350;
        }
    }
    ctx->pc = 0x151344u;
    // 0x151344: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x151344u;
    {
        const bool branch_taken_0x151344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151344) {
            ctx->pc = 0x1513F0u;
            goto label_1513f0;
        }
    }
    ctx->pc = 0x15134Cu;
    // 0x15134c: 0x0  nop
    ctx->pc = 0x15134cu;
    // NOP
label_151350:
    // 0x151350: 0x3c024427  lui         $v0, 0x4427
    ctx->pc = 0x151350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17447 << 16));
    // 0x151354: 0xc6030020  lwc1        $f3, 0x20($s0)
    ctx->pc = 0x151354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x151358: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x151358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15135c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x15135cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x151360: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x151360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x151364: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x151364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x151368: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x151368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x15136c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x15136cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x151370: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x151370u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x151374: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x151374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x151378: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x151378u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x15137c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x15137cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x151380: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151384: 0x0  nop
    ctx->pc = 0x151384u;
    // NOP
    // 0x151388: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x151388u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15138c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15138cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151390: 0x0  nop
    ctx->pc = 0x151390u;
    // NOP
    // 0x151394: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x151394u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x151398: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x151398u;
    {
        const bool branch_taken_0x151398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151398u;
        // 0x15139c: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151398) {
            ctx->pc = 0x1513F0u;
            goto label_1513f0;
        }
    }
    ctx->pc = 0x1513A0u;
label_1513a0:
    // 0x1513a0: 0x3c0344ce  lui         $v1, 0x44CE
    ctx->pc = 0x1513a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17614 << 16));
    // 0x1513a4: 0xc6030020  lwc1        $f3, 0x20($s0)
    ctx->pc = 0x1513a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1513a8: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x1513a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1513ac: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1513acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1513b0: 0x3c0244a8  lui         $v0, 0x44A8
    ctx->pc = 0x1513b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17576 << 16));
    // 0x1513b4: 0x3443c000  ori         $v1, $v0, 0xC000
    ctx->pc = 0x1513b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x1513b8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1513b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1513bc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1513bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1513c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1513c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1513c4: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1513c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1513c8: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1513c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1513cc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1513ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1513d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1513d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1513d4: 0x0  nop
    ctx->pc = 0x1513d4u;
    // NOP
    // 0x1513d8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1513d8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1513dc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1513dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1513e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1513e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1513e4: 0x0  nop
    ctx->pc = 0x1513e4u;
    // NOP
    // 0x1513e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1513e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1513ec: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x1513ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_1513f0:
    // 0x1513f0: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x1513f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x1513f4: 0xc0639c8  jal         func_18E720
    ctx->pc = 0x1513F4u;
    SET_GPR_U32(ctx, 31, 0x1513FCu);
    ctx->pc = 0x1513F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1513F4u;
    // 0x1513f8: 0x248424a0  addiu       $a0, $a0, 0x24A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E720u, 0x1513F4u, 0x1513FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1513FCu;
label_1513fc:
    // 0x1513fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1513fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151400: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151404: 0x3e00008  jr          $ra
    ctx->pc = 0x151404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151404u;
        // 0x151408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15140Cu;
}
