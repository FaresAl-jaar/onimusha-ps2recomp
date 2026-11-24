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

// Function: sub_00349E60
// Address: 0x349e60 - 0x349f98
void sub_00349E60_0x349e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349E60_0x349e60");
#endif

    ctx->pc = 0x349e60u;

    // 0x349e60: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x349e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x349e64: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x349e64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x349e68: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x349E68u;
    {
        const bool branch_taken_0x349e68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x349e68) {
            ctx->pc = 0x349E78u;
            goto label_349e78;
        }
    }
    ctx->pc = 0x349E70u;
    // 0x349e70: 0x64050002  daddiu      $a1, $zero, 0x2
    ctx->pc = 0x349e70u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x349e74: 0x0  nop
    ctx->pc = 0x349e74u;
    // NOP
label_349e78:
    // 0x349e78: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x349e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x349e7c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x349e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x349e80: 0x9085005d  lbu         $a1, 0x5D($a0)
    ctx->pc = 0x349e80u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 93)));
    // 0x349e84: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x349e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x349e88: 0x2442f5d8  addiu       $v0, $v0, -0xA28
    ctx->pc = 0x349e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964696));
    // 0x349e8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x349e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x349e90: 0x240300f4  addiu       $v1, $zero, 0xF4
    ctx->pc = 0x349e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x349e94: 0x10a30016  beq         $a1, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x349E94u;
    {
        const bool branch_taken_0x349e94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x349E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349E94u;
        // 0x349e98: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349e94) {
            ctx->pc = 0x349EF0u;
            goto label_349ef0;
        }
    }
    ctx->pc = 0x349E9Cu;
    // 0x349e9c: 0x240300f3  addiu       $v1, $zero, 0xF3
    ctx->pc = 0x349e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x349ea0: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x349EA0u;
    {
        const bool branch_taken_0x349ea0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x349EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349EA0u;
        // 0x349ea4: 0x24030052  addiu       $v1, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349ea0) {
            ctx->pc = 0x349EE8u;
            goto label_349ee8;
        }
    }
    ctx->pc = 0x349EA8u;
    // 0x349ea8: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x349EA8u;
    {
        const bool branch_taken_0x349ea8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x349ea8) {
            ctx->pc = 0x349EE0u;
            goto label_349ee0;
        }
    }
    ctx->pc = 0x349EB0u;
    // 0x349eb0: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x349eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x349eb4: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x349EB4u;
    {
        const bool branch_taken_0x349eb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x349EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349EB4u;
        // 0x349eb8: 0x2403004c  addiu       $v1, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349eb4) {
            ctx->pc = 0x349ED8u;
            goto label_349ed8;
        }
    }
    ctx->pc = 0x349EBCu;
    // 0x349ebc: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x349EBCu;
    {
        const bool branch_taken_0x349ebc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x349ebc) {
            ctx->pc = 0x349ED0u;
            goto label_349ed0;
        }
    }
    ctx->pc = 0x349EC4u;
    // 0x349ec4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x349EC4u;
    {
        const bool branch_taken_0x349ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349ec4) {
            ctx->pc = 0x349EF8u;
            goto label_349ef8;
        }
    }
    ctx->pc = 0x349ECCu;
    // 0x349ecc: 0x0  nop
    ctx->pc = 0x349eccu;
    // NOP
label_349ed0:
    // 0x349ed0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x349ED0u;
    {
        const bool branch_taken_0x349ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349ED0u;
        // 0x349ed4: 0x64020140  daddiu      $v0, $zero, 0x140 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)320);
        ctx->in_delay_slot = false;
        if (branch_taken_0x349ed0) {
            ctx->pc = 0x349EF8u;
            goto label_349ef8;
        }
    }
    ctx->pc = 0x349ED8u;
label_349ed8:
    // 0x349ed8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x349ED8u;
    {
        const bool branch_taken_0x349ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349ED8u;
        // 0x349edc: 0x64020140  daddiu      $v0, $zero, 0x140 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)320);
        ctx->in_delay_slot = false;
        if (branch_taken_0x349ed8) {
            ctx->pc = 0x349EF8u;
            goto label_349ef8;
        }
    }
    ctx->pc = 0x349EE0u;
