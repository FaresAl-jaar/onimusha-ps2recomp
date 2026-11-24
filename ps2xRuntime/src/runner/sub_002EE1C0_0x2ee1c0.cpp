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

// Function: sub_002EE1C0
// Address: 0x2ee1c0 - 0x2ee518
void sub_002EE1C0_0x2ee1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE1C0_0x2ee1c0");
#endif

    switch (ctx->pc) {
        case 0x2ee220u: goto label_2ee220;
        case 0x2ee230u: goto label_2ee230;
        case 0x2ee284u: goto label_2ee284;
        case 0x2ee294u: goto label_2ee294;
        case 0x2ee2e8u: goto label_2ee2e8;
        case 0x2ee408u: goto label_2ee408;
        case 0x2ee468u: goto label_2ee468;
        case 0x2ee4c8u: goto label_2ee4c8;
        default: break;
    }

    ctx->pc = 0x2ee1c0u;

    // 0x2ee1c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ee1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ee1c4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ee1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ee1c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ee1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ee1cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ee1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ee1d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ee1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ee1d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ee1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ee1d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ee1d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee1dc: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x2ee1dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x2ee1e0: 0x108300b1  beq         $a0, $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x2EE1E0u;
    {
        const bool branch_taken_0x2ee1e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EE1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE1E0u;
        // 0x2ee1e4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee1e0) {
            ctx->pc = 0x2EE4A8u;
            goto label_2ee4a8;
        }
    }
    ctx->pc = 0x2EE1E8u;
    // 0x2ee1e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ee1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ee1ec: 0x10830096  beq         $a0, $v1, . + 4 + (0x96 << 2)
    ctx->pc = 0x2EE1ECu;
    {
        const bool branch_taken_0x2ee1ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EE1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE1ECu;
        // 0x2ee1f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee1ec) {
            ctx->pc = 0x2EE448u;
            goto label_2ee448;
        }
    }
    ctx->pc = 0x2EE1F4u;
    // 0x2ee1f4: 0x1083007c  beq         $a0, $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x2EE1F4u;
    {
        const bool branch_taken_0x2ee1f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee1f4) {
            ctx->pc = 0x2EE3E8u;
            goto label_2ee3e8;
        }
    }
    ctx->pc = 0x2EE1FCu;
    // 0x2ee1fc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE1FCu;
    {
        const bool branch_taken_0x2ee1fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee1fc) {
            ctx->pc = 0x2EE210u;
            goto label_2ee210;
        }
    }
    ctx->pc = 0x2EE204u;
    // 0x2ee204: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x2EE204u;
    {
        const bool branch_taken_0x2ee204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee204) {
            ctx->pc = 0x2EE500u;
            goto label_2ee500;
        }
    }
    ctx->pc = 0x2EE20Cu;
    // 0x2ee20c: 0x0  nop
    ctx->pc = 0x2ee20cu;
    // NOP
label_2ee210:
    // 0x2ee210: 0x8e2507c0  lw          $a1, 0x7C0($s1)
    ctx->pc = 0x2ee210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
    // 0x2ee214: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2ee214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2ee218: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2EE218u;
    SET_GPR_U32(ctx, 31, 0x2EE220u);
    ctx->pc = 0x2EE21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE218u;
    // 0x2ee21c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2EE218u, 0x2EE220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE220u;
label_2ee220:
    // 0x2ee220: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x2EE220u;
    {
        const bool branch_taken_0x2ee220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE220u;
        // 0x2ee224: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee220) {
            ctx->pc = 0x2EE3B8u;
            goto label_2ee3b8;
        }
    }
    ctx->pc = 0x2EE228u;
    // 0x2ee228: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x2EE228u;
    SET_GPR_U32(ctx, 31, 0x2EE230u);
    ctx->pc = 0x2EE22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE228u;
    // 0x2ee22c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x2EE228u, 0x2EE230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE230u;
