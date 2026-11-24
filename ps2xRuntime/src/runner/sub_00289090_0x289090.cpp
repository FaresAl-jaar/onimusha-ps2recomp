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

// Function: sub_00289090
// Address: 0x289090 - 0x2891d8
void sub_00289090_0x289090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289090_0x289090");
#endif

    switch (ctx->pc) {
        case 0x289128u: goto label_289128;
        case 0x289148u: goto label_289148;
        default: break;
    }

    ctx->pc = 0x289090u;

    // 0x289090: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x289090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x289094: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x289094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x289098: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x289098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28909c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x28909cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2890a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2890a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2890a4: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x2890a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x2890a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2890a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2890ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2890acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2890b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2890b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2890b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2890b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2890b8: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x2890b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2890bc: 0x90870002  lbu         $a3, 0x2($a0)
    ctx->pc = 0x2890bcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2890c0: 0x848304ec  lh          $v1, 0x4EC($a0)
    ctx->pc = 0x2890c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1260)));
    // 0x2890c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2890c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2890c8: 0x848200c2  lh          $v0, 0xC2($a0)
    ctx->pc = 0x2890c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 194)));
    // 0x2890cc: 0x24c60b94  addiu       $a2, $a2, 0xB94
    ctx->pc = 0x2890ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2964));
    // 0x2890d0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x2890d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2890d4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2890d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2890d8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x2890d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2890dc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2890dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2890e0: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x2890e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2890e4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2890e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2890e8: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2890e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2890ec: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2890ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2890f0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x2890f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2890f4: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x2890f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2890f8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2890f8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2890fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2890fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289100: 0x0  nop
    ctx->pc = 0x289100u;
    // NOP
    // 0x289104: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x289104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x289108: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x289108u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x28910c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28910cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x289110: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x289110u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x289114: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x289114u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x289118: 0x0  nop
    ctx->pc = 0x289118u;
    // NOP
    // 0x28911c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x28911cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x289120: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x289120u;
    SET_GPR_U32(ctx, 31, 0x289128u);
    ctx->pc = 0x289124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289120u;
    // 0x289124: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x289120u, 0x289128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289128u;
label_289128:
    // 0x289128: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x289128u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x28912c: 0xde220500  ld          $v0, 0x500($s1)
    ctx->pc = 0x28912cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
    // 0x289130: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x289130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x289134: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x289134u;
    {
        const bool branch_taken_0x289134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289134u;
        // 0x289138: 0x12943f  dsra32      $s2, $s2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289134) {
            ctx->pc = 0x2891B8u;
            goto label_2891b8;
        }
    }
    ctx->pc = 0x28913Cu;
    // 0x28913c: 0x12243c  dsll32      $a0, $s2, 16
    ctx->pc = 0x28913cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
    // 0x289140: 0xc0969a4  jal         func_25A690
    ctx->pc = 0x289140u;
    SET_GPR_U32(ctx, 31, 0x289148u);
    ctx->pc = 0x289144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289140u;
    // 0x289144: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A690u, 0x289140u, 0x289148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289148u;
label_289148:
    // 0x289148: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x289148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x28914c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x28914cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x289150: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x289150u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x289154: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x289154u;
    {
        const bool branch_taken_0x289154 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x289154) {
            ctx->pc = 0x289170u;
            goto label_289170;
        }
    }
    ctx->pc = 0x28915Cu;
    // 0x28915c: 0x862304ec  lh          $v1, 0x4EC($s1)
    ctx->pc = 0x28915cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1260)));
    // 0x289160: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x289160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289164: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x289164u;
    {
        const bool branch_taken_0x289164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289164u;
        // 0x289168: 0xa62300c2  sh          $v1, 0xC2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289164) {
            ctx->pc = 0x2891C0u;
            goto label_2891c0;
        }
    }
    ctx->pc = 0x28916Cu;
    // 0x28916c: 0x0  nop
    ctx->pc = 0x28916cu;
    // NOP
label_289170:
    // 0x289170: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x289170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x289174: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x289174u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x289178: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x289178u;
    {
        const bool branch_taken_0x289178 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x289178) {
            ctx->pc = 0x289190u;
            goto label_289190;
        }
    }
    ctx->pc = 0x289180u;
    // 0x289180: 0x862200c2  lh          $v0, 0xC2($s1)
    ctx->pc = 0x289180u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x289184: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x289184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x289188: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x289188u;
    {
        const bool branch_taken_0x289188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289188u;
        // 0x28918c: 0xa62200c2  sh          $v0, 0xC2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289188) {
            ctx->pc = 0x2891A0u;
            goto label_2891a0;
        }
    }
    ctx->pc = 0x289190u;
label_289190:
    // 0x289190: 0x862200c2  lh          $v0, 0xC2($s1)
    ctx->pc = 0x289190u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x289194: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x289194u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x289198: 0xa62200c2  sh          $v0, 0xC2($s1)
    ctx->pc = 0x289198u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x28919c: 0x0  nop
    ctx->pc = 0x28919cu;
    // NOP
label_2891a0:
    // 0x2891a0: 0x862300c2  lh          $v1, 0xC2($s1)
    ctx->pc = 0x2891a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x2891a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2891a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2891a8: 0x24631000  addiu       $v1, $v1, 0x1000
    ctx->pc = 0x2891a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
    // 0x2891ac: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x2891acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x2891b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2891B0u;
    {
        const bool branch_taken_0x2891b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2891B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891B0u;
        // 0x2891b4: 0xa62300c2  sh          $v1, 0xC2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2891b0) {
            ctx->pc = 0x2891C0u;
            goto label_2891c0;
        }
    }
    ctx->pc = 0x2891B8u;
label_2891b8:
    // 0x2891b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2891b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2891bc: 0x0  nop
    ctx->pc = 0x2891bcu;
    // NOP
label_2891c0:
    // 0x2891c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2891c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2891c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2891c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2891c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2891c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2891cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2891ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2891d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2891D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2891D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2891D0u;
        // 0x2891d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2891D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2891D8u;
}