label_349ee0:
    // 0x349ee0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x349EE0u;
    {
        const bool branch_taken_0x349ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349EE0u;
        // 0x349ee4: 0x64020280  daddiu      $v0, $zero, 0x280 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)640);
        ctx->in_delay_slot = false;
        if (branch_taken_0x349ee0) {
            ctx->pc = 0x349EF8u;
            goto label_349ef8;
        }
    }
    ctx->pc = 0x349EE8u;
label_349ee8:
    // 0x349ee8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x349EE8u;
    {
        const bool branch_taken_0x349ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349EE8u;
        // 0x349eec: 0x64020140  daddiu      $v0, $zero, 0x140 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)320);
        ctx->in_delay_slot = false;
        if (branch_taken_0x349ee8) {
            ctx->pc = 0x349EF8u;
            goto label_349ef8;
        }
    }
    ctx->pc = 0x349EF0u;
label_349ef0:
    // 0x349ef0: 0x64020050  daddiu      $v0, $zero, 0x50
    ctx->pc = 0x349ef0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)80);
    // 0x349ef4: 0x0  nop
    ctx->pc = 0x349ef4u;
    // NOP
label_349ef8:
    // 0x349ef8: 0x9084005f  lbu         $a0, 0x5F($a0)
    ctx->pc = 0x349ef8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 95)));
    // 0x349efc: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x349efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
    // 0x349f00: 0x24631760  addiu       $v1, $v1, 0x1760
    ctx->pc = 0x349f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5984));
    // 0x349f04: 0x42240  sll         $a0, $a0, 9
    ctx->pc = 0x349f04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x349f08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x349f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x349f0c: 0x24640110  addiu       $a0, $v1, 0x110
    ctx->pc = 0x349f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x349f10: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x349F10u;
    {
        const bool branch_taken_0x349f10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x349f10) {
            ctx->pc = 0x349F90u;
            goto label_349f90;
        }
    }
    ctx->pc = 0x349F18u;
    // 0x349f18: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x349F18u;
    {
        const bool branch_taken_0x349f18 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x349F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F18u;
        // 0x349f1c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349f18) {
            ctx->pc = 0x349F2Cu;
            goto label_349f2c;
        }
    }
    ctx->pc = 0x349F20u;
    // 0x349f20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x349f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349f24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x349F24u;
    {
        const bool branch_taken_0x349f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F24u;
        // 0x349f28: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x349f24) {
            ctx->pc = 0x349F44u;
            goto label_349f44;
        }
    }
    ctx->pc = 0x349F2Cu;
label_349f2c:
    // 0x349f2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x349f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x349f30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x349f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x349f34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x349f34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349f38: 0x0  nop
    ctx->pc = 0x349f38u;
    // NOP
    // 0x349f3c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x349f3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x349f40: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x349f40u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_349f44:
    // 0x349f44: 0xc48100a8  lwc1        $f1, 0xA8($a0)
    ctx->pc = 0x349f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349f48: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x349f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x349f4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x349f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349f50: 0x0  nop
    ctx->pc = 0x349f50u;
    // NOP
    // 0x349f54: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x349f54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x349f58: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x349f58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349f5c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x349F5Cu;
    {
        const bool branch_taken_0x349f5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x349f5c) {
            ctx->pc = 0x349F74u;
            goto label_349f74;
        }
    }
    ctx->pc = 0x349F64u;
    // 0x349f64: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x349f64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x349f68: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x349f68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x349f6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x349F6Cu;
    {
        const bool branch_taken_0x349f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F6Cu;
        // 0x349f70: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x349f6c) {
            ctx->pc = 0x349F90u;
            goto label_349f90;
        }
    }
    ctx->pc = 0x349F74u;
label_349f74:
    // 0x349f74: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x349f74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x349f78: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x349f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x349f7c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x349f7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x349f80: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x349f80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x349f84: 0x0  nop
    ctx->pc = 0x349f84u;
    // NOP
    // 0x349f88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x349f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x349f8c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x349f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_349f90:
    // 0x349f90: 0x3e00008  jr          $ra
    ctx->pc = 0x349F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349F98u;
}