label_2ee230:
    // 0x2ee230: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x2ee230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x2ee234: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2ee234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2ee238: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2ee238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ee23c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2ee23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2ee240: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ee240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ee244: 0x0  nop
    ctx->pc = 0x2ee244u;
    // NOP
    // 0x2ee248: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2ee248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ee24c: 0x862200c2  lh          $v0, 0xC2($s1)
    ctx->pc = 0x2ee24cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x2ee250: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ee250u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2ee254: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ee254u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ee258: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2ee258u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ee25c: 0x0  nop
    ctx->pc = 0x2ee25cu;
    // NOP
    // 0x2ee260: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2ee260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2ee264: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2ee264u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2ee268: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x2ee268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x2ee26c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2ee26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2ee270: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2ee270u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2ee274: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2ee274u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ee278: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x2ee278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ee27c: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x2EE27Cu;
    SET_GPR_U32(ctx, 31, 0x2EE284u);
    ctx->pc = 0x2EE280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE27Cu;
    // 0x2ee280: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x2EE27Cu, 0x2EE284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE284u;
label_2ee284:
    // 0x2ee284: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x2ee284u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ee288: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x2ee288u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x2ee28c: 0xc0969a4  jal         func_25A690
    ctx->pc = 0x2EE28Cu;
    SET_GPR_U32(ctx, 31, 0x2EE294u);
    ctx->pc = 0x2EE290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE28Cu;
    // 0x2ee290: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A690u, 0x2EE28Cu, 0x2EE294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE294u;
label_2ee294:
    // 0x2ee294: 0x2c41071d  sltiu       $at, $v0, 0x71D
    ctx->pc = 0x2ee294u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1821) ? 1 : 0);
    // 0x2ee298: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EE298u;
    {
        const bool branch_taken_0x2ee298 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE298u;
        // 0x2ee29c: 0x102040  sll         $a0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee298) {
            ctx->pc = 0x2EE2E0u;
            goto label_2ee2e0;
        }
    }
    ctx->pc = 0x2EE2A0u;
    // 0x2ee2a0: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2ee2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2ee2a4: 0x2463c412  addiu       $v1, $v1, -0x3BEE
    ctx->pc = 0x2ee2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951954));
    // 0x2ee2a8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2ee2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2ee2ac: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2ee2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ee2b0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2ee2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ee2b4: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x2ee2b4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ee2b8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ee2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2ee2bc: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2ee2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee2c0: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2ee2c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2ee2c4: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2ee2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee2c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ee2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ee2cc: 0xa62607f2  sh          $a2, 0x7F2($s1)
    ctx->pc = 0x2ee2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x2ee2d0: 0xa22507f5  sb          $a1, 0x7F5($s1)
    ctx->pc = 0x2ee2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ee2d4: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x2ee2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
    // 0x2ee2d8: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x2EE2D8u;
    {
        const bool branch_taken_0x2ee2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE2D8u;
        // 0x2ee2dc: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee2d8) {
            ctx->pc = 0x2EE500u;
            goto label_2ee500;
        }
    }
    ctx->pc = 0x2EE2E0u;
label_2ee2e0:
    // 0x2ee2e0: 0xc0969a4  jal         func_25A690
    ctx->pc = 0x2EE2E0u;
    SET_GPR_U32(ctx, 31, 0x2EE2E8u);
    ctx->pc = 0x2EE2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE2E0u;
    // 0x2ee2e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A690u, 0x2EE2E0u, 0x2EE2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE2E8u;
label_2ee2e8:
    // 0x2ee2e8: 0x2c410200  sltiu       $at, $v0, 0x200
    ctx->pc = 0x2ee2e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x2ee2ec: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2EE2ECu;
    {
        const bool branch_taken_0x2ee2ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee2ec) {
            ctx->pc = 0x2EE320u;
            goto label_2ee320;
        }
    }
    ctx->pc = 0x2EE2F4u;
    // 0x2ee2f4: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2ee2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee2f8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2ee2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ee2fc: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2ee2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee300: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ee300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2ee304: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x2ee304u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x2ee308: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2ee308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2ee30c: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x2ee30cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee310: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ee310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee314: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x2ee314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
    // 0x2ee318: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x2EE318u;
    {
        const bool branch_taken_0x2ee318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE318u;
        // 0x2ee31c: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee318) {
            ctx->pc = 0x2EE500u;
            goto label_2ee500;
        }
    }
    ctx->pc = 0x2EE320u;
