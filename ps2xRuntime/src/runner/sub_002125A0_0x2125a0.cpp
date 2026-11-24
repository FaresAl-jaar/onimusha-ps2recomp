#include <cstring>
#include <cstdio>
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

// Function: sub_002125A0
// Address: 0x2125a0 - 0x2125c4
void sub_002125A0_0x2125a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002125A0_0x2125a0");
#endif
    { static uint32_t n=0, last[16]; ++n; if ((n % 10)==0) { uint32_t w[16]; for (int i=0;i<8;++i) std::memcpy(&w[i], rdram+0x4dfc64u+i*4,4); for (int i=0;i<8;++i) std::memcpy(&w[8+i], rdram+0x4def68u+i*4,4); if (std::memcmp(w,last,sizeof w)) { std::memcpy(last,w,sizeof w); static uint32_t lines=0; if (++lines<3000) { fprintf(stderr,"[rmt] n=%u",n); for(int i=0;i<16;++i) fprintf(stderr," %x",w[i]); fprintf(stderr,"\n"); } } } }
    { static uint32_t n=0, last[24]; ++n; if ((n % 30)==0 && n>130000u) { uint32_t rna=0; std::memcpy(&rna, rdram+0x4bf37cu, 4); if (rna && rna<0x2000000u) { uint32_t w[24]; for (int i=0;i<16;++i) std::memcpy(&w[i], rdram+((rna+i*4)&0x1ffffffu),4); uint32_t sj=w[2]; for (int i=0;i<8;++i) { uint32_t q=0; if (sj && sj<0x2000000u) std::memcpy(&q, rdram+((sj+i*4)&0x1ffffffu),4); w[16+i]=q; } if (std::memcmp(w,last,sizeof w)) { std::memcpy(last,w,sizeof w); fprintf(stderr,"[rna] n=%u rna=0x%x",n,rna); for(int i=0;i<24;++i) fprintf(stderr," %x",w[i]); fprintf(stderr,"\n"); } } } }

    ctx->pc = 0x2125a0u;

    { static uint64_t last[5]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[5]={(uint64_t)((int64_t)(int8_t)READ8(0x4bf371)),(uint64_t)((int64_t)READ8(0x4bf372)),(uint64_t)((int64_t)READ8(0x4bf373)),(uint64_t)(READ32(0x4bf374)),(uint64_t)(READ32(0x4bf378)),}; bool chg=first; for(int i=0;i<5;++i) chg = chg || cur[i]!=last[i]; if (chg && lines<400) { ++lines; first=false; for(int i=0;i<5;++i) last[i]=cur[i]; fprintf(stderr,"[px sfdadxt] hit=%u " "stat=%lld b2=%lld b3=%lld w4=0x%llx w8=0x%llx" "\n",hits,(unsigned long long)cur[0],(unsigned long long)cur[1],(unsigned long long)cur[2],(unsigned long long)cur[3],(unsigned long long)cur[4]); } }
    { static uint64_t last[8]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[8]={(uint64_t)(READ32(0x4db244)),(uint64_t)(READ32(0x4db248)),(uint64_t)(READ32(0x4db24c)),(uint64_t)(READ32(0x4db250)),(uint64_t)(READ32(0x4db254)),(uint64_t)(READ32(0x4db258)),(uint64_t)(READ32(0x4db25c)),(uint64_t)(READ32(0x4db260)),}; bool chg=first; for(int i=0;i<8;++i) chg = chg || cur[i]!=last[i]; if (chg && hits>133300u && lines<400) { ++lines; first=false; for(int i=0;i<8;++i) last[i]=cur[i]; fprintf(stderr,"[px sjin] hit=%u " "w1=0x%llx w2=0x%llx w3=0x%llx w4=0x%llx w5=0x%llx w6=0x%llx w7=0x%llx w8=0x%llx" "\n",hits,(unsigned long long)cur[0],(unsigned long long)cur[1],(unsigned long long)cur[2],(unsigned long long)cur[3],(unsigned long long)cur[4],(unsigned long long)cur[5],(unsigned long long)cur[6],(unsigned long long)cur[7]); } }
    { static uint64_t last[8]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[8]={(uint64_t)((int64_t)READ8(0x4d9b74)),(uint64_t)((int64_t)READ8(0x4d9b75)),(uint64_t)((int64_t)READ8(0x4d9b76)),(uint64_t)((int64_t)READ8(0x4d9b77)),(uint64_t)(READ32(0x4d9b78)),(uint64_t)(READ32(0x4d9b7c)),(uint64_t)(READ32(0x4d9b80)),(uint64_t)(READ32(0x4d9b84)),}; bool chg=first; for(int i=0;i<8;++i) chg = chg || cur[i]!=last[i]; if (chg && lines<200) { ++lines; first=false; for(int i=0;i<8;++i) last[i]=cur[i]; fprintf(stderr,"[px rnaflag] hit=%u " "f50=%lld f51=%lld f52=%lld f53=%lld w54=0x%llx w58=0x%llx w5c=0x%llx w60=0x%llx" "\n",hits,(unsigned long long)cur[0],(unsigned long long)cur[1],(unsigned long long)cur[2],(unsigned long long)cur[3],(unsigned long long)cur[4],(unsigned long long)cur[5],(unsigned long long)cur[6],(unsigned long long)cur[7]); } }
    // 0x2125a0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2125A0u;
    {
        const bool branch_taken_0x2125a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2125A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2125A0u;
        // 0x2125a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2125a0) {
            ctx->pc = 0x2125BCu;
            goto label_2125bc;
        }
    }
    ctx->pc = 0x2125A8u;
    // 0x2125a8: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2125a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2125ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2125ACu;
    {
        const bool branch_taken_0x2125ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2125B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2125ACu;
        // 0x2125b0: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2125ac) {
            ctx->pc = 0x2125BCu;
            goto label_2125bc;
        }
    }
    ctx->pc = 0x2125B4u;
    // 0x2125b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2125b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2125b8: 0xac649fc0  sw          $a0, -0x6040($v1)
    ctx->pc = 0x2125b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942656), GPR_U32(ctx, 4));
label_2125bc:
    // 0x2125bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2125BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2125BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2125C4u;
}
