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

// Function: sub_00226F70
// Address: 0x226f70 - 0x2270b4
void sub_00226F70_0x226f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226F70_0x226f70");
#endif

    switch (ctx->pc) {
        case 0x226f94u: goto label_226f94;
        case 0x226fa8u: goto label_226fa8;
        case 0x226ff8u: goto label_226ff8;
        default: break;
    }

    ctx->pc = 0x226f70u;

    // 0x226f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x226f74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x226f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x226f78: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x226f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x226f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x226f80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x226f80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x226f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x226f88: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x226f88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x226f8c: 0xc089c6a  jal         func_2271A8
    ctx->pc = 0x226F8Cu;
    SET_GPR_U32(ctx, 31, 0x226F94u);
    ctx->pc = 0x226F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F8Cu;
    // 0x226f90: 0xc4940040  lwc1        $f20, 0x40($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2271A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2271A8u, 0x226F8Cu, 0x226F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F94u;
label_226f94:
    // 0x226f94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x226f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226f98: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x226F98u;
    {
        const bool branch_taken_0x226f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x226F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F98u;
        // 0x226f9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f98) {
            ctx->pc = 0x226FD8u;
            goto label_226fd8;
        }
    }
    ctx->pc = 0x226FA0u;
    // 0x226fa0: 0x3c077fff  lui         $a3, 0x7FFF
    ctx->pc = 0x226fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32767 << 16));
    // 0x226fa4: 0x34e7ff80  ori         $a3, $a3, 0xFF80
    ctx->pc = 0x226fa4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65408);
label_226fa8:
    // 0x226fa8: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x226fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x226fac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x226facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x226fb0: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x226fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x226fb4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x226fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x226fb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x226fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x226fbc: 0x28c50100  slti        $a1, $a2, 0x100
    ctx->pc = 0x226fbcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x226fc0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x226fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x226fc4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x226fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x226fc8: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x226FC8u;
    {
        const bool branch_taken_0x226fc8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x226FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226FC8u;
        // 0x226fcc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226fc8) {
            ctx->pc = 0x226FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226fa8;
        }
    }
    ctx->pc = 0x226FD0u;
    // 0x226fd0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x226FD0u;
    {
        const bool branch_taken_0x226fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226FD0u;
        // 0x226fd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226fd0) {
            ctx->pc = 0x2270A0u;
            goto label_2270a0;
        }
    }
    ctx->pc = 0x226FD8u;
label_226fd8:
    // 0x226fd8: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x226fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x226fdc: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x226fdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x226fe0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x226fe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x226fe4: 0x3c014b7f  lui         $at, 0x4B7F
    ctx->pc = 0x226fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19327 << 16));
    // 0x226fe8: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x226fe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x226fec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x226fecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x226ff0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x226ff0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226ff4: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x226ff4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
label_226ff8:
    // 0x226ff8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x226ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x226ffc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x226ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x227000: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x227000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x227004: 0x28c70100  slti        $a3, $a2, 0x100
    ctx->pc = 0x227004u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x227008: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x227008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22700c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22700Cu;
    {
        const bool branch_taken_0x22700c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x227010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22700Cu;
        // 0x227010: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22700c) {
            ctx->pc = 0x22701Cu;
            goto label_22701c;
        }
    }
    ctx->pc = 0x227014u;
    // 0x227014: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x227014u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x227018: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x227018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_22701c:
    // 0x22701c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22701Cu;
    {
        const bool branch_taken_0x22701c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x227020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22701Cu;
        // 0x227020: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22701c) {
            ctx->pc = 0x227038u;
            goto label_227038;
        }
    }
    ctx->pc = 0x227024u;
    // 0x227024: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x227024u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227028: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x227028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22702c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22702Cu;
    {
        const bool branch_taken_0x22702c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22702Cu;
        // 0x227030: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22702c) {
            ctx->pc = 0x227050u;
            goto label_227050;
        }
    }
    ctx->pc = 0x227034u;
    // 0x227034: 0x0  nop
    ctx->pc = 0x227034u;
    // NOP
label_227038:
    // 0x227038: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x227038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x22703c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22703cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x227040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x227040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227044: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x227044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x227048: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x227048u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x22704c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x22704cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_227050:
    // 0x227050: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x227050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x227054: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x227054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x227058: 0x0  nop
    ctx->pc = 0x227058u;
    // NOP
    // 0x22705c: 0x0  nop
    ctx->pc = 0x22705cu;
    // NOP
    // 0x227060: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x227060u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x227064: 0x0  nop
    ctx->pc = 0x227064u;
    // NOP
    // 0x227068: 0x0  nop
    ctx->pc = 0x227068u;
    // NOP
    // 0x22706c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x22706cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x227070: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x227070u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227074: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x227074u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x227078: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x227078u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x22707c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x22707Cu;
    {
        const bool branch_taken_0x22707c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22707c) {
            ctx->pc = 0x227094u;
            goto label_227094;
        }
    }
    ctx->pc = 0x227084u;
    // 0x227084: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x227084u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x227088: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x227088u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x22708c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x22708cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x227090: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x227090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_227094:
    // 0x227094: 0x14e0ffd8  bnez        $a3, . + 4 + (-0x28 << 2)
    ctx->pc = 0x227094u;
    {
        const bool branch_taken_0x227094 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x227098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227094u;
        // 0x227098: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227094) {
            ctx->pc = 0x226FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226ff8;
        }
    }
    ctx->pc = 0x22709Cu;
    // 0x22709c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22709cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2270a0:
    // 0x2270a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2270a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2270a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2270a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2270a8: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x2270a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2270ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2270ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2270B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270ACu;
        // 0x2270b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2270ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2270B4u;
}