label_2ee320:
    // 0x2ee320: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x2ee320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x2ee324: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2ee324u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2ee328: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EE328u;
    {
        const bool branch_taken_0x2ee328 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2EE32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE328u;
        // 0x2ee32c: 0x102040  sll         $a0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee328) {
            ctx->pc = 0x2EE370u;
            goto label_2ee370;
        }
    }
    ctx->pc = 0x2EE330u;
    // 0x2ee330: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2ee330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2ee334: 0x2463c410  addiu       $v1, $v1, -0x3BF0
    ctx->pc = 0x2ee334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951952));
    // 0x2ee338: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2ee338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2ee33c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2ee33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ee340: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2ee340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ee344: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x2ee344u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ee348: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ee348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2ee34c: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2ee34cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee350: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2ee350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2ee354: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2ee354u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee358: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ee358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee35c: 0xa62607f2  sh          $a2, 0x7F2($s1)
    ctx->pc = 0x2ee35cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x2ee360: 0xa22507f5  sb          $a1, 0x7F5($s1)
    ctx->pc = 0x2ee360u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ee364: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x2ee364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
    // 0x2ee368: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x2EE368u;
    {
        const bool branch_taken_0x2ee368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE368u;
        // 0x2ee36c: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee368) {
            ctx->pc = 0x2EE500u;
            goto label_2ee500;
        }
    }
    ctx->pc = 0x2EE370u;
label_2ee370:
    // 0x2ee370: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2ee370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2ee374: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x2ee374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2ee378: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2ee378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ee37c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2ee37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2ee380: 0x2463c411  addiu       $v1, $v1, -0x3BEF
    ctx->pc = 0x2ee380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951953));
    // 0x2ee384: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ee384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ee388: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x2ee388u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ee38c: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2ee38cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee390: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ee390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2ee394: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2ee394u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee398: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2ee398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2ee39c: 0xa62607f2  sh          $a2, 0x7F2($s1)
    ctx->pc = 0x2ee39cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x2ee3a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ee3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ee3a4: 0xa22507f5  sb          $a1, 0x7F5($s1)
    ctx->pc = 0x2ee3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ee3a8: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x2ee3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
    // 0x2ee3ac: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2EE3ACu;
    {
        const bool branch_taken_0x2ee3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE3ACu;
        // 0x2ee3b0: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee3ac) {
            ctx->pc = 0x2EE500u;
            goto label_2ee500;
        }
    }
    ctx->pc = 0x2EE3B4u;
    // 0x2ee3b4: 0x0  nop
    ctx->pc = 0x2ee3b4u;
    // NOP
label_2ee3b8:
    // 0x2ee3b8: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2ee3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee3bc: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2ee3bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee3c0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2ee3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ee3c4: 0xa62307f2  sh          $v1, 0x7F2($s1)
    ctx->pc = 0x2ee3c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ee3c8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ee3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2ee3cc: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x2ee3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee3d0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2ee3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2ee3d4: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x2ee3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
    // 0x2ee3d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ee3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee3dc: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2EE3DCu;
    {
        const bool branch_taken_0x2ee3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE3DCu;
        // 0x2ee3e0: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee3dc) {
            ctx->pc = 0x2EE500u;
            goto label_2ee500;
        }
    }
    ctx->pc = 0x2EE3E4u;
    // 0x2ee3e4: 0x0  nop
    ctx->pc = 0x2ee3e4u;
    // NOP
label_2ee3e8:
    // 0x2ee3e8: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x2ee3e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x2ee3ec: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2EE3ECu;
    {
        const bool branch_taken_0x2ee3ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee3ec) {
            ctx->pc = 0x2EE500u;
            goto label_2ee500;
        }
    }
    ctx->pc = 0x2EE3F4u;
    // 0x2ee3f4: 0x862200c2  lh          $v0, 0xC2($s1)
    ctx->pc = 0x2ee3f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x2ee3f8: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2ee3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2ee3fc: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x2ee3fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ee400: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x2EE400u;
    SET_GPR_U32(ctx, 31, 0x2EE408u);
    ctx->pc = 0x2EE404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE400u;
    // 0x2ee404: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x2EE400u, 0x2EE408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE408u;
label_2ee408:
    // 0x2ee408: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2ee408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2ee40c: 0xa62200c2  sh          $v0, 0xC2($s1)
    ctx->pc = 0x2ee40cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ee410: 0x2463c418  addiu       $v1, $v1, -0x3BE8
    ctx->pc = 0x2ee410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951960));
    // 0x2ee414: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x2ee414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2ee418: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x2ee418u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ee41c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ee41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2ee420: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2ee420u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee424: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2ee424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2ee428: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2ee428u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee42c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ee42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee430: 0xa62507f2  sh          $a1, 0x7F2($s1)
    ctx->pc = 0x2ee430u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ee434: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x2ee434u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee438: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x2ee438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
    // 0x2ee43c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2EE43Cu;
    {
        const bool branch_taken_0x2ee43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE43Cu;
        // 0x2ee440: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee43c) {
            ctx->pc = 0x2EE500u;
            goto label_2ee500;
        }
    }
    ctx->pc = 0x2EE444u;
    // 0x2ee444: 0x0  nop
    ctx->pc = 0x2ee444u;
    // NOP
label_2ee448:
    // 0x2ee448: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x2ee448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x2ee44c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2EE44Cu;
    {
        const bool branch_taken_0x2ee44c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee44c) {
            ctx->pc = 0x2EE500u;
            goto label_2ee500;
        }
    }
    ctx->pc = 0x2EE454u;
    // 0x2ee454: 0x862200c2  lh          $v0, 0xC2($s1)
    ctx->pc = 0x2ee454u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x2ee458: 0x2442fc00  addiu       $v0, $v0, -0x400
    ctx->pc = 0x2ee458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966272));
    // 0x2ee45c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x2ee45cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ee460: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x2EE460u;
    SET_GPR_U32(ctx, 31, 0x2EE468u);
    ctx->pc = 0x2EE464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE460u;
    // 0x2ee464: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x2EE460u, 0x2EE468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE468u;
label_2ee468:
    // 0x2ee468: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2ee468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2ee46c: 0xa62200c2  sh          $v0, 0xC2($s1)
    ctx->pc = 0x2ee46cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ee470: 0x2463c418  addiu       $v1, $v1, -0x3BE8
    ctx->pc = 0x2ee470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951960));
    // 0x2ee474: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x2ee474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2ee478: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x2ee478u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ee47c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ee47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2ee480: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2ee480u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee484: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2ee484u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2ee488: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2ee488u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee48c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ee48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee490: 0xa62507f2  sh          $a1, 0x7F2($s1)
    ctx->pc = 0x2ee490u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ee494: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x2ee494u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee498: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x2ee498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
    // 0x2ee49c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2EE49Cu;
    {
        const bool branch_taken_0x2ee49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE49Cu;
        // 0x2ee4a0: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee49c) {
            ctx->pc = 0x2EE500u;
            goto label_2ee500;
        }
    }
    ctx->pc = 0x2EE4A4u;
    // 0x2ee4a4: 0x0  nop
    ctx->pc = 0x2ee4a4u;
    // NOP
label_2ee4a8:
    // 0x2ee4a8: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x2ee4a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x2ee4ac: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EE4ACu;
    {
        const bool branch_taken_0x2ee4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee4ac) {
            ctx->pc = 0x2EE500u;
            goto label_2ee500;
        }
    }
    ctx->pc = 0x2EE4B4u;
    // 0x2ee4b4: 0x862200c2  lh          $v0, 0xC2($s1)
    ctx->pc = 0x2ee4b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x2ee4b8: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x2ee4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x2ee4bc: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x2ee4bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ee4c0: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x2EE4C0u;
    SET_GPR_U32(ctx, 31, 0x2EE4C8u);
    ctx->pc = 0x2EE4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE4C0u;
    // 0x2ee4c4: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x2EE4C0u, 0x2EE4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE4C8u;
label_2ee4c8:
    // 0x2ee4c8: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2ee4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2ee4cc: 0xa62200c2  sh          $v0, 0xC2($s1)
    ctx->pc = 0x2ee4ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ee4d0: 0x2463c418  addiu       $v1, $v1, -0x3BE8
    ctx->pc = 0x2ee4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951960));
    // 0x2ee4d4: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x2ee4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2ee4d8: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x2ee4d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ee4dc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ee4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2ee4e0: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2ee4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee4e4: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2ee4e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2ee4e8: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2ee4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee4ec: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2ee4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ee4f0: 0xa62507f2  sh          $a1, 0x7F2($s1)
    ctx->pc = 0x2ee4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ee4f4: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x2ee4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee4f8: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x2ee4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
    // 0x2ee4fc: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x2ee4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
label_2ee500:
    // 0x2ee500: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ee500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ee504: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ee504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ee508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ee508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee50c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ee50cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee510: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE510u;
        // 0x2ee514: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE518u;
}
